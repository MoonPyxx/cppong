//
// Created by spirit on 2/3/24.
//

#ifndef CPPONG_CPUPADDLE_H
#define CPPONG_CPUPADDLE_H

#include "Paddle.h"
class CpuPaddle : public Paddle {
public:
    CpuPaddle(float x, float y, float width, float height, int speed);
    void Update(float ball_y);
};

#endif //CPPONG_CPUPADDLE_H
