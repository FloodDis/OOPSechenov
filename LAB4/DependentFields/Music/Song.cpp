#include "Song.h"

Song::Song()
{

}

Song::Song(string name, int duration, Genre genre)
{
	SetName(name);
	SetDuration(duration);
	SetGenre(genre);
}

void Song::SetName(string name)
{
	_name = name;
}

void Song::SetDuration(int duration)
{
	if (duration < 0)
	{
		throw "Duration must be greater than 0\n";
	}
	_duration = duration;
}

void Song::SetGenre(Genre genre)
{
	_genre = genre;
}

string Song::GetName()
{
	return _name;
}

int Song::GetDuration()
{
	return _duration;
}

Genre Song::GetGenre()
{
	return _genre;
}