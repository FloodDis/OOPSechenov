#include "2.2.9.h"

void DemoMovieWithGenre()
{
	cout << "Задание 2.2.9.2:\n";
	FilmEnum* film1 = new FilmEnum;
	film1->Duration = 120;
	film1->Genre = Horror;
	film1->Name = "Scream";
	film1->YearOfRelease = 1999;
	cout << "Film " << film1->Name << " was made in "
		<< film1->YearOfRelease << ", has duration "
		<< film1->Duration << " and rate" << film1->Rate << "\n\n";

	cout << "Задание 2.2.9.3:\n";
	FilmEnum* film2 =
		MakeMovieRemastered("Home alone", 150, 1999, Comedy, 7.8);
	cout << "Film " << film2->Name << " was made in "
		<< film2->YearOfRelease << ", has duration "
		<< film2->Duration << " and rate" << film2->Rate << "\n\n";

	FilmEnum* arrayFilm = new FilmEnum[10];
	arrayFilm[0] = *MakeMovieRemastered("Ring", 130, 2002, Horror, 8.5);
	arrayFilm[1] =
		*MakeMovieRemastered("Avengers", 150, 2012, Action, 9.3);
	arrayFilm[2] =
		*MakeMovieRemastered("La-la land", 170, 2016, Drama, 7.8);
	arrayFilm[3] = *MakeMovieRemastered("Rambo", 140, 1982, Action, 8.3);
	arrayFilm[4] =
		*MakeMovieRemastered("House of Gucci", 110, 2021, Drama, 8.0);
	arrayFilm[5] =
		*MakeMovieRemastered("Dune", 120, 2021, Blockbuster, 8.2);
	arrayFilm[6] = *MakeMovieRemastered("Time", 130, 2021, Triller, 7.6);
	arrayFilm[7] =
		*MakeMovieRemastered("Parasites", 120, 2021, Triller, 9.8);
	arrayFilm[8] =
		*MakeMovieRemastered("The Boss Baby", 130, 2017, Comedy, 7.2);
	arrayFilm[9] = *MakeMovieRemastered("Rango", 125, 2011, Comedy, 7.0);

	cout << "Задание 2.2.9.4:\n";
	int horrorCount = CountMoviesByGenre(arrayFilm, 10, Horror);
	cout << "Horror count: " << horrorCount << "\n\n";

	cout << "Задание 2.2.9.5:\n";
	FilmEnum* answer = FindBestGenreMovie(arrayFilm, 10, Action);
	cout << "Best Action film: " << answer->Name
		<< " " << answer->Rate << "\n\n";

	delete film1;
	delete film2;
	delete[] arrayFilm;
}

FilmEnum* MakeMovieRemastered(string name, int duration,
	int yearOfRelease, Genre genre, double rate)
{
	FilmEnum* film = new FilmEnum;
	film->Duration = 120;
	film->Genre = genre;
	film->Name = name;
	film->YearOfRelease = yearOfRelease;
	film->Rate = rate;
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

FilmEnum* FindBestGenreMovie(FilmEnum* movies, int count, Genre findGenre)
{
	FilmEnum* result = nullptr;
	double maxRate = 0.0;
	int maxIndex;
	for (int i = 0; i < count; i++)
	{
		if (movies[i].Genre == findGenre && movies[i].Rate > maxRate)
		{
			maxIndex = i;
			maxRate = movies[i].Rate;
		}
	}
	return &movies[maxIndex];
}