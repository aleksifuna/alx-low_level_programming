gcc $CFILE -o c :compiles the c file with the game saved in the global variable CFILE
gcc -c $CFILE -0 $(echo $CFILE|tr '.c' '.o'):compiles the code but doesnt link
gcc -S $CFILE -o $(echo $CFILE|tr '.c' '.s'):generates the assembly code of a C code and save it in an output file.
gcc $CFILE -o cisfun:compiles a C file and creates an executable named cisfun
gcc -S -masm=intel $CFILE -o $(echo $CFILE|tr '.c' '.s'):generates the assembly code (Intel syntax) of a C code and save it in an output file
