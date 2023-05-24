#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """perimeter function"""
    d = 0
    perimeter = 0
    height = len(grid)
    length = len(grid[0])
    for line in grid:
        count = 0

        for val in line:
            if val == 1:
                sides = 4
                if count != length - 1:
                    if grid[d][count + 1] == 1:
                        sides -= 1
                if count != 0:
                    if grid[d][count - 1] == 1:
                        sides -= 1
                if d != height - 1:
                    if grid[d + 1][count] == 1:
                        sides -= 1
                if d != 0:
                    if grid[d - 1][count] == 1:
                        sides -= 1
                perimeter += sides
            count += 1
        d += 1
    return perimeter
