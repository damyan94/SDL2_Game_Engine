// Corresponding header
#include "sdl_utils/sdl_drawing/SDLDrawing.h"

// C/C++ system includes
#include <iostream>

// Third-party includes
#include <SDL_render.h>

// Own includes
#include "sdl_utils/Renderer.h"

#include "utils/geometry/Point.h"
#include "utils/geometry/Rectangle.h"
#include "utils/drawing/Color.h"

// Point
void SDLDrawing::drawPoint(int32_t x, int32_t y)
{
	Point point(x, y);
	SDL_RenderDrawPoint(Renderer::getInstance(), point.x, point.y);
}

void SDLDrawing::drawPoint(int32_t x, int32_t y, const Color& color)
{
	Renderer::setDrawColor(color);

	SDLDrawing::drawPoint(x, y);

	Renderer::setDrawColor(Renderer::getDefaultDrawColor());
}

// Line
void SDLDrawing::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{
	Point point1(x1, y1);
	Point point2(x2, y2);
	SDL_RenderDrawLine(Renderer::getInstance(), point1.x, point1.y, point2.x, point2.y);
}

void SDLDrawing::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const Color& color)
{
	Renderer::setDrawColor(color);

	SDLDrawing::drawLine(x1, y1, x2, y2);

	Renderer::setDrawColor(Renderer::getDefaultDrawColor());
}

// Rectangle
void SDLDrawing::drawRectangle(int32_t x, int32_t y, int32_t w, int32_t h)
{
	SDL_Rect sdlRect{ x, y, w, h };
	SDL_RenderDrawRect(Renderer::getInstance(), &sdlRect);
}

void SDLDrawing::drawRectangle(int32_t x, int32_t y, int32_t w, int32_t h, const Color& color)
{
	Renderer::setDrawColor(color);

	SDLDrawing::drawRectangle(x, y, w, h);

	Renderer::setDrawColor(Renderer::getDefaultDrawColor());
}

// Filled rectangle
void SDLDrawing::drawFilledRectangle(int32_t x, int32_t y, int32_t w, int32_t h)
{
	SDL_Rect sdlRect{ x, y, w, h };
	SDL_RenderFillRect(Renderer::getInstance(), &sdlRect);
}

void SDLDrawing::drawFilledRectangle(int32_t x, int32_t y, int32_t w, int32_t h, const Color& color)
{
	Renderer::setDrawColor(color);

	SDLDrawing::drawFilledRectangle(x, y, w, h);

	Renderer::setDrawColor(Renderer::getDefaultDrawColor());
}

// Circle
void SDLDrawing::drawCircle(int32_t centreX, int32_t centreY, int32_t radius)
{
	const int32_t diameter = (radius * 2);

	int32_t x = (radius - 1);
	int32_t y = 0;
	int32_t tx = 1;
	int32_t ty = 1;
	int32_t error = (tx - diameter);

	while (x >= y)
	{
		// Each of the following renders an octant of the circle
		SDL_RenderDrawPoint(Renderer::getInstance(), centreX + x, centreY - y);
		SDL_RenderDrawPoint(Renderer::getInstance(), centreX + x, centreY + y);
		SDL_RenderDrawPoint(Renderer::getInstance(), centreX - x, centreY - y);
		SDL_RenderDrawPoint(Renderer::getInstance(), centreX - x, centreY + y);
		SDL_RenderDrawPoint(Renderer::getInstance(), centreX + y, centreY - x);
		SDL_RenderDrawPoint(Renderer::getInstance(), centreX + y, centreY + x);
		SDL_RenderDrawPoint(Renderer::getInstance(), centreX - y, centreY - x);
		SDL_RenderDrawPoint(Renderer::getInstance(), centreX - y, centreY + x);

		if (error <= 0)
		{
			++y;
			error += ty;
			ty += 2;
		}

		if (error > 0)
		{
			--x;
			tx += 2;
			error += (tx - diameter);
		}
	}
}

void SDLDrawing::drawCircle(int32_t centreX, int32_t centreY, int32_t radius, const Color& color)
{
	Renderer::setDrawColor(color);

	SDLDrawing::drawCircle(centreX, centreY, radius);

	Renderer::setDrawColor(Renderer::getDefaultDrawColor());
}

// Filled Circle
void SDLDrawing::drawFilledCircle(int32_t centreX, int32_t centreY, int32_t radius)
{
	for (int32_t i = 0; i < radius * 2; i++)
		for (int32_t j = 0; j < radius * 2; j++)
		{
			int32_t dx = radius - i; // horizontal offset
			int32_t dy = radius - j; // vertical offset
			if (dx * dx + dy * dy <= radius * radius)
				SDL_RenderDrawPoint(Renderer::getInstance(), centreX + dx, centreY + dy);
		}
}

void SDLDrawing::drawFilledCircle(int32_t centreX, int32_t centreY, int32_t radius, const Color& color)
{
	Renderer::setDrawColor(color);

	SDLDrawing::drawFilledCircle(centreX, centreY, radius);

	Renderer::setDrawColor(Renderer::getDefaultDrawColor());
}