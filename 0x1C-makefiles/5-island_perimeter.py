#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
    Function to calculate the perimeter of the grid
    """
    perimeter = 0
    lenI = len(grid)

    for i in range(len(grid)):
        lenJ = len(grid[i])
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if j != lenJ - 1 and grid[i][j + 1] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if i != lenI - 1 and grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i - 1][j] == 0:
                    perimeter += 1

    return perimeter
