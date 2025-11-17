#include <grid.h>

Grid::Grid() 
{
    numRows = 20; numCols = 10; cellSize = 30;
    init_grid();
    colors = GetCellColors();
} 
void 
Grid::init_grid(void) 
{
    for(int i = 0; i != numRows; i++) {
        for(int j = 0; j != numCols; j++) {
            grid[i][j] = 0;
        }
    }
}
void 
Grid::print_grid(void) 
{
    for(int i = 0; i != numRows; i++) {
        for(int j = 0; j != numCols; j++) {
            printf("%i ",grid[i][j]);
        }
        putchar('\n');
    }
}
std::vector<Color> 
Grid::GetCellColors() 
{
    Color darkGrey = {26, 31, 40, 255};
    Color green = {47, 230, 23, 255};
    Color red = {232, 18, 18, 255};
    Color orange = {226, 116, 17, 255};
    Color yellow = {237, 234, 4, 255};
    Color purple = {166, 0, 247, 255};
    Color cyan = {21, 204, 209, 255};
    Color blue = {13, 64, 216, 255};
    Color lightBlue = {59, 85, 162, 255};
    Color darkBlue = {44, 44, 127, 255};

    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}

void
Grid::draw(void)
{
    for(int i = 0; i != numRows; i++) {
        for(int j = 0; j != numCols; j++) {
            int cellValue = grid[i][j];
            DrawRectangle(j * cellSize+1, i * cellSize+1, cellSize-1, cellSize-1, colors[cellValue]);
        }
    }
}