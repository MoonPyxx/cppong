//
// Created by spirit on 2/2/24.
//
#include <raylib.h>
#include "ball.h"

    Ball::Ball(float x, float y, int speed_x, int speed_y, int radius){
    this->x = x;
    this -> y = y;
    this -> speed_x = speed_x;
    this -> speed_y = speed_y;
    this -> radius = radius;
    }
    void Ball::Draw(){
        DrawCircle(x, y, radius, WHITE);
    }
    void Ball::Update() {
        x += speed_x;
        y += speed_y;
        if (y+radius >= GetScreenHeight() || y -radius <= 0){
            speed_y *= -1;
        }
        if (x + radius >= GetScreenWidth() || x - radius <= 0){
            speed_x *= -1;
        }
    }
    float Ball::getY(){
    return y;
}
