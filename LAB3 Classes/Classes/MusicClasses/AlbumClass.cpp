#include "AlbumClass.h"

AlbumClass::AlbumClass()
{

}

AlbumClass::AlbumClass(string& name, int yearRelease,
	SongClass* songs, int songsCount)
{
	SetName(name);
	SetYearRelease(yearRelease);
	SetSongs(songs);
	SetSongsCount(songsCount);
}

void AlbumClass::SetName(string& name)
{
	_name = name;
}

void AlbumClass::SetYearRelease(int yearRelease)
{
	if (yearRelease < 0)
	{
		// TODO: зачем в две строки? +
		throw exception("Year of release must be positive\n");
	}

	_yearRelease = yearRelease;
}

void AlbumClass::SetSongs(SongClass* songs)
{
	_songs = songs;
}

void AlbumClass::SetSongsCount(int songsCount)
{
	if (songsCount < 0)
	{
		// TODO: зачем в две строки? +
		throw exception("Songs count must be positive\n");
	}
	_songsCount = songsCount;
}

string& AlbumClass::GetName()
{
	return _name;
}

int AlbumClass::GetYearRelease()
{
	return _yearRelease;
}

SongClass* AlbumClass::GetSongs()
{
	return _songs;
}

int AlbumClass::GetSongsCount()
{
	return _songsCount;
}