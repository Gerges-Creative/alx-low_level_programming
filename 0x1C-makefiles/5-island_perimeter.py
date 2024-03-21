#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
    Function to calculate the perimeter of the grid.
    Noting that any where outside the grid is water.
    """
    perimeter = 0
    lenI = len(grid)

    for i in range(len(grid)):
        lenJ = len(grid[i])
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1  # Top row
                if i == (lenI - 1) or grid[i + 1][j] == 0:
                    perimeter += 1  # Bottom row
                if j == (lenJ - 1) or grid[i][j + 1] == 0:
                    perimeter += 1  # Right side
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1  # Left side

    return perimeter
