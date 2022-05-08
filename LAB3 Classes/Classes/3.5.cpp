#include "3.5.h"

void WriteRectangleWithPointClass(RectangleClass rectangle)
{
	cout << "Rectangle has length " << rectangle.GetLength()
		<< ", width " << rectangle.GetWidth() << " and center ("
		<< rectangle.GetCenter().GetX() << ";"
		<< rectangle.GetCenter().GetY() << ")\n";
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
		xCenter += array[i].GetCenter().GetX();
		yCenter += array[i].GetCenter().GetY();
	}
	cout << "Xcenter = " << xCenter / 5
		<< "; Ycenter = " << yCenter / 5 << "\n";

	delete[] array;
}

void WriteFlightClass(FlightClass& flight)
{
	// TODO: сделать локальные переменные для времени отправки и прибытия, чтобы не обращаться к ним постоянно через переменную рейса +
	// TODO: сделать функцию для времени, которая формирует нужную строку, чтобы не дублировать код для времени отправки и прибытия +
	TimeClass arrivalTime = flight.GetArrivalTime();
	TimeClass departureTime = flight.GetDepartureTime();
	cout << "S" << flight.GetNumber() << " " << flight.GetDeparturePoint()
		<< "-" << flight.GetDestinationPoint() << " Departure ";
	WriteTime(departureTime);
	cout << " Arrival ";
	WriteTime(arrivalTime);
	cout << "\n";
}

void WriteTime(TimeClass time)
{
	cout << time.GetMonth() << "."
		<< time.GetDay() << " "
		<< time.GetHour()
		<< ":" << time.GetMinutes();
}

void DemoFlightWithTimeClass()
{
	srand(time(nullptr));
	FlightClass* array = new FlightClass[5];
	for (int i = 0; i < 5; i++)
	{
		int randValue = rand() % 1000;
		TimeClass arrivalTime(1998, 10, 25, 10, 15);
		TimeClass departureTime(1998, 10, 24, 15, 23);
		string deparutePoint = "Tomsk";
		string destinationPoint = "Moscow";
		FlightClass flight
		(randValue, deparutePoint, destinationPoint, departureTime, arrivalTime);
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
	string name = "Come Together";
	songs[0] = SongClass(name, 4, Rock);
	name = "Octopus's Garden";
	songs[1] = SongClass(name, 3, Pop);
	name = "Something";
	songs[2] = SongClass(name, 3, Folk);
	name = "Oh! Darling";
	songs[3] = SongClass(name, 3, Rock);
	for (int i = 0; i < 3; i++)
	{
		name = "Abbey Road";
		albums[i] = AlbumClass(name, 1969, songs, 4);
	}
	name = "The Beatles";
	string information =
		"British rock-group from Liverpool, founded in 1960";
	BandClass band = BandClass(name, information, albums, 3);
	name = "The Beatles";
	SongClass* resultSong = band.FindSong(name);
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
	name = "Something";
	SongClass songToFind = SongClass(name, 3, Folk);
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