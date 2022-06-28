// Corresponding header
#include "sdl_utils/containers/MusicContainer.h"

// C/C++ system includes
#include <iostream>

// Third-party includes

// Own includes

std::unordered_map<int32_t, Mix_Music*> MusicContainer::_musics;

int32_t MusicContainer::init()
{
	for (const auto& musicInfo : musicsInfo)
	{
		int32_t id = musicInfo.id;
		if (_musics.find(id) != _musics.end())
		{
			std::cout << "Error, found existing music with the same id: " << id << std::endl;
			return EXIT_FAILURE;
		}

		_musics[id] = Mix_LoadMUS(musicInfo.fileName);
		if (!_musics[id])
		{
			std::cout << "Error, Mix_LoadMUS() failed for file: " << musicInfo.fileName << std::endl;
			return EXIT_FAILURE;
		}
	}

	return EXIT_SUCCESS;
}

void MusicContainer::deinit()
{
	for (auto& music : _musics)
		if (music.second)
		{
			Mix_FreeMusic(music.second);
			music.second = nullptr;
		}
}

Mix_Music* MusicContainer::getMusicById(int32_t id)
{
	if (_musics.find(id) == _musics.end() && _musics.size() > 1)
	{
		std::cout << "Error, could not find music with id: " << id << std::endl;
		return nullptr;
	}

	return _musics[id];
}