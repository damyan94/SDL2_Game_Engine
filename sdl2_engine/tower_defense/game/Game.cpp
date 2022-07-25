// Corresponding header
#include "game/Game.h"

// C/C++ system includes
#include <iostream>

// Third-party includes

// Own includes

int32_t Game::init()
{
	if (EXIT_SUCCESS != win_xp_bliss.init(ImageId::WIN_XP_BLISS))
	{
		std::cout << "Error, could not initialize image win_xp_bliss.jpg" << std::endl;
		return EXIT_FAILURE;
	}

	if (EXIT_SUCCESS != greeting.init("Hello, World!", FontId::ARIAL_96, Colors::BLACK))
	{
		std::cout << "Error, could not initialize text with greeting" << std::endl;
		return EXIT_FAILURE;
	}

	int32_t textPosX = (WindowConstants::WINDOW_WIDTH - greeting.getWidth()) / 2;
	int32_t textPosY = (WindowConstants::WINDOW_HEIGHT - greeting.getHeight()) / 2;

	greeting.setPos(textPosX, textPosY);

	Timer::startTimer(timerId, 5000, TimerType::PULSE);

	Audio::playMusic(MusicId::VIVALDI_SPRING_I, Audio::LOOP_INFINITELY);

	return EXIT_SUCCESS;
}

void Game::deinit()
{

}

void Game::handleEvent(const InputEvent& e)
{
	if (e.type == EventType::MOUSE_BUTTONUP)
		Audio::playSound(SoundId::CLICK, 0);

	if (e.type == EventType::MOUSE_WHEEL)
	{
		if (e.wheel > Mouse::WHEEL_UP_DOWN_TRESHOLD)
			greeting.rotate(10);

		else
			greeting.rotate(-10);
	}
}

void Game::update()
{
	if (Timer::timerTicked(timerId))
		greeting.setPos(rand() % (WindowConstants::WINDOW_WIDTH - greeting.getWidth()),
			rand() % (WindowConstants::WINDOW_HEIGHT - greeting.getHeight()));
}

void Game::draw() const
{
	win_xp_bliss.draw();
	greeting.draw();
}