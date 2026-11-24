
#include "pch.h"
#include "raylib.h"
//#include "Controller.h"
#include <random>



int main() {
	
	//Controller controller = Controller(0);
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(1920, 1000, "Hello");
	Color backgroundColor = { 0, 20, 150, 255 };
	Color emptyColor = { 0, 10, 70, 255 };
	Texture2D texture = LoadTexture("Card.jpg");
	Vector2 position = { 885.0f, 400.0f };
	Vector2 position2 = { 885.0f, 400.0f };
	Vector2 position3 = { 885.0f, 400.0f };
	Vector2 position4 = { 885.0f, 400.0f };
	float scale = 0.20f;
	SetTargetFPS(60);

	Vector2 textPosition = { 350.0f, 220.0f };
	float speed = 250.0f; // Pixels per second
	SetTargetFPS(60);
	
	
	while (!WindowShouldClose()) {
		
		
		
		//if (controller.getDPadRight()) position.x += speed * deltaTime;
		//if (controller.getDPadLeft())  position.x -= speed * deltaTime;
		//if (controller.getDPadDown())  position.y += speed * deltaTime;
		//if (controller.getDPadUp())    position.y -= speed * deltaTime;

		int screenWidth = GetScreenWidth();
		int screenHeight = GetScreenHeight();
		double correctRatio = 1920 / 1080;

		if (screenWidth / screenHeight > correctRatio) {
			
			screenWidth = screenHeight * correctRatio;
		}

		if (screenWidth / screenHeight < correctRatio) {
			screenHeight = screenWidth * correctRatio;
		}


		//radius should be 5% of height and 2.8126% of width
		double circleRadius = 0.05 * screenHeight;

		//height-space should be 40/7% of height
		double space = 40 / 7 * 0.01 * screenWidth;

		double centerX = screenWidth / 4;
		double centerY = screenHeight / 4;


		BeginDrawing();
		ClearBackground(backgroundColor);
		

		for (int y = 0; y < 6; y++) {
			for (int x = 0; x < 7; x++) {
				DrawCircle((space * x * 1.5) + (centerX + space * 1.5), (space * y * 1.5) + (centerY + space * 1.5), circleRadius, emptyColor);
			}
		}
		
		
		EndDrawing();
	}
	UnloadTexture(texture);
	CloseWindow();
	return 0;
}