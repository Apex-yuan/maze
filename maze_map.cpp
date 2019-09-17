#include "maze_map.h"
#include <iostream>

using namespace std;

int MazeMap::maze_map[LENGTH][WIDTH] = {WALL, WALL, ROAD, WALL, WALL, WALL, WALL, ROAD, WALL, WALL,
                                        WALL, WALL, ROAD, WALL, WALL, WALL, WALL, ROAD, WALL, WALL,
                                        WALL, WALL, WALL, ROAD, ROAD, ROAD, WALL, ROAD, WALL, WALL,
                                        WALL, ROAD, ROAD, ROAD, WALL, ROAD, ROAD, ROAD, WALL, WALL,
                                        WALL, ROAD, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL
                                        };

MazeMap::MazeMap(void)
{
    // for(int i = 0; i < LENGTH; ++i)
    // {
    //     for(int j =0; j < WIDTH; ++j)
    //     {
            
    //     }
    // }
}

MazeMap::MazeMap(int *map, int row, int column)
{
    
}

MazeMap::~MazeMap(void)
{

}

void MazeMap::drawMap(void)
{
    for(int i = 0; i < LENGTH; ++i)
    {
        for(int j = 0; j < WIDTH; ++j)
        {
            if(maze_map[i][j] == WALL)
            {
                cout << "$";
            }
            else
            {
                cout << " ";
            }  
        }
        cout << endl;
    }
}

//这里一定要注意数组的列对应X坐标，行对应Y坐标
bool MazeMap::checkWallOrNot(int x, int y)
{
    if(maze_map[y][x] == WALL)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}