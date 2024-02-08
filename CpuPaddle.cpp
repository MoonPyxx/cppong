
//
// Created by spirit on 2/3/24.
//

#include "CpuPaddle.h"
CpuPaddle::CpuPaddle(float x, float y, float width, float height, int speed)
        : Paddle(x, y, width, height, speed) {}

void CpuPaddle::Update(float ball_y){
    if (y+height / 2 > ball_y)
    {
        y = y-speed;
    } else if( y + height/2 <= ball_y){
        y = y + speed;
    }
}
void CpuPaddle::Draw(){
     DrawRectangle(x,y, width, height, color);
}
