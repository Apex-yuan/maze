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
    MazeMap();
    MazeMap(int *map, int row, int column);
    ~MazeMap(void);
    void drawMap(void);
    void setRoadChar(char r);
    void setWallChar(char w);
    static bool checkWallOrNot(int x, int y);
        
    private:
    char road;
    char wall;
    static int maze_map[LENGTH][WIDTH];
    static int maze_height_;
    static int maze_width_;
};


#endif /* __MAZE_MAP_H */