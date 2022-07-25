#ifndef FONTDEFINES_H_
#define FONTDEFINES_H_

// C/C++ system includes
#include <cstdint>

// Third-party includes

// Own includes
#include "defines/id/FontId.h"

// Forward declarations

struct FontInfo
{
	const char* fileName;
	int32_t id = -1;
	int32_t size = 12;
};

// These IDs must be the same as the human readable version in the included enum
constexpr FontInfo fontsInfo[] =
{
	{"../tower_defense/assets/fonts/Arial.ttf", FontId::ARIAL_18, 18},
	{"../tower_defense/assets/fonts/Arial.ttf", FontId::ARIAL_96, 96},
};

#endif // !FONTDEFINES_H_