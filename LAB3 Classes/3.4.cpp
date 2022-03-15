#include "3.4.h"

Song* MakeSong(string name, int duration, Genre genre)
{
	Song* newSong = new Song;
	newSong->Duration = duration;
	newSong->Genre = genre;
	newSong->Name = name;
	return newSong;
}

void SetNameSong(Song& song, string name)
{
	song.Name = name;
}

void SetDuration(Song& song, int duration)
{
	if (duration < 0)
	{
		exception error;
		throw error;
	}
	song.Duration = duration;
}

void SetGenre(Song& song, Genre genre)
{
	song.Genre = genre;
}

Album* MakeAlbum(string name, int yearOfRelease, Song* songs, int songsCount)
{
	Album* newAlbum = new Album;
	newAlbum->Name = name;
	newAlbum->Songs = songs;
	newAlbum->YearOfRelease = yearOfRelease;
	newAlbum->SongsCount = songsCount;
	return newAlbum;
}

void SetNameAlbum(Album& album, string name)
{
	album.Name = name;
}

void SetYearOfRelease(Album& album, int yearOfRelease)
{
	if (yearOfRelease < 0)
	{
		exception error;
		throw error;
	}
	album.YearOfRelease = yearOfRelease;
}

void SetSongs(Album& album, Song* songs)
{
	album.Songs = songs;
}

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
			if (&band.Albums[i].Songs[j] == song)
			{
				return &band.Albums[i];
			}
		}
	}
	return nullptr;
}