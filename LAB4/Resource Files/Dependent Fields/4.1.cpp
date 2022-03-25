#include "../../Header Files/DependentFields/4.1.h"
#include <iostream>
using namespace std;

void DemoBandClassFix()
{
	AlbumClassFix* albums = new AlbumClassFix[3];
	SongClassFix* songs = new SongClassFix[4];
	songs[0] = SongClassFix("Come Together", 4, Rock);
	songs[1] = SongClassFix("Octopus's Garden", 3, Pop);
	songs[2] = SongClassFix("Something", 3, Folk);
	songs[3] = SongClassFix("Oh! Darling", 3, Rock);
	for (int i = 0; i < 3; i++)
	{
		albums[i] = AlbumClassFix("Abbey Road", 1969, songs, 4);
	}
	BandClassFix band = BandClassFix("The Beatles",
		"British rock-group from Liverpool, founded in 1960",
		albums, 3);
	SongClassFix* resultSong = band.FindSong("Something");
	if (resultSong == nullptr)
	{
		cout << "Song isn't found\n";
	}
	else
	{
		cout << "Song " << resultSong->GetName() << " has duration "
			<< resultSong->GetDuration()
			<< " and genre " << resultSong->GetGenre() << "\n";
	}
	SongClassFix songToFind = SongClassFix("Something", 3, Folk);
	AlbumClassFix* resultAlbum = band.FindAlbum(&songToFind);
	if (resultAlbum == nullptr)
	{
		cout << "Album isn't found\n\n";
	}
	else
	{
		cout << "Song " << songToFind.GetName() << " was found in album "
			<< resultAlbum->GetName();
	}

	int allSongsCount = 0;
	SongClassFix* arraySong = band.GetAllSongs(allSongsCount);
	cout << "\nBand name: " << band.GetName() << "\n";
	cout << "Count of all songs: " << allSongsCount << "\n\n";
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Song " << arraySong[i].GetName() << " has duration "
			<< arraySong[i].GetDuration()
			<< " and genre " << arraySong[i].GetGenre() << "\n";
	}
	SongClassFix* arrayGenre = band.GetAllGenreSongs(Pop, allSongsCount);
	cout << "Band name: " << band.GetName() << "\n";
	cout << "Count of all Pop songs: " << allSongsCount << "\n\n";
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Song " << arrayGenre[i].GetName() << " has duration "
			<< arrayGenre[i].GetDuration()
			<< " and genre " << arrayGenre[i].GetGenre() << "\n";
	}
	delete[] arraySong;
	delete[] resultAlbum;
	delete[] arrayGenre;
}

void DemoRing()
{
	Ring ring1(5.0, 13.0, 2.0, -1.0);
	Ring ring2(3.0, 8.0, 1.0, 4.5);
	Ring ring3(4.0, 16.5, 3.75, 9.0);

	cout << "Ring 1 area: " << ring1.GetArea() << "\n";
	cout << "Ring 2 area: " << ring2.GetArea() << "\n";
	cout << "Ring 3 area: " << ring3.GetArea() << "\n";

	try
	{
		Ring ring4(14.0, 9.0, 3.24, 1.26);
		Ring ring5(-2.8, -1.3, 2.5, 3.47);
	}
	catch (const char* error)
	{
		cout << error;
	}
}