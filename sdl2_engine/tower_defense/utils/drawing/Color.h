#ifndef COLOR_H_
#define COLOR_H_

// C/C++ system includes
#include <cstdint>

// Third-party includes

// Own includes

// Forward declarations

struct Color
{
	uint8_t r = 0;
	uint8_t g = 0;
	uint8_t b = 0;
	uint8_t a = 255;

	Color() = default;
	Color(uint8_t red, uint8_t green, uint8_t blue);
	Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha);

	bool operator==(const Color& other) const;
	bool operator!=(const Color& other) const;
};

namespace Colors
{
	extern const Color FULL_TRANSPARENT;

	extern const Color WHITE;
	extern const Color LIGHT_GREY;
	extern const Color GREY;
	extern const Color DARK_GREY;
	extern const Color VERY_DARK_GREY;
	extern const Color BLACK;
	 
	extern const Color RED;
	extern const Color GREEN;
	extern const Color BLUE;
	extern const Color YELLOW;
	extern const Color CYAN;
	extern const Color MAGENTA;

	extern const Color DARK_RED;
	extern const Color DARK_GREEN;
	extern const Color DARK_BLUE;
	extern const Color DARK_YELLOW;
	extern const Color DARK_CYAN;
	extern const Color DARK_MAGENTA;

	extern const Color VERY_DARK_RED;
	extern const Color VERY_DARK_GREEN;
	extern const Color VERY_DARK_BLUE;
	extern const Color VERY_DARK_YELLOW;
	extern const Color VERY_DARK_CYAN;
	extern const Color VERY_DARK_MAGENTA;
}

#endif // !COLOR_H_