#ifndef GAME_H_
#define GAME_H_

// C/C++ system includes
#include <cstdint>

// Third-party includes

// Own includes
#include "defines/FrequentIncludes.h"

// Forward declarations

class Game
{
public:
	int32_t init();
	void deinit();
	void handleEvent(const InputEvent& e);
	void update();
	void draw() const;

private:
	Image win_xp_bliss;
	Text greeting;
	int32_t timerId;
};

#endif // !GAME_H_