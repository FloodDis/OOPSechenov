#include "../../Header Files/Structs/Film.h"

Film* MakeFilm(string& title, string& genre, int year, double rate)
{
	Film* film = new Film();
	film->Title = title;
	film->Genre = genre;
	film->ReleaseYear = year;
	film->Rating = rate;
	return film;
}

Film* CopyFilm(Film& film)
{
	//std::cout << &movie << '\n';
	Film* copiedFilm = new Film();
	//std::cout << copiedMovie << '\n';
	*copiedFilm = film;
	//std::cout << copiedMovie << '\n';
	return copiedFilm;
}

void DemoFilm()
{
	string movie1Title = "Die Hard";
	string movie1Genre = "Action";
	string movie2Title = "Matrix";
	string movie2Genre = "Fantastic";
	string movie3Title = "1+1";
	string movie3Genre = "Comedy";

	Film* film1 = MakeFilm(movie1Title, movie1Genre, 1988, 8.0);
	Film* film2 = MakeFilm(movie2Title, movie2Genre, 1999, 8.5);
	Film* film3 = MakeFilm(movie3Title, movie3Genre, 2012, 8.8);

	Film* copiedFilm1 = CopyFilm(*film1);
	Film* copiedFilm2 = CopyFilm(*film2);
	Film* copiedFilm3 = CopyFilm(*film3);

	WriteFilm(*copiedFilm1);
	WriteFilm(*copiedFilm2);
	WriteFilm(*copiedFilm3);

	delete film1;
	delete film2;
	delete film3;
	delete copiedFilm1;
	delete copiedFilm2;
	delete copiedFilm3;
}

void WriteFilm(Film& film)
{
	std::cout << "Title: " << film.Title << '\n';
	std::cout << "Genre: " << film.Genre << '\n';
	std::cout << "Release Year: " << film.ReleaseYear << '\n';
	std::cout << "Rating: " << film.Rating << '\n';
}