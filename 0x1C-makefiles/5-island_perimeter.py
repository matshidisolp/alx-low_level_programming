#!/usr/bin/python3
def island_perimeter(grid):
    """
    Returns the perimeter of the island from grid.
    grid is a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
    Grid cells are connected horizontally/vertically.
    Grid is rectangular, width and height don’t exceed 100.
    Grid is completely surrounded by water, and there is
    one island (or nothing).
    The island doesn’t have “lakes” (water inside that
    isn’t connected to the water around the island).
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                # Check all four directions
                if r == 0 or grid[r - 1][c] == 0:  # Up
                    perimeter += 1
                if r == rows - 1 or grid[r + 1][c] == 0:  # Down
                    perimeter += 1
                if c == 0 or grid[r][c - 1] == 0:  # Left
                    perimeter += 1
                if c == cols - 1 or grid[r][c + 1] == 0:  # Right
                    perimeter += 1

    return perimeter
