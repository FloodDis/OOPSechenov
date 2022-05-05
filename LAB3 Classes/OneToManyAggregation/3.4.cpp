#include "3.4.h"

// TODO: утечка памяти в функции
void DemoBand()
{
	Band* band = new Band;
	Album* albums = new Album[3];
	Song* songs = new Song[4];
	string name = "Come Together";
	songs[0] = *MakeSong(name, 4, Rock);
	name = "Octopus's Garden";
	songs[1] = *MakeSong(name, 3, Pop);
	name = "Something";
	songs[2] = *MakeSong(name, 3, Folk);
	name = "Oh! Darling";
	songs[3] = *MakeSong(name, 3, Rock);
	for (int i = 0; i < 3; i++)
	{
		name = "Abbey Road";
		albums[i] = *MakeAlbum(name, 1969, songs, 4);
	}
	name = "The Beatles";
	string information =
		"British rock-group from Liverpool, founded in 1960";
	band = MakeBand(name, information, albums, 3);
	name = "Something";
	Song* resultSong = FindSong(*band, name);
	if (resultSong == nullptr)
	{
		cout << "Song isn't found\n";
	}
	else
	{
		cout << "Song " << resultSong->Name << " has duration "
			<< resultSong->Duration
			<< " and genre " << resultSong->Genre << "\n";
	}
	Song* songToFind = MakeSong(name, 3, Folk);
	Album* resultAlbum = FindAlbum(*band, songToFind);
	if (resultAlbum == nullptr)
	{
		cout << "Album isn't found\n\n";
	}
	else
	{
		cout << "Song " << songToFind->Name << " was found in album "
			<< resultAlbum->Name;
	}

	int allSongsCount = 0;
	Song* arraySong = GetAllSongs(band, allSongsCount);
	cout << "Band name: " << band->Name << "\n";
	cout << "Count of all songs: " << allSongsCount << "\n\n";
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Song " << arraySong[i].Name << " has duration "
			<< arraySong[i].Duration
			<< " and genre " << arraySong[i].Genre << "\n";
	}
	Song* arrayGenre = GetAllGenreSongs(band, Pop, allSongsCount);
	cout << "Band name: " << band->Name << "\n";
	cout << "Count of all Pop songs: " << allSongsCount << "\n\n";
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Song " << arrayGenre[i].Name << " has duration "
			<< arrayGenre[i].Duration
			<< " and genre " << arrayGenre[i].Genre << "\n";
	}
	delete[] arrayGenre;
	delete songToFind;
	delete[] resultAlbum;
	delete[] arraySong;
}