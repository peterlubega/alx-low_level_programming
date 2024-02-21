#!/usr/bin/python3
"""island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in the grid"""
    perimeter_count = 0
    rows = len(grid) - 1
    cols = len(grid[0]) - 1

    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                """Check top edge or left neighbor"""
                if i == 0 or grid[i - 1][j] != 1:
                    perimeter_count += 1
                """Check left edge or upper neighbor"""
                if j == 0 or grid[i][j - 1] != 1:
                    perimeter_count += 1
                """Check right edge or right neighbor"""
                if j == cols or grid[i][j + 1] != 1:
                    perimeter_count += 1
                """Check bottom edge or lower neighbor"""
                if i == rows or grid[i + 1][j] != 1:
                    perimeter_count += 1

    return perimeter_count
