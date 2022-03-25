#include "../../Header Files/DependentFields/AlbumClassFix.h"

AlbumClassFix::AlbumClassFix()
{

}

AlbumClassFix::AlbumClassFix(string name, int yearRelease,
	SongClassFix* songs, int songsCount)
{
	if (yearRelease < 0)
	{
		throw "Year of release must be greater than 0\n";
	}
	if (songsCount < 0)
	{
		throw "Songs count must be greater than 0\n";
	}
	_name = name;
	_yearRelease = yearRelease;
	_songs = songs;
	_songsCount = songsCount;
}

void AlbumClassFix::SetName(string name)
{
	_name = name;
}

void AlbumClassFix::SetYearRelease(int yearRelease)
{
	if (yearRelease < 0)
	{
		throw "Year of release must be greater than 0\n";
	}
	_yearRelease = yearRelease;
}

void AlbumClassFix::SetSongs(SongClassFix* songs, int songsCount)
{
	if (songsCount < 0)
	{
		throw "Songs count must be greater than 0\n";
	}
	_songs = songs;
	_songsCount = songsCount;
}

string AlbumClassFix::GetName()
{
	return _name;
}

int AlbumClassFix::GetYearRelease()
{
	return _yearRelease;
}

SongClassFix* AlbumClassFix::GetSongs()
{
	return _songs;
}

int AlbumClassFix::GetSongsCount()
{
	return _songsCount;
}