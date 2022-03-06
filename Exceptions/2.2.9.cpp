#include "2.2.9.h"

void DemoMovieWithGenre()
{
	FilmEnum* film1 = new FilmEnum;
	film1->Duration = 120;
	film1->Genre = Horror;
	film1->Name = "Scream";
	film1->YearOfRelease = 1999;
	cout << "Film " << film1->Name << " was made in "
		<< film1->YearOfRelease << ", has duration "
		<< film1->Duration << "\n";
	FilmEnum* film2 = MakeMovieRemastered("Home alone", 150, 1999, Comedy);
	cout << "Film " << film2->Name << " was made in "
		<< film2->YearOfRelease << ", has duration "
		<< film2->Duration << "\n";
	delete film1;
	delete film2;
}

FilmEnum* MakeMovieRemastered(string name, int duration,
	int yearOfRelease, Genre genre)
{
	FilmEnum* film = new FilmEnum;
	film->Duration = 120;
	film->Genre = genre;
	film->Name = name;
	film->YearOfRelease = yearOfRelease;
	return film;
}