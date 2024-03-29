#!/usr/bin/python3
"""Defines an island perimeter measuring fuction"""


def island_perimeter(grid):
    """Return the perimeter of the island.

    The grid represents water 0 and 1 and by 1.

    Args:
    
        grid (list) = A list of list of integers representing an island.
    Return:
        The perimeter of the island defined in grid.
    """

width = len(grid[0])
height = len(grid)
edges = 0
size = 0

for i in range(height):
    for j in range(width):
        if grid[i][j] == 1:
            size += 1
            # checking for boundery or a lake
            if (j > 0 and grid[i][j - 1] == 1):
                edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
return size * 4 - edges * 2
