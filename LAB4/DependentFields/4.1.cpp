#include "4.1.h"
#include <iostream>
using namespace std;

void DemoBand()
{
	Album* albums = new Album[3];
	Song* songs = new Song[4];
	songs[0] = Song("Come Together", 4, Rock);
	songs[1] = Song("Octopus's Garden", 3, Pop);
	songs[2] = Song("Something", 3, Folk);
	songs[3] = Song("Oh! Darling", 3, Rock);
	for (int i = 0; i < 3; i++)
	{
		albums[i] = Album("Abbey Road", 1969, songs, 4);
	}
	Band band = Band("The Beatles",
		"British rock-group from Liverpool, founded in 1960",
		albums, 3);
	Song* resultSong = band.FindSong("Something");
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
	Song songToFind = Song("Something", 3, Folk);
	Album* resultAlbum = band.FindAlbum(&songToFind);
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
	Song* arraySong = band.GetAllSongs(allSongsCount);
	cout << "\nBand name: " << band.GetName() << "\n";
	cout << "Count of all songs: " << allSongsCount << "\n\n";
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Song " << arraySong[i].GetName() << " has duration "
			<< arraySong[i].GetDuration()
			<< " and genre " << arraySong[i].GetGenre() << "\n";
	}
	Song* arrayGenre = band.GetAllGenreSongs(Pop, allSongsCount);
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