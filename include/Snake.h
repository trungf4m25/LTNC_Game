#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>
#include <deque>

#define WIDTH 50
#define HEIGHT 25

using namespace std;

class Snake
{
    private:
        COORD pos;
        int vel;
        char dir;
        int len;
        deque<COORD> body;
    public:
        Snake(COORD pos, int vel);
        void grow();
        void moveSnake();
        void direction(char dir);
        deque<COORD> getBody();
        bool collided();
        bool eaten(COORD food);
        COORD getPos();
};

#endif // SNAKE_H
