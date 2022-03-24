#include "4.1.h"
#include <iostream>
using namespace std;

SongClassFix::SongClassFix()
{

}

SongClassFix::SongClassFix(string name, int duration, Genre genre)
{
	if (duration < 0)
	{
		throw "Duration must be greater than 0\n";
	}
	_name = name;
	_duration = duration;
	_genre = genre;
}

void SongClassFix::SetName(string name)
{
	_name = name;
}

void SongClassFix::SetDuration(int duration)
{
	if (duration < 0)
	{
		throw "Duration must be greater than 0\n";
	}
	_duration = duration;
}

void SongClassFix::SetGenre(Genre genre)
{
	_genre = genre;
}

string SongClassFix::GetName()
{
	return _name;
}

int SongClassFix::GetDuration()
{
	return _duration;
}

Genre SongClassFix::GetGenre()
{
	return _genre;
}

AlbumClassFix::AlbumClassFix()
{

}

AlbumClassFix::AlbumClassFix(string name, int yearRelease,
	SongClassFix* songs, int songsCount)
{
	if (yearRelease < 0)
	{
		throw "Year of release must be greater than 0\n";
	}
	if (songsCount < 0)
	{
		throw "Songs count must be greater than 0\n";
	}
	_name = name;
	_yearRelease = yearRelease;
	_songs = songs;
	_songsCount = songsCount;
}

void AlbumClassFix::SetName(string name)
{
	_name = name;
}

void AlbumClassFix::SetYearRelease(int yearRelease)
{
	if (yearRelease < 0)
	{
		throw "Year of release must be greater than 0\n";
	}
	_yearRelease = yearRelease;
}

void AlbumClassFix::SetSongs(SongClassFix* songs, int songsCount)
{
	if (songsCount < 0)
	{
		throw "Songs count must be greater than 0\n";
	}
	_songs = songs;
	_songsCount = songsCount;
}

string AlbumClassFix::GetName()
{
	return _name;
}

int AlbumClassFix::GetYearRelease()
{
	return _yearRelease;
}

SongClassFix* AlbumClassFix::GetSongs()
{
	return _songs;
}

int AlbumClassFix::GetSongsCount()
{
	return _songsCount;
}

BandClassFix::BandClassFix()
{

}

BandClassFix::BandClassFix(string name, string information,
	AlbumClassFix* albums, int albumsCount)
{
	if (albumsCount < 0)
	{
		throw "Albums count must be greater than 0\n";
	}
	_albumsCount = albumsCount;
	_name = name;
	_information = information;
	_albums = albums;
}

void BandClassFix::SetName(string name)
{
	_name = name;
}

void BandClassFix::SetInformation(string information)
{
	_information = information;
}

void BandClassFix::SetAlbums(AlbumClassFix* albums, int albumsCount)
{
	if (albumsCount < 0)
	{
		throw "Albums count must be greater than 0\n";
	}
	_albumsCount = albumsCount;
	_albums = albums;
}

string BandClassFix::GetName()
{
	return _name;
}

string BandClassFix::GetInformation()
{
	return _information;
}

AlbumClassFix* BandClassFix::GetAlbums()
{
	return _albums;
}

int BandClassFix::GetAlbumsCount()
{
	return _albumsCount;
}

SongClassFix* BandClassFix::FindSong(string songTitle)
{
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		for (int j = 0; j < GetAlbums()[i].GetSongsCount(); j++)
		{
			if (GetAlbums()[i].GetSongs()[j].GetName() == songTitle)
			{
				return &GetAlbums()[i].GetSongs()[j];
			}
		}
	}
	return nullptr;
}

AlbumClassFix* BandClassFix::FindAlbum(SongClassFix* song)
{
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		for (int j = 0; j < GetAlbums()[i].GetSongsCount(); j++)
		{
			if (GetAlbums()[i].GetSongs()[j].GetName() == song->GetName()
				&& GetAlbums()[i].GetSongs()[j].GetDuration()
				== song->GetDuration()
				&& GetAlbums()[i].GetSongs()[j].GetGenre()
				== song->GetGenre())
			{
				return &GetAlbums()[i];
			}
		}
	}
	return nullptr;
}

SongClassFix* BandClassFix::GetAllSongs(int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		allSongsCount += GetAlbums()[i].GetSongsCount();
	}
	SongClassFix* allSongs = new SongClassFix[allSongsCount];
	int allSongsIndex = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			allSongs[allSongsIndex] = GetAlbums()[i].GetSongs()[j];
			allSongsIndex++;
		}
	}
	return allSongs;
}

SongClassFix* BandClassFix::GetAllGenreSongs(Genre findingGenre,
	int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		allSongsCount += GetAlbums()[i].GetSongsCount();
	}
	SongClassFix* allSongs = new SongClassFix[allSongsCount];
	int allSongsIndex = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (GetAlbums()[i].GetSongs()[j].GetGenre() == findingGenre)
			{
				allSongs[allSongsIndex] = GetAlbums()[i].GetSongs()[j];
				allSongsIndex++;
			}
		}
	}
	allSongsCount = allSongsIndex;
	return allSongs;
}

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

Ring::Ring()
{

}

Ring::Ring(double innerRadius, double outerRadius,
	double xCenter, double yCenter)
{
	if (innerRadius > outerRadius)
	{
		throw "Outer radius must be greater than inner radius\n";
	}
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
	_center.SetX(xCenter);
	_center.SetY(yCenter);
}

void Ring::SetRadii(double innerRadius, double outerRadius)
{
	if (innerRadius > outerRadius)
	{
		throw "Outer radius must be greater than inner radius\n";
	}
	_innerRadius = innerRadius;
	_outerRadius = outerRadius;
}

void Ring::SetCenter(double xCenter, double yCenter)
{
	_center.SetX(xCenter);
	_center.SetY(yCenter);
}

double Ring::GetInnerRadius()
{
	return _innerRadius;
}

double Ring::GetOuterRadius()
{
	return _outerRadius;
}

PointClass Ring::GetCenter()
{
	return _center;
}

double Ring::GetArea()
{
	double outerArea = 3.14 * _outerRadius * _outerRadius;
	double innerArea = 3.14 * _innerRadius * _innerRadius;
	return outerArea - innerArea;
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