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

	// WHITE, GREY AND BLACK
	extern const Color WHITE;
	extern const Color LIGHT_GREY;
	extern const Color GREY;
	extern const Color DARK_GREY;
	extern const Color VERY_DARK_GREY;
	extern const Color BLACK;

	// COLORS
	extern const Color RED;
	extern const Color GREEN;
	extern const Color BLUE;
	extern const Color YELLOW;
	extern const Color CYAN;
	extern const Color MAGENTA;
	extern const Color ORANGE;
	extern const Color PINK;
	extern const Color LIME;
	extern const Color SPRING_GREEN;
	extern const Color PURPLE;
	extern const Color SKY_BLUE;

	// DARK COLORS
	extern const Color DARK_RED;
	extern const Color DARK_GREEN;
	extern const Color DARK_BLUE;
	extern const Color DARK_YELLOW;
	extern const Color DARK_CYAN;
	extern const Color DARK_MAGENTA;

	extern const Color DARK_ORANGE;
	extern const Color DARK_PINK;
	extern const Color DARK_LIME;
	extern const Color DARK_SPRING_GREEN;
	extern const Color DARK_PURPLE;
	extern const Color DARK_SKY_BLUE;

	// VERY DARK COLORS
	extern const Color VERY_DARK_RED;
	extern const Color VERY_DARK_GREEN;
	extern const Color VERY_DARK_BLUE;
	extern const Color VERY_DARK_YELLOW;
	extern const Color VERY_DARK_CYAN;
	extern const Color VERY_DARK_MAGENTA;

	extern const Color VERY_DARK_ORANGE;
	extern const Color VERY_DARK_PINK;
	extern const Color VERY_DARK_LIME;
	extern const Color VERY_DARK_SPRING_GREEN;
	extern const Color VERY_DARK_PURPLE;
	extern const Color VERY_DARK_SKY_BLUE;
}

#endif // !COLOR_H_