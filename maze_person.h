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
    MazePerson(); 
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
    int count; //��¼�Թ������ߵ��ܲ���

};


#endif /* __MAZE_PERSON_H */