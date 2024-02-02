#include <iostream>
#include <raylib.h>

using namespace std;


int main(){


    const int screen_width = 1280;
    const int screen_height = 800;

    cout << "Starting CPPong..." << endl;
    InitWindow(screen_width, screen_height, "CPPong");
    SetTargetFPS(60);
    while (!WindowShouldClose()){
        BeginDrawing();
        DrawCircle(screen_width/2, screen_height/2, 25, WHITE);
        DrawRectangle(10,screen_height/2 -60,25,120, RED);
        DrawRectangle(screen_width-35,screen_height/2 -60,25,120, BLUE);
        DrawLine(screen_width/2,0, screen_width/2, screen_height, GREEN);
        EndDrawing();
    }

    CloseWindow();
    //
    return 0;

}