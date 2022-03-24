#include "../../Header Files/Classes/AlbumClass.h"

AlbumClass::AlbumClass()
{

}

AlbumClass::AlbumClass(string name, int yearRelease, SongClass* songs, int songsCount)
{
	if (yearRelease < 0)
	{
		exception error;
		throw error;
	}
	if (songsCount < 0)
	{
		exception error;
		throw error;
	}
	_name = name;
	_yearRelease = yearRelease;
	_songs = songs;
	_songsCount = songsCount;
}

void AlbumClass::SetName(string name)
{
	_name = name;
}

void AlbumClass::SetYearRelease(int yearRelease)
{
	if (yearRelease < 0)
	{
		exception error;
		throw error;
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
		exception error;
		throw error;
	}
	_songsCount = songsCount;
}

string AlbumClass::GetName()
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