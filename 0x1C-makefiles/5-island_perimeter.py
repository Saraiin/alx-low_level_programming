#!/usr/bin/python3
"""Island Perimeter module"""


def island_perimeter(grid):
    """Calculates Island Perimeter"""
    pm = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                pm += 4
                if row < len(grid) - 1 and grid[row + 1][col] == 1:
                    pm -= 2
                if col < len(grid[row]) - 1 and grid[row][col + 1] == 1:
                    pm -= 2

    return pm
