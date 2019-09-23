#include "maze_map.h"
#include <iostream>

using namespace std;

int MazeMap::maze_height_ = 0;
int MazeMap::maze_width_ = 0;
int MazeMap::maze_map[LENGTH][WIDTH];

MazeMap::MazeMap() : wall('$'),road(' ')
{
    maze_height_ = 5;
    maze_width_ = 10;
    int default_map[5][10] = {WALL, WALL, ROAD, WALL, WALL, WALL, WALL, ROAD, WALL, ROAD,
                            ROAD, WALL, ROAD, WALL, WALL, WALL, WALL, ROAD, WALL, WALL,
                            WALL, WALL, WALL, ROAD, ROAD, ROAD, WALL, ROAD, WALL, ROAD,
                            WALL, ROAD, ROAD, ROAD, WALL, ROAD, ROAD, ROAD, WALL, WALL,
                            WALL, ROAD, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL
                            };

    for(int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 10; j++)
        {
            maze_map[i][j] = default_map[i][j];
        }
    }
}

MazeMap::MazeMap(int *map, int row, int column) : wall('$'),road(' ')
{
    maze_height_ = row;
    maze_width_ = column;

    for(int i = 0; i < maze_height_; ++i)
    {
        for(int j = 0; j < maze_width_; ++j)
        {
            maze_map[i][j] = *map;
            map++;
        }
    }

}

MazeMap::~MazeMap(void)
{

}

void MazeMap::setRoadChar(char r)
{
    road = r;
}

void MazeMap::setWallChar(char w)
{
    wall = w;
}

void MazeMap::drawMap(void)
{
    for(int i = 0; i < maze_height_; ++i)
    {
        for(int j = 0; j < maze_width_; ++j)
        {  
            (maze_map[i][j] == WALL)? cout << wall : cout << road;
        }
        cout << endl;
    }
}

//这里一定要注意数组的列对应X坐标，行对应Y坐标
bool MazeMap::checkWallOrNot(int x, int y)
{
    return (maze_map[y][x] == WALL)? true : false;   
}