#include "../../Header Files/DependentFields/Band.h"

Band::Band()
{

}

Band::Band(string name, string information,
	Album* albums, int albumsCount)
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

void Band::SetName(string name)
{
	_name = name;
}

void Band::SetInformation(string information)
{
	_information = information;
}

void Band::SetAlbums(Album* albums, int albumsCount)
{
	if (albumsCount < 0)
	{
		throw "Albums count must be greater than 0\n";
	}
	_albumsCount = albumsCount;
	_albums = albums;
}

string Band::GetName()
{
	return _name;
}

string Band::GetInformation()
{
	return _information;
}

Album* Band::GetAlbums()
{
	return _albums;
}

int Band::GetAlbumsCount()
{
	return _albumsCount;
}

Song* Band::FindSong(string songTitle)
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

Album* Band::FindAlbum(Song* song)
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

Song* Band::GetAllSongs(int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		allSongsCount += GetAlbums()[i].GetSongsCount();
	}
	Song* allSongs = new Song[allSongsCount];
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

Song* Band::GetAllGenreSongs(Genre findingGenre,
	int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < GetAlbumsCount(); i++)
	{
		allSongsCount += GetAlbums()[i].GetSongsCount();
	}
	Song* allSongs = new Song[allSongsCount];
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