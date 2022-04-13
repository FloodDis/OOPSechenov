#include "../../../Header Files/DependentFields/Music/Album.h"

Album::Album()
{

}

Album::Album(string name, int yearRelease,
	Song* songs, int songsCount)
{
	SetName(name);
	SetYearRelease(yearRelease);
	SetSongs(songs, songsCount);
}

void Album::SetName(string name)
{
	_name = name;
}

void Album::SetYearRelease(int yearRelease)
{
	if (yearRelease < 0)
	{
		throw "Year of release must be greater than 0\n";
	}
	_yearRelease = yearRelease;
}

void Album::SetSongs(Song* songs, int songsCount)
{
	if (songsCount < 0)
	{
		throw "Songs count must be greater than 0\n";
	}
	_songs = songs;
	_songsCount = songsCount;
}

string Album::GetName()
{
	return _name;
}

int Album::GetYearRelease()
{
	return _yearRelease;
}

Song* Album::GetSongs()
{
	return _songs;
}

int Album::GetSongsCount()
{
	return _songsCount;
}