#!/usr/bin/python3
"""
supplies one function island_perimeter
"""


def island_perimeter(grid):
    """
    calculates and returns the perimeter of theisland described in grid
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if j != 0:
                    if grid[i][j-1] == 1:
                        perimeter -= 1
                if j != len(grid[i]) - 1:
                    if grid[i][j+1] == 1:
                        perimeter -= 1
                if i != 0:
                    if grid[i-1][j] == 1:
                        perimeter -= 1
                if i != len(grid) - 1:
                    if grid[i+1][j] == 1:
                        perimeter -= 1
            j += 1
        i += 1
    return perimeter
