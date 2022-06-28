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

	Point point(x, y);
	SDL_RenderDrawPoint(Renderer::getInstance(), point.x, point.y);

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

	Point point1(x1, y1);
	Point point2(x2, y2);
	SDL_RenderDrawLine(Renderer::getInstance(), point1.x, point1.y, point2.x, point2.y);

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

	SDL_Rect sdlRect{ x, y, w, h };
	SDL_RenderDrawRect(Renderer::getInstance(), &sdlRect);

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

	SDL_Rect sdlRect{ x, y, w, h };
	SDL_RenderFillRect(Renderer::getInstance(), &sdlRect);

	Renderer::setDrawColor(Renderer::getDefaultDrawColor());
}