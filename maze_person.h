#ifndef __MAZE_PERSON_H
#define __MAZE_PERSON_H

typedef enum
{
    UP,
    DOWN,
    LEFT,
    RIGHT
}ForwardDirection;

class MazePerson
{
    public:
    MazePerson() : current_x(1), current_y(4), previous_x(1), previous_y(4), exit_flag(false),forward(UP), count(0) {}
    ~MazePerson();
    void gotoXY(int x, int y);
    void drawPerson(void);
    //bool checkWallOrNot(int x, int y);
    void goAhead(void);
    void turnLeft(void);
    void turnRight(void);
    void start(void);
    private:
    int previous_x;
    int previous_y;
    int current_x;
    int current_y;
    bool exit_flag;
    ForwardDirection forward;
    int count; //记录迷宫中行走的总步数

};


#endif /* __MAZE_PERSON_H */