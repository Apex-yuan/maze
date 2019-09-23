#include "maze_map.h"
#include "windows.h"
#include <stdlib.h>
#include <iostream>
#include "maze_person.h"

int main(void)
{
    int default_map[5][10] = {ROAD, WALL, ROAD, WALL, WALL, WALL, WALL, ROAD, WALL, ROAD,
                            ROAD, WALL, ROAD, WALL, WALL, WALL, WALL, ROAD, WALL, WALL,
                            WALL, WALL, WALL, ROAD, ROAD, ROAD, WALL, ROAD, WALL, ROAD,
                            WALL, ROAD, ROAD, ROAD, WALL, ROAD, ROAD, ROAD, WALL, WALL,
                            WALL, ROAD, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL
                            };
    // HANDLE fd = GetStdHandle(STD_OUTPUT_HANDLE);
    // CONSOLE_CURSOR_INFO cinfo;
    // cinfo.bVisible = 1;
    // cinfo.dwSize = 1;
    // SetConsoleCursorInfo(fd, &cinfo);

    MazeMap mazemap(&default_map[0][0],5,10);
    mazemap.setWallChar('#');
    system("cls");
    mazemap.drawMap();

     MazePerson mazeperson;
    mazeperson.drawPerson();
    mazeperson.start();

    

    // mazeperson.gotoXY(0,15);
    return 0;
}