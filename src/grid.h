#ifndef GRID_H
#define GRID_H

#include <stdio.h>
#include <stddef.h>
#include <raylib.h>
#include <vector>

class Grid 
{
public:
    int grid[20][10];
    Grid();
    void init_grid(void);
    void draw(void);
    void print_grid(void);
private:
    std::vector<Color> GetCellColors();

    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};

#endif