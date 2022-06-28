#ifndef IMAGEDEFINES_H_
#define IMAGEDEFINES_H_

// C/C++ system includes
#include <cstdint>

// Third-party includes

// Own includes
#include "defines/id/ImageId.h"

// Forward declarations

struct ImageInfo
{
	const char* fileName;
	int32_t id = -1;
	int32_t frames = 1;
};

// These IDs must be the same as the human readable version in the included enum
constexpr ImageInfo imagesInfo[] = 
{
	{"../tower_defense/assets/images/win_xp_bliss.jpg", 1, 1}
};

#endif // !IMAGEDEFINES_H_