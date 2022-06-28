#ifndef MUSICDEFINES_H_
#define MUSICDEFINES_H_

// C/C++ system includes
#include <cstdint>

// Third-party includes

// Own includes
#include "defines/id/MusicId.h"

// Forward declarations

struct MusicInfo
{
	const char* fileName;
	int32_t id = -1;
};

// These IDs must be the same as the human readable version in the included enum
constexpr MusicInfo musicsInfo[] =
{
	{"../tower_defense/assets/music/vivaldi_spring_i.mp3", 1}
};

#endif // !MUSICDEFINES_H_