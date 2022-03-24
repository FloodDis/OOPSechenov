#include "Band.h"

Band* MakeBand(string name, string information,
	Album* albums, int albumsCount)
{
	Band* newBand = new Band;
	newBand->Albums = albums;
	newBand->Information = information;
	newBand->Name = name;
	newBand->AlbumsCount = albumsCount;
	return newBand;
}

void SetNameBand(Band& band, string name)
{
	band.Name = name;
}

void SetInformation(Band& band, string information)
{
	band.Information = information;
}

void SetAlbums(Band& band, Album* albums)
{
	band.Albums = albums;
}

Song* FindSong(Band& band, string songTitle)
{
	for (int i = 0; i < band.AlbumsCount; i++)
	{
		for (int j = 0; j < band.Albums[i].SongsCount; j++)
		{
			if (band.Albums[i].Songs[j].Name == songTitle)
			{
				return &band.Albums[i].Songs[j];
			}
		}
	}
	return nullptr;
}

Album* FindAlbum(Band& band, Song* song)
{
	for (int i = 0; i < band.AlbumsCount; i++)
	{
		for (int j = 0; j < band.Albums[i].SongsCount; j++)
		{
			if (band.Albums[i].Songs[j].Name == song->Name
				&& band.Albums[i].Songs[j].Duration == song->Duration
				&& band.Albums[i].Songs[j].Genre == song->Genre)
			{
				return &band.Albums[i];
			}
		}
	}
	return nullptr;
}

Song* GetAllSongs(Band* band, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		allSongsCount += band->Albums[i].SongsCount;
	}
	Song* allSongs = new Song[allSongsCount];
	int allSongsIndex = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			allSongs[allSongsIndex] = band->Albums[i].Songs[j];
			allSongsIndex++;
		}
	}
	allSongsCount = allSongsIndex;
	return allSongs;
}

Song* GetAllGenreSongs(Band* band, Genre
	findingGenre, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		allSongsCount += band->Albums[i].SongsCount;
	}
	Song* allSongs = new Song[allSongsCount];
	int allSongsIndex = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (band->Albums[i].Songs[j].Genre == findingGenre)
			{
				allSongs[allSongsIndex] = band->Albums[i].Songs[j];
				allSongsIndex++;
			}
		}
	}
	allSongsCount = allSongsIndex;
	return allSongs;
}