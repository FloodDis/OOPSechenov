#include "3.5.h"

PointClass::PointClass(double x, double y)
{
	_x = x;
	_y = y;
}

PointClass::PointClass()
{
	
}

void PointClass::SetX(double x)
{
	_x = x;
}

void PointClass::SetY(double y)
{
	_y = y;
}

double PointClass::GetX()
{
	return _x;
}

double PointClass::GetY()
{
	return _y;
}

RectangleClass::RectangleClass()
{

}

RectangleClass::RectangleClass(double width, double length, double x, double y)
{
	_width = width;
	_length = length;
	_center->SetX(x);
	_center->SetY(y);
}

void RectangleClass::SetWidth(double width)
{
	if (width < 0)
	{
		exception error;
		throw error;
	}
	_width = width;
}

void RectangleClass::SetLength(double length)
{
	if (length < 0)
	{
		exception error;
		throw error;
	}
	_length = length;
}

void RectangleClass::SetCenter(double x, double y)
{
	_center->SetX(x);
	_center->SetY(y);
}

double RectangleClass::GetWidth()
{
	return _width;
}

double RectangleClass::GetLength()
{
	return _length;
}

PointClass* RectangleClass::GetCenter()
{
	return _center;
}

TimeClass::TimeClass(int year, int month, int day, int hour, int minutes)
{
	if (year < 0)
	{
		exception error;
		throw error;
	}
	if (month < 1 || month>12)
	{
		exception error;
		throw error;
	}
	if (day < 1 || day>30)
	{
		exception error;
		throw error;
	}
	if (hour < 0 || hour>23)
	{
		exception error;
		throw error;
	}
	if (minutes < 0 || minutes>59)
	{
		exception error;
		throw error;
	}
	_year = year;
	_month = month;
	_day = day;
	_hour = hour;
	_minutes = minutes;
}

TimeClass::TimeClass()
{

}

void TimeClass::SetYear(int year)
{
	if (year < 0)
	{
		exception error;
		throw error;
	}
	_year = year;
}

void TimeClass::SetMonth(int month)
{
	if (month < 1 || month>12)
	{
		exception error;
		throw error;
	}
	_month = month;
}

void TimeClass::SetDay(int day)
{
	if (day < 1 || day>30)
	{
		exception error;
		throw error;
	}
	_day = day;
}

void TimeClass::SetHour(int hour)
{
	if (hour < 0 || hour>23)
	{
		exception error;
		throw error;
	}
	_hour = hour;
}

void TimeClass::SetMinutes(int minutes)
{
	if (minutes < 0 || minutes>59)
	{
		exception error;
		throw error;
	}
	_minutes = minutes;
}

int TimeClass::GetYear()
{
	return _year;
}

int TimeClass::GetMonth()
{
	return _month;
}

int TimeClass::GetDay()
{
	return _day;
}

int TimeClass::GetHour()
{
	return _hour;
}

int TimeClass::GetMinutes()
{
	return _minutes;
}

FlightClass::FlightClass(int number, string departurePoint, string destinationPoint,
	TimeClass departureTime, TimeClass arrivalTime)
{
	TimeClass();
	if (number < 0)
	{
		exception error;
		throw error;
	}
	_number = number;
	_departurePoint = departurePoint;
	_destinationPoint = destinationPoint;
	_departureTime = departureTime;
	_arrivalTime = arrivalTime;
}

FlightClass::FlightClass()
{

}

void FlightClass::SetNumber(int number)
{
	if (number < 0)
	{
		exception error;
		throw error;
	}
	_number = number;
}

void FlightClass::SetDeparturePoint(string departurePoint)
{
	_departurePoint = departurePoint;
}

void FlightClass::SetDestinationPoint(string destinationPoint)
{
	_destinationPoint = destinationPoint;
}

void FlightClass::SetDepartureTime(TimeClass departureTime)
{
	_departureTime = departureTime;
}

void FlightClass::SetArrivalTime(TimeClass arrivalTime)
{
	_arrivalTime = arrivalTime;
}

int FlightClass::GetNumber()
{
	return _number;
}

string FlightClass::GetDeparturePoint()
{
	return _departurePoint;
}

string FlightClass::GetDestinationPoint()
{
	return _destinationPoint;
}

TimeClass FlightClass::GetDepartureTime()
{
	return _departureTime;
}

TimeClass FlightClass::GetArrivalTime()
{
	return _arrivalTime;
}

int FlightClass::GetFlightTimeMinutes()
{
	long int arrivalTimeInMinutes = 0;
	arrivalTimeInMinutes += _arrivalTime.GetYear() * 12 * 30 * 24 * 60;
	arrivalTimeInMinutes += _arrivalTime.GetMonth() * 30 * 24 * 60;
	arrivalTimeInMinutes += _arrivalTime.GetDay() * 24 * 60;
	arrivalTimeInMinutes += _arrivalTime.GetHour() * 60;
	arrivalTimeInMinutes += _arrivalTime.GetMinutes();

	long int departureTimeInMinutes = 0;
	departureTimeInMinutes += _departureTime.GetYear() * 12 * 30 * 24 * 60;
	departureTimeInMinutes += _departureTime.GetMonth() * 30 * 24 * 60;
	departureTimeInMinutes += _departureTime.GetDay() * 24 * 60;
	departureTimeInMinutes += _departureTime.GetHour() * 60;
	departureTimeInMinutes += _departureTime.GetMinutes();

	int flightDuration = arrivalTimeInMinutes - departureTimeInMinutes;
	return flightDuration;
}

SongClass::SongClass()
{

}

SongClass::SongClass(string name, int duration, Genre genre)
{
	_name = name;
	_duration = duration;
	_genre = genre;
}

void SongClass::SetName(string name)
{
	_name = name;
}

void SongClass::SetDuration(int duration)
{
	if (duration < 0)
	{
		exception error;
		throw error;
	}
	_duration = duration;
}

void SongClass::SetGenre(Genre genre)
{
	_genre = genre;
}

string SongClass::GetName()
{
	return _name;
}

int SongClass::GetDuration()
{
	return _duration;
}

Genre SongClass::GetGenre()
{
	return _genre;
}

AlbumClass::AlbumClass()
{

}

AlbumClass::AlbumClass(string name, int yearRelease, SongClass* songs, int songsCount)
{
	if (yearRelease < 0)
	{
		exception error;
		throw error;
	}
	if (songsCount < 0)
	{
		exception error;
		throw error;
	}
	_name = name;
	_yearRelease = yearRelease;
	_songs = songs;
	_songsCount = songsCount;
}

void AlbumClass::SetName(string name)
{
	_name = name;
}

void AlbumClass::SetYearRelease(int yearRelease)
{
	if (yearRelease < 0)
	{
		exception error;
		throw error;
	}

	_yearRelease = yearRelease;
}

void AlbumClass::SetSongs(SongClass* songs)
{
	_songs = songs;
}

void AlbumClass::SetSongsCount(int songsCount)
{
	if (songsCount < 0)
	{
		exception error;
		throw error;
	}
	_songsCount = songsCount;
}

string AlbumClass::GetName()
{
	return _name;
}

int AlbumClass::GetYearRelease()
{
	return _yearRelease;
}

SongClass* AlbumClass::GetSongs()
{
	return _songs;
}

int AlbumClass::GetSongsCount()
{
	return _songsCount;
}

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

void WriteRectangleWithPointClass(RectangleClass rectangle)
{
	cout << "Rectangle has length " << rectangle.GetLength()
		<< ", width " << rectangle.GetWidth() << " and center ("
		<< rectangle.GetCenter()->GetX() << ";"
		<< rectangle.GetCenter()->GetY() << ")\n";
}

void DemoRectangleWithPointClass()
{
	srand(time(nullptr));
	RectangleClass* array = new RectangleClass[5];
	for (int i = 0; i < 5; i++)
	{
		int width = rand() % 100;
		array[i].SetWidth(width);
		int length = rand() % 100;
		array[i].SetLength(length);
		int x = rand() % 100 - 50;
		int y = rand() % 100 - 50;
		array[i].SetCenter(x, y);
	}
	for (int i = 0; i < 5; i++)
	{
		WriteRectangleWithPointClass(array[i]);
	}
	double xCenter = 0;
	double yCenter = 0;
	for (int i = 0; i < 5; i++)
	{
		xCenter += array[i].GetCenter()->GetX();
		yCenter += array[i].GetCenter()->GetY();
	}
	cout << "Xcenter = " << xCenter / 5
		<< "; Ycenter = " << yCenter / 5 << "\n";
	delete[] array;
}

void WriteFlightClass(FlightClass& flight)
{
	cout << "S" << flight.GetNumber() << " " << flight.GetDeparturePoint()
		<< "-" << flight.GetDestinationPoint() << " Departure "
		<< flight.GetDepartureTime().GetMonth() << "."
		<< flight.GetDepartureTime().GetDay() << " "
		<< flight.GetDepartureTime().GetHour()
		<< ":" << flight.GetDepartureTime().GetMinutes() << " Arrival "
		<< flight.GetArrivalTime().GetMonth() << "."
		<< flight.GetArrivalTime().GetDay() << " "
		<< flight.GetArrivalTime().GetHour()
		<< ":" << flight.GetArrivalTime().GetMinutes() << "\n";
}

void DemoFlightWithTimeClass()
{
	srand(time(nullptr));
	FlightClass* array = new FlightClass[5];
	for (int i = 0; i < 5; i++)
	{
		TimeClass arrivalTime(1998, 10, 25, 10, 15);
		TimeClass departureTime(1998, 10, 24, 15, 23);
		FlightClass flight
		(rand() % 1000, "Tomsk", "Moscow", departureTime, arrivalTime);
		array[i] = flight;
	}
	for (int i = 0; i < 5; i++)
	{
		WriteFlightClass(array[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "Flight duration of " << i + 1 << " flight is "
			<< array[i].GetFlightTimeMinutes()
			<< " minutes\n";
	}
}

void DemoBandClass()
{
	AlbumClass* albums = new AlbumClass[3];
	SongClass* songs = new SongClass[4];
	songs[0] = SongClass("Come Together", 4, Rock);
	songs[1] = SongClass("Octopus's Garden", 3, Pop);
	songs[2] = SongClass("Something", 3, Folk);
	songs[3] = SongClass("Oh! Darling", 3, Rock);
	for (int i = 0; i < 3; i++)
	{
		albums[i] = AlbumClass("Abbey Road", 1969, songs, 4);
	}
	BandClass band = BandClass("The Beatles",
		"British rock-group from Liverpool, founded in 1960",
		albums, 3);
	SongClass* resultSong = band.FindSong("Something");
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
	SongClass songToFind = SongClass("Something", 3, Folk);
	AlbumClass* resultAlbum = band.FindAlbum(&songToFind);
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
	SongClass* arraySong = band.GetAllSongs(allSongsCount);
	cout << "\nBand name: " << band.GetName() << "\n";
	cout << "Count of all songs: " << allSongsCount << "\n\n";
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Song " << arraySong[i].GetName() << " has duration "
			<< arraySong[i].GetDuration()
			<< " and genre " << arraySong[i].GetGenre() << "\n";
	}
	SongClass* arrayGenre = band.GetAllGenreSongs(Pop, allSongsCount);
	cout << "Band name: " << band.GetName() << "\n";
	cout << "Count of all Pop songs: " << allSongsCount << "\n\n";
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Song " << arrayGenre[i].GetName() << " has duration "
			<< arrayGenre[i].GetDuration()
			<< " and genre " << arrayGenre[i].GetGenre() << "\n";
	}
	delete[] arrayGenre;
	delete[] resultAlbum;
	delete[] arraySong;
}