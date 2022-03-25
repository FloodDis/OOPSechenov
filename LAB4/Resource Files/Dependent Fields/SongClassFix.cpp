#include "../../Header Files/DependentFields/SongClassFix.h"

SongClassFix::SongClassFix()
{

}

SongClassFix::SongClassFix(string name, int duration, Genre genre)
{
	if (duration < 0)
	{
		throw "Duration must be greater than 0\n";
	}
	_name = name;
	_duration = duration;
	_genre = genre;
}

void SongClassFix::SetName(string name)
{
	_name = name;
}

void SongClassFix::SetDuration(int duration)
{
	if (duration < 0)
	{
		throw "Duration must be greater than 0\n";
	}
	_duration = duration;
}

void SongClassFix::SetGenre(Genre genre)
{
	_genre = genre;
}

string SongClassFix::GetName()
{
	return _name;
}

int SongClassFix::GetDuration()
{
	return _duration;
}

Genre SongClassFix::GetGenre()
{
	return _genre;
}