// Corresponding header
#include "utils/drawing/Color.h"

// C/C++ system includes

// Third-party includes

// Own includes

Color::Color(uint8_t red, uint8_t green, uint8_t blue) : r(red), g(green), b(blue)
{

}

Color::Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) : r(red), g(green), b(blue), a(alpha)
{

}

bool Color::operator==(const Color& other) const
{
	return (this->r == other.r) && (this->g == other.g) &&
		(this->b == other.b) && (this->a == other.a);
}

bool Color::operator!=(const Color& other) const
{
	return !(*this == other);
}
namespace Colors
{
	const Color FULL_TRANSPARENT(0, 0, 0, 0);

	// WHITE, GREY AND BLACK
	const Color WHITE(255, 255, 255, 255);
	const Color LIGHT_GREY(191, 191, 191, 255);
	const Color GREY(127, 127, 127, 255);
	const Color DARK_GREY(63, 63, 63, 255);
	const Color VERY_DARK_GREY(31, 31, 31, 255);
	const Color BLACK(0, 0, 0, 255);

	// COLORS
	const Color RED(255, 0, 0, 255);
	const Color GREEN(0, 255, 0, 255);
	const Color BLUE(0, 0, 255, 255);
	const Color YELLOW(255, 255, 0, 255);
	const Color CYAN(0, 255, 255, 255);
	const Color MAGENTA(255, 0, 255, 255);

	const Color ORANGE(255, 127, 0, 255);
	const Color PINK(255, 0, 127, 255);
	const Color LIME(127, 255, 0, 255);
	const Color SPRING_GREEN(0, 255, 127, 255);
	const Color PURPLE(127, 0, 255, 255);
	const Color SKY_BLUE(0, 127, 255, 255);

	// DARK COLORS
	const Color DARK_RED(127, 0, 0, 255);
	const Color DARK_GREEN(0, 127, 0, 255);
	const Color DARK_BLUE(0, 0, 127, 255);
	const Color DARK_YELLOW(127, 127, 0, 255);
	const Color DARK_CYAN(0, 127, 127, 255);
	const Color DARK_MAGENTA(127, 0, 127, 255);

	const Color DARK_ORANGE(127, 63, 0, 255);
	const Color DARK_PINK(127, 0, 63, 255);
	const Color DARK_LIME(63, 127, 0, 255);
	const Color DARK_SPRING_GREEN(0, 127, 63, 255);
	const Color DARK_PURPLE(63, 0, 127, 255);
	const Color DARK_SKY_BLUE(0, 63, 127, 255);

	// VERY DARK COLORS
	const Color VERY_DARK_RED(63, 0, 0, 255);
	const Color VERY_DARK_GREEN(0, 63, 0, 255);
	const Color VERY_DARK_BLUE(0, 0, 63, 255);
	const Color VERY_DARK_YELLOW(63, 63, 0, 255);
	const Color VERY_DARK_CYAN(0, 63, 63, 255);
	const Color VERY_DARK_MAGENTA(63, 0, 63, 255);

	const Color VERY_DARK_ORANGE(63, 31, 0, 255);
	const Color VERY_DARK_PINK(63, 0, 31, 255);
	const Color VERY_DARK_LIME(31, 63, 0, 255);
	const Color VERY_DARK_SPRING_GREEN(0, 63, 31, 255);
	const Color VERY_DARK_PURPLE(31, 0, 63, 255);
	const Color VERY_DARK_SKY_BLUE(0, 31, 63, 255);
}