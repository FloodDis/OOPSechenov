#include "../../Header Files/OneToManyAggregation/Song.h"

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