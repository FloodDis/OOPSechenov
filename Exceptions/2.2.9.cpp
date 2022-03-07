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

	FilmEnum* arrayFilm = new FilmEnum[10];
	arrayFilm[0] = *MakeMovieRemastered("Ring", 130, 2002, Horror);
	arrayFilm[1] = *MakeMovieRemastered("Avengers", 150, 2012, Action);
	arrayFilm[2] = *MakeMovieRemastered("La-la land", 170, 2016, Drama);
	arrayFilm[3] = *MakeMovieRemastered("Rambo", 140, 1982, Action);
	arrayFilm[4] = *MakeMovieRemastered("House of Gucci", 110, 2021, Drama);
	arrayFilm[5] = *MakeMovieRemastered("Dune", 120, 2021, Blockbuster);
	arrayFilm[6] = *MakeMovieRemastered("Time", 130, 2021, Triller);
	arrayFilm[7] = *MakeMovieRemastered("Parasites", 120, 2021, Triller);
	arrayFilm[8] = *MakeMovieRemastered("The Boss Baby", 130, 2017, Comedy);
	arrayFilm[9] = *MakeMovieRemastered("Rango", 125, 2011, Comedy);

	int horrorCount = CountMoviesByGenre(arrayFilm, 10, Horror);
	cout << "Horror count: " << horrorCount << "\n";

	delete film1;
	delete film2;
	delete[] arrayFilm;
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

int CountMoviesByGenre(FilmEnum* movies, int count, Genre findGenre)
{
	int genreCount = 0;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findGenre)
		{
			genreCount++;
		}
	}
	return genreCount;
}