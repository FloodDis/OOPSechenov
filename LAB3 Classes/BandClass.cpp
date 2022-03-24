#include "BandClass.h"

BandClass::BandClass()
{

}

BandClass::BandClass(string name, string information, AlbumClass* albums, int albumsCount)
{
	if (albumsCount < 0)
	{
		exception error;
		throw error;
	}
	_name = name;
	_information = information;
	_albums = albums;
	_albumsCount = albumsCount;
}

void BandClass::SetName(string name)
{
	_name = name;
}

void BandClass::SetInformation(string information)
{
	_information = information;
}

void BandClass::SetAlbums(AlbumClass* albums)
{
	_albums = albums;
}

void BandClass::SetAlbumsCount(int albumsCount)
{
	if (albumsCount < 0)
	{
		exception error;
		throw error;
	}
	_albumsCount = albumsCount;
}

string BandClass::GetName()
{
	return _name;
}

string BandClass::GetInformation()
{
	return _information;
}

AlbumClass* BandClass::GetAlbums()
{
	return _albums;
}

int BandClass::GetAlbumsCount()
{
	return _albumsCount;
}

SongClass* BandClass::FindSong(string songTitle)
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

AlbumClass* BandClass::FindAlbum(SongClass* song)
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

SongClass* BandClass::GetAllSongs(int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		allSongsCount += GetAlbums()[i].GetSongsCount();
	}
	SongClass* allSongs = new SongClass[allSongsCount];
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

SongClass* BandClass::GetAllGenreSongs(Genre findingGenre, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		allSongsCount += GetAlbums()[i].GetSongsCount();
	}
	SongClass* allSongs = new SongClass[allSongsCount];
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