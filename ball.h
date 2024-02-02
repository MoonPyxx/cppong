//
// Created by spirit on 2/2/24.
//
#include <raylib.h>
#ifndef CPPONG_BALL_H
#define CPPONG_BALL_H


class Ball {
    float x,y;
    int speed_x, speed_y;
    int radius;
public:
    Ball(float x, float y, int speed_x, int speed_y, int radius);
    void Draw();
    void Update();
};


#endif //CPPONG_BALL_H
