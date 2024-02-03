#include <iostream>
#include <raylib.h>
#include "ball.h"
#include "Paddle.h"
#include "CpuPaddle.h"
using namespace std;




int main(){
    const int screen_width = 1280;
    const int screen_height = 800;
    int player_width = 25,
        player_height = 120,
        player_x = screen_width - player_width - 10,
        player_y = screen_height/2 - player_height / 2,
        player_speed = 6;

    int cpu_width = 25,
        cpu_height = 120,
        cpu_x = 10,
        cpu_y = screen_height/2 - cpu_height /2,
        cpu_speed = 6;

    Ball ball(screen_width /2, screen_height/2, 7, 7,20);
    Paddle player(player_x, player_y, player_width, player_height, player_speed);
    CpuPaddle CPU(cpu_x, cpu_y, cpu_width, cpu_height, cpu_speed);

    cout << "Starting CPPong..." << endl;
    InitWindow(screen_width, screen_height, "CPPong");
    SetTargetFPS(60);
    while (!WindowShouldClose()){
        BeginDrawing();
        ball.Update();
        player.Update();
        CPU.Update(ball.getY());
    int ball_speed_x = ball.getSpeedX();
        if (CheckCollisionCircleRec(Vector2{ball.getX(), ball.getY()}, ball.getRadius(), Rectangle{player.getX(), player.getY(), player.getWidth(), player.getHeight()})){
            ball.setSpeedX(ball_speed_x *= -1);
        }
        if (CheckCollisionCircleRec(Vector2{ball.getX(), ball.getY()}, ball.getRadius(), Rectangle{CPU.getX(), CPU.getY(), CPU.getWidth(), CPU.getHeight()})){
            ball.setSpeedX(ball_speed_x *= -1);
        }
        ClearBackground(BLACK);
        ball.Draw();
        player.Draw();
        CPU.Draw();
        DrawLine(screen_width/2,0, screen_width/2, screen_height, GREEN);
        DrawText(TextFormat("%i",ball.cpu_score), screen_width/4,20,20,GREEN);
        DrawText(TextFormat("%i",ball.player_score), 3*screen_width/4,20,20,GREEN);


        EndDrawing();
    }

    CloseWindow();
    //
    return 0;

}