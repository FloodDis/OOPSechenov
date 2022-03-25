#include "../../Header Files/DependentFields/BandClassFix.h"

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