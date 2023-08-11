#include <stdio.h>
#include <elf.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdint.h>
void confirm_elf(unsigned char *head);
void print_class(unsigned char *head);
void print_data(unsigned char *head);
void print_version(unsigned char *head);
void print_osabi(unsigned char *head);
void print_abiver(unsigned char *head);
void print_type(uint16_t type);
void print_entry(uint32_t entry);
/**
 * main - prints header of an elf file
 * @ac: arguments count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr *header;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Can't open the file\n");
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		dprintf(STDERR_FILENO, "Couldn't allocate necessary space\n");
		exit(98);
	}
	if (read(fd, header, sizeof(Elf64_Ehdr)) == -1)
	{
		dprintf(STDERR_FILENO, "Can't read the file\n");
		exit(98);
	}
	confirm_elf(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abiver(header->e_ident);
	print_type(header->e_type);
	print_entry(header->e_entry);
	close(fd);
	free(header);
	return (0);
}
/**
 * confirm_elf - confirms if a file is ELF and prints the magic
 * @head: the header of the Elf file
 */
void confirm_elf(unsigned char *head)
{
	char elf_mgc[4];
	int i;
	char *str;
	char msg[] = "elf_header: Error: Not an ELF file - it has the wrong";
	char msg2[] = "magic bytes at the start\n";

	str = "Magic:";
	elf_mgc[0] = 0x7f;
	elf_mgc[1] = 0x45;
	elf_mgc[2] = 0x4c;
	elf_mgc[3] = 0x46;
	for (i = 0; i < 4; i++)
	{
		if (head[i] != elf_mgc[i])
		{
			dprintf(STDERR_FILENO, "%s %s", msg, msg2);
			exit(98);
		}
	}
	printf("ELF Header:\n");
	printf("  %-8s", str);
	for (i = 0; i < 15; i++)
		printf(" %02x", head[i]);
	printf("\n");
}
/**
 * print_class - prints class section
 * @head: the header
 */
void print_class(unsigned char *head)
{
	char msg[] = "Class:";

	switch (head[4])
	{
	case 0x00:
		printf("  %-35sELFCLASSNONE\n", msg);
		break;
	case 0x01:
		printf("  %-35sELF32\n", msg);
		break;
	case 0x02:
		printf("  %-35sELF64\n", msg);
		break;
	default:
		break;
	}
}
/**
 * print_data - prints data section
 * @head: the header
 */
void print_data(unsigned char *head)
{
	char msg[] = "Data:";

	switch (head[5])
	{
	case 0x00:
		printf("  %-35sUnknown data format\n", msg);
		break;
	case 0x01:
		printf("  %-35s2's complement, little endian\n", msg);
		break;
	case 0x02:
		printf("  %-35s2's complement, big endian\n", msg);
		break;
	default:
		break;
	}
}
/**
 * print_version - prints the version of an elf file
 * @head: the header
 */
void print_version(unsigned char *head)
{
	char msg[] = "Version:";

	switch (head[6])
	{
	case 0x00:
		printf("  %-35s0 (invalid)\n", msg);
		break;
	case 0x01:
		printf("  %-35s1 (current)\n", msg);
		break;
	default:
		break;
	}
}
/**
 * print_osabi - prints the osabi of the file
 * @head: the header
 */
void print_osabi(unsigned char *head)
{
	char msg[] = "OS/ABI:";

	switch (head[7])
	{
	case 0x00:
		printf("  %-35sUNIX - System V\n", msg);
		break;
	case 0x01:
		printf("  %-35sUNIX - HP-UX\n", msg);
		break;
	case 0x02:
		printf("  %-35sUNIX - NetBSD\n", msg);
		break;
	case 0x03:
		printf("  %-35sUNIX - Linux\n", msg);
		break;
	case 0x06:
		printf("  %-35sUNIX - Solaris\n", msg);
		break;
	case 0x08:
		printf("  %-35sUNIX - IRIX\n", msg);
		break;
	case 0x09:
		printf("  %-35sUNIX - FreeBSD\n", msg);
		break;
	case 0x0a:
		printf("  %-35sUNIX - TRU64\n", msg);
		break;
	case 0x61:
		printf("  %-35sARM\n", msg);
		break;
	case 0xff:
		printf("  %-35sStandalone\n", msg);
		break;
	default:
		break;
	}
}
/**
 * print_abiver - prints the abi version
 * @head: entry field in header
 */
void print_abiver(unsigned char *head)
{
	char msg[] = "ABI Version:";

	printf("  %-35s%d\n", msg, head[8]);
}
/**
 * print_type - prints the type of the Elf file
 * @type: type field from header
 */
void print_type(uint16_t type)
{
	char msg[] = "Type:";

	switch (type)
	{
	case 0:
		printf("  %-35sUnknown type\n", msg);
		break;
	case 1:
		printf("  %-35sREL (Relocatable file)\n", msg);
		break;
	case 2:
		printf("  %-35sEXEC (Executable file)\n", msg);
		break;
	case 3:
		printf("  %-35sDYN (Shared object file)\n", msg);
		break;
	case 4:
		printf("  %-35sCORE (Core file)\n", msg);
		break;
	default:
		break;
	}
}
/**
 * print_entry - prints the entry to main
 * @entry: entry field in header
 */
void print_entry(uint32_t entry)
{
	char msg[] = "Entry point address:";

	printf("  %-35s%#x\n", msg, entry);
}
