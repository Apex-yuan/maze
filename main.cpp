#include "maze_map.h"
#include "windows.h"
#include <stdlib.h>
#include <iostream>
#include "maze_person.h"

int main(void)
{
    MazeMap mazemap;
    system("cls");
    mazemap.drawMap();

     MazePerson mazeperson;
    mazeperson.drawPerson();
    mazeperson.start();

    

    mazeperson.gotoXY(0,15);
    return 0;
}