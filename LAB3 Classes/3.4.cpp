#include "3.4.h"

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

Album* MakeAlbum(string name, int yearOfRelease, Song* songs, int songsCount)
{
	Album* newAlbum = new Album;
	newAlbum->Name = name;
	newAlbum->Songs = songs;
	newAlbum->YearOfRelease = yearOfRelease;
	newAlbum->SongsCount = songsCount;
	return newAlbum;
}

void SetNameAlbum(Album& album, string name)
{
	album.Name = name;
}

void SetYearOfRelease(Album& album, int yearOfRelease)
{
	if (yearOfRelease < 0)
	{
		exception error;
		throw error;
	}
	album.YearOfRelease = yearOfRelease;
}

void SetSongs(Album& album, Song* songs)
{
	album.Songs = songs;
}

Band* MakeBand(string name, string information,
	Album* albums, int albumsCount)
{
	Band* newBand = new Band;
	newBand->Albums = albums;
	newBand->Information = information;
	newBand->Name = name;
	newBand->AlbumsCount = albumsCount;
	return newBand;
}

void SetNameBand(Band& band, string name)
{
	band.Name = name;
}

void SetInformation(Band& band, string information)
{
	band.Information = information;
}

void SetAlbums(Band& band, Album* albums)
{
	band.Albums = albums;
}

Song* FindSong(Band& band, string songTitle)
{
	for (int i = 0; i < band.AlbumsCount; i++)
	{
		for (int j = 0; j < band.Albums[i].SongsCount; j++)
		{
			if (band.Albums[i].Songs[j].Name == songTitle)
			{
				return &band.Albums[i].Songs[j];
			}
		}
	}
	return nullptr;
}

Album* FindAlbum(Band& band, Song* song)
{
	for (int i = 0; i < band.AlbumsCount; i++)
	{
		for (int j = 0; j < band.Albums[i].SongsCount; j++)
		{
			if (band.Albums[i].Songs[j].Name == song->Name
				&& band.Albums[i].Songs[j].Duration == song->Duration
				&& band.Albums[i].Songs[j].Genre == song->Genre)
			{
				return &band.Albums[i];
			}
		}
	}
	return nullptr;
}

Song* GetAllSongs(Band* band, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		allSongsCount += band->Albums[i].SongsCount;
	}
	Song* allSongs = new Song[allSongsCount];
	int allSongsIndex = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			allSongs[allSongsIndex] = band->Albums[i].Songs[j];
			allSongsIndex++;
		}
	}
	allSongsCount = allSongsIndex;
	return allSongs;
}

Song* GetAllGenreSongs(Band* band, Genre
	findingGenre, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		allSongsCount += band->Albums[i].SongsCount;
	}
	Song* allSongs = new Song[allSongsCount];
	int allSongsIndex = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (band->Albums[i].Songs[j].Genre == findingGenre)
			{
				allSongs[allSongsIndex] = band->Albums[i].Songs[j];
				allSongsIndex++;
			}
		}
	}
	allSongsCount = allSongsIndex;
	return allSongs;
}

void DemoBand()
{
	Band* band = new Band;
	Album* albums = new Album[3];
	Song* songs = new Song[4];
	songs[0] = *MakeSong("Come Together", 4, Rock);
	songs[1] = *MakeSong("Octopus's Garden", 3, Pop);
	songs[2] = *MakeSong("Something", 3, Folk);
	songs[3] = *MakeSong("Oh! Darling", 3, Rock);
	for (int i = 0; i < 3; i++)
	{
		albums[i] = *MakeAlbum("Abbey Road", 1969, songs, 4);
	}
	band = MakeBand("The Beatles",
		"British rock-group from Liverpool, founded in 1960",
		albums, 3);
	Song* resultSong = FindSong(*band, "Something");
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
	Song* songToFind = MakeSong("Something", 3, Folk);
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