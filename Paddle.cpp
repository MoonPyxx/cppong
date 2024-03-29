//
// Created by spirit on 2/3/24.
//

#include "Paddle.h"
Paddle::Paddle(float x, float y, float width, float height, int speed) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->speed = speed;
    this -> color = BLUE;
}
 void Paddle::Draw(){
     DrawRectangle(x,y, width, height, color);
}
void Paddle::Update(){
    if (IsKeyDown(KEY_UP)){
        y = y-speed;
    } else if(IsKeyDown(KEY_DOWN)){
        y = y+ speed;
    } else if(y <= 0){
        y = 0;
    } else if (y + height >= GetScreenHeight()){
        y = GetScreenHeight() - height;
    }
}
float Paddle::getY(){
    return y;
}
float Paddle::getX(){
    return x;
}
float Paddle::getHeight(){
    return height;
}
float Paddle::getWidth() {
    return width;
}
