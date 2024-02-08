//
// Created by spirit on 2/2/24.
//
#include <raylib.h>
#include "ball.h"

    Ball::Ball(float x, float y, int speed_x, int speed_y, int radius){
    this->x = x;
    this->y = y;
    this->speed_x = speed_x;
    this -> speed_y = speed_y;
    this -> radius = radius;
    }
    void Ball::Draw(){
        DrawCircle(x, y, radius, Green);
    }
    void Ball::Update() {
        x += speed_x;
        y += speed_y;
        if (y+radius >= GetScreenHeight() || y -radius <= 0){
            speed_y *= -1;
        }
        if (x + radius >= GetScreenWidth()){
            cpu_score++;
            resetBall();
        } if( x - radius <= 0){
            player_score++;
            resetBall();
        }
    }
    float Ball::getY(){
    return y;
    }
float Ball::getX(){
    return x;
}
int Ball::getRadius(){
    return radius;
}
void Ball::setSpeedX(int sx){
    speed_x = sx;
}
int Ball::getSpeedX() {
    return speed_x;
}
void Ball::resetBall(){
    x = GetScreenWidth()/2;
    y = GetScreenHeight()/2;

    int speed_choices[2]= {-1,1};
    speed_x *= speed_choices[GetRandomValue(0,1)];
    speed_y *= speed_choices[GetRandomValue(0,1)];
}
