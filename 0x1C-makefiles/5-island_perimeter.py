#!/usr/bin/python3
"""
supplies one function island_perimeter
"""


def island_perimeter(grid):
    """
    calculates and returns the perimeter of theisland described in grid
    """
    perimeter = 0
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i]) - 1):
            if grid[i][j] == 1:
                perimeter += 4
                if grid[i][j-1] == 1:
                    perimeter -= 1
                if grid[i][j+1] == 1:
                    perimeter -= 1
                if grid[i-1][j] == 1:
                    perimeter -= 1
                if grid[i+1][j] == 1:
                    perimeter -= 1
            j += 1
        i += 1
    return perimeter
