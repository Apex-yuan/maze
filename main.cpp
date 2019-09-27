#include "maze_map.h"
#include <stdlib.h>
#include <iostream>
#include "maze_person.h"
#include "terminal.h"

int main(void)
{
    int default_map[5][10] = {ROAD, WALL, ROAD, WALL, WALL, WALL, WALL, ROAD, WALL, ROAD,
                            ROAD, WALL, ROAD, WALL, WALL, WALL, WALL, ROAD, WALL, WALL,
                            WALL, WALL, WALL, ROAD, ROAD, ROAD, WALL, ROAD, WALL, ROAD,
                            WALL, ROAD, ROAD, ROAD, WALL, ROAD, ROAD, ROAD, WALL, WALL,
                            WALL, ROAD, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL
                            };


    MazeMap mazemap(&default_map[0][0],5,10);
    mazemap.setWallChar('#');
    system("clear");
    mazemap.drawMap();

     MazePerson mazeperson;
     mazeperson.gotoXY(3,10);
    // std::cout << "hh";
    mazeperson.drawPerson();
    mazeperson.start();
    // MOVE_TO_XY(20,5);
    // std::cout << "h"<< std::endl;
    // sleep(1);
    // MOVE_TO_XY(5, 5);
    // std::cout << "e" << std::endl;
    // sleep(1);
    // MOVE_TO_XY(10, 10);
    // std::cout << "o" << std::endl;
    // sleep(1);
    

    // mazeperson.gotoXY(0,15);
    return 0;
}