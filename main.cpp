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

        EndDrawing();
    }

    CloseWindow();
    //
    return 0;

}