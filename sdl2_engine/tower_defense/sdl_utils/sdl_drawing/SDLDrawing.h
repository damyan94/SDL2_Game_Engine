#ifndef SDLDRAWING_H_
#define SDLDRAWING_H_

// C/C++ system includes
#include <cstdint>

// Third-party includes

// Own includes

// Forward declarations
struct Color;

namespace SDLDrawing
{
	void drawPoint(int32_t x, int32_t y);
	void drawPoint(int32_t x, int32_t y, const Color& color);

	void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2);
	void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, const Color& color);

	void drawRectangle(int32_t x, int32_t y, int32_t w, int32_t h);
	void drawRectangle(int32_t x, int32_t y, int32_t w, int32_t h, const Color& color);

	void drawFilledRectangle(int32_t x, int32_t y, int32_t w, int32_t h);
	void drawFilledRectangle(int32_t x, int32_t y, int32_t w, int32_t h, const Color& color);
}

#endif // !SDLDRAWING_H_