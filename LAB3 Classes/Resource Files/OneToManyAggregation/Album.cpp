#include "../../Header Files/OneToManyAggregation/Album.h"

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
		// TODO: зачем в две строки?
		exception error;
		throw error;
	}
	album.YearOfRelease = yearOfRelease;
}

void SetSongs(Album& album, Song* songs)
{
	album.Songs = songs;
}