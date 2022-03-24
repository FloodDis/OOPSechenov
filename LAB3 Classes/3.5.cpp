#include "3.5.h"

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