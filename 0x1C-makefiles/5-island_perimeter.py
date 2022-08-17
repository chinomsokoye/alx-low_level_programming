#!/usr/bin/python3
"""
Module island_perimeter
"""


def island_perimeter(grid):
    """Returns perimeter of an island described in grid"""
    isl_per = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    isl_per += 1
                if row == (len(grid) - 1) or grid[row + 1][col] == 0:
                    isl_per += 1
                if col == 0 or grid[row][col - 1] == 0:
                    isl_per += 1
                if col == (len(grid[0]) - 1) or grid[row][col + 1] == 0:
                    isl_per += 1
    return isl_per
