#ifndef __MAZE_MAP_H
#define __MAZE_MAP_H

#define WALL 0
#define ROAD 1

#define HIGHT 5
#define LENGTH 5
#define WIDTH  10

class MazeMap
{
    public:
    MazeMap(void);
    MazeMap(int *map, int row, int column);
    ~MazeMap(void);
    void drawMap(void);
    static bool checkWallOrNot(int x, int y);
    
    static int maze_map[LENGTH][WIDTH];
    private:
    char road;
    char wall;
};


#endif /* __MAZE_MAP_H */