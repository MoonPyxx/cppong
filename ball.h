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
    Color Green = Color{121, 180, 115,255};
public:
    int player_score = 0;
    int cpu_score = 0;
    Ball(float x, float y, int speed_x, int speed_y, int radius);
    void Draw();
    void Update();
    float getY();
    float getX();
    int getRadius();
    void setSpeedX(int speed_x);
    int getSpeedX();
    void resetBall();
};


#endif //CPPONG_BALL_H
