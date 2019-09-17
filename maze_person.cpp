#include "maze_person.h"
#include "windows.h"
#include <iostream>
#include "maze_map.h"

using namespace std;

// MazePerson::MazePerson()
// {

// }

MazePerson::~MazePerson(void)
{

}

void MazePerson::gotoXY(int x, int y)
{
    COORD cd;    
	cd.X   =   x; 
	cd.Y   =   y;     
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cd); 
}

void MazePerson::drawPerson(void)
{
    gotoXY(previous_x,previous_y);
    cout << " ";
    gotoXY(current_x, current_y);
    cout << "*"; 
    Sleep(1000);
}



void MazePerson::turnLeft(void)
{
    switch(forward)
    {
        case UP:
        forward = LEFT;
        break;
        case DOWN:
        forward = RIGHT;
        break;
        case LEFT:
        forward = DOWN;
        break;
        case RIGHT:
        forward = UP;
        break;
        default:
        break;
    }
}

void MazePerson::turnRight(void)
{
    switch(forward)
    {
        case UP:
        forward = RIGHT;
        break;
        case DOWN:
        forward = LEFT;
        break;
        case LEFT:
        forward = UP;
        break;
        case RIGHT:
        forward = DOWN;
        break;
        default:
        break;
    }
}

void MazePerson::goAhead(void)
{
    /* 记录坐标历史值 */
    previous_x = current_x;
    previous_y = current_y;
    
    switch(forward)
    {
        case UP:
        current_y -= 1;
        break;
        case DOWN:
        current_y += 1;
        break;
        case LEFT:
        current_x -= 1;
        break;
        case RIGHT:
        current_x += 1;
        break;
        default:
        break;
    }
    count++;
}

void MazePerson::start(void)
{

    while(!exit_flag)
    {
        int forward_x, forward_y;
        int right_x, right_y;

        switch(forward)
        {
            case UP:
            forward_x = current_x;
            forward_y = current_y - 1;
            right_x = current_x + 1;
            right_y = current_y;
            break;
            case DOWN:
            forward_x = current_x;
            forward_y = current_y + 1;
            right_x = current_x - 1;
            right_y = current_y;
            break;
            case LEFT:
            forward_x = current_x - 1;
            forward_y = current_y;
            right_x = current_x;
            right_y = current_y - 1;
            break;
            case RIGHT:
            forward_x = current_x + 1;
            forward_y = current_y;
            right_x = current_x;
            right_y = current_y + 1;
            break;
            default:
            break;
        }

        /* 右侧是墙 */
        if(MazeMap::checkWallOrNot(right_x, right_y) == true)  
        {
            /* 上方是墙 */
            if(MazeMap::checkWallOrNot(forward_x, forward_y))
            {
                turnLeft();
                goAhead();
                drawPerson();
            }
            else 
            {
                //forward = UP;
                goAhead();
                drawPerson();
            }
        }
        else
        {
            //forward = RIGHT;
            turnRight();
            goAhead();
            drawPerson();
        }

        if(current_y == 0)
        {
            exit_flag = true;
        }
    }

    /* 隔开两行打印步数 */
    gotoXY(0,HIGHT+2);
    cout << "总步数为：" << count << endl;
}