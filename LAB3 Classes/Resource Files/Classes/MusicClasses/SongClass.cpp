#include "../../../Header Files/Classes/MusicClasses/SongClass.h"

SongClass::SongClass()
{

}

SongClass::SongClass(string& name, int duration, Genre genre)
{
	SetName(name);
	SetDuration(duration);
	SetGenre(genre);
}

void SongClass::SetName(string& name)
{
	_name = name;
}

void SongClass::SetDuration(int duration)
{
	if (duration < 0)
	{
		throw exception("Duration must be positive\n");
	}
	_duration = duration;
}

void SongClass::SetGenre(Genre genre)
{
	_genre = genre;
}

string& SongClass::GetName()
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