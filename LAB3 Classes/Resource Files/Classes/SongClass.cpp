#include "../../Header Files/Classes/SongClass.h"

SongClass::SongClass()
{

}

SongClass::SongClass(string name, int duration, Genre genre)
{
	_name = name;
	_duration = duration;
	_genre = genre;
}

void SongClass::SetName(string name)
{
	_name = name;
}

void SongClass::SetDuration(int duration)
{
	if (duration < 0)
	{
		exception error;
		throw error;
	}
	_duration = duration;
}

void SongClass::SetGenre(Genre genre)
{
	_genre = genre;
}

string SongClass::GetName()
{
	return _name;
}

int SongClass::GetDuration()
{
	return _duration;
}

Genre SongClass::GetGenre()
{
	return _genre;
}