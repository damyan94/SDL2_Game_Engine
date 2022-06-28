#ifndef SOUNDDEFINES_H_
#define SOUNDDEFINES_H_

// C/C++ system includes
#include <cstdint>

// Third-party includes

// Own includes
#include "defines/id/ImageId.h"

// Forward declarations

struct SoundInfo
{
	const char* fileName;
	int32_t id = -1;
};

// These IDs must be the same as the human readable version in the included enum
constexpr SoundInfo soundsInfo[] =
{
	{"../tower_defense/assets/sounds/clicks/mouse_click.wav", 1}
};

#endif // !SOUNDDEFINES_H_