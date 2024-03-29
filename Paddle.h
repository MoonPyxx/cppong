//
// Created by spirit on 2/3/24.
//

#ifndef CPPONG_PADDLE_H
#define CPPONG_PADDLE_H
#include <raylib.h>

class Paddle {
    friend class CpuPaddle;
    float x,y, width, height;
    int speed;
    Color color = BLUE;
public:
    Paddle(float x, float y, float width, float height, int speed);
    void Draw();
    void Update();
    float getX();
    float getY();
    float getHeight();
    float getWidth();
};


#endif //CPPONG_PADDLE_H
