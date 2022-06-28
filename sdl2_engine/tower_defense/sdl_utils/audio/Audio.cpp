// Corresponding header
#include "sdl_utils/audio/Audio.h"

// C/C++ system includes
#include <iostream>

// Third-party includes
#include <SDL_mixer.h>

// Own includes
#include "sdl_utils/containers/SoundContainer.h"
#include "sdl_utils/containers/MusicContainer.h"

void Audio::playSound(int32_t soundId, int32_t loops)
{
	Mix_PlayChannel(Audio::FIRST_FREE_CHANNEL, SoundContainer::getSoundById(soundId), loops);
}

void Audio::pauseSounds()
{
	Mix_Pause(ALL_CHANNELS);
}

void Audio::stopSounds()
{
	Mix_HaltChannel(ALL_CHANNELS);
}

void Audio::playMusic(int32_t musicId, int32_t loops)
{
	Mix_PlayMusic(MusicContainer::getMusicById(musicId), loops);
}

void Audio::pauseMusic()
{
	Mix_PauseMusic();
}

void Audio::stopMusic()
{
	Mix_HaltMusic();
}

void Audio::setSoundsVolume(uint8_t volume)
{
	if (volume < VOLUME_ZERO || volume > VOLUME_MAX)
	{
		std::cout << "Error, Audio::setSoundsVolume() received invalid parameter volume: " << volume << std::endl;
		return;
	}

	Mix_Volume(ALL_CHANNELS, volume);
}

void Audio::setMusicVolume(uint8_t volume)
{
	if (volume < VOLUME_ZERO || volume > VOLUME_MAX)
	{
		std::cout << "Error, Audio::setSoundsVolume() received invalid parameter volume: " << volume << std::endl;
		return;
	}

	Mix_VolumeMusic(volume);
}

uint8_t Audio::getSoundsVolume()
{
	return Mix_Volume(ALL_CHANNELS, -1);
}

uint8_t Audio::getMusicVolume()
{
	return Mix_VolumeMusic(-1);
}

bool Audio::playingMusic()
{
	return Mix_PlayingMusic();
}

bool Audio::pausedMusic()
{
	return Mix_PausedMusic();
}