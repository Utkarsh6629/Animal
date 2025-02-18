#include<iostream>
#include<raylib.h>
using namespace std;

const int ScreenSize = 1000;
const int ScreenWidth = 480;

class Player {
	int posx;
	int posy;
	int speed;

};

int main() {
	InitWindow(ScreenSize,ScreenWidth,"Animal");
	SetTargetFPS(60);
	while (WindowShouldClose() == false) {
		ClearBackground(GREEN);
		BeginDrawing();
		
		EndDrawing();
	}
	CloseWindow();
}