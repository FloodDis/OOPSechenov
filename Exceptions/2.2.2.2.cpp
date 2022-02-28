#include "2.2.2.2.h"

void DemoStructures2()
{
	PhoneContact testPhoneContact;
	Song testSong;
	Subject testSubject;

	testPhoneContact.Name = "Vlad";
	testPhoneContact.Number = "+81234632910";
	testPhoneContact.Status = "Job";

	testSong.Duration = 4;
	testSong.PlaylistName = "Chill";
	testSong.SongName = "Home";

	testSubject.Hours = 45;
	testSubject.Name = "Math";
	testSubject.Score = 4;

	cout << "Phone contact:\n\n"
		<< "Name: " << testPhoneContact.Name << "\n"
		<< "Number: " << testPhoneContact.Number << "\n"
		<< "Status: " << testPhoneContact.Status << "\n\n";
	cout << "Song:\n\n"
		<< "Duration: " << testSong.Duration << "\n"
		<< "Playlist name: " << testSong.PlaylistName << "\n"
		<< "Song name: " << testSong.SongName << "\n\n";
	cout << "Subject:\n\n"
		<< "Hours: " << testSubject.Hours << "\n"
		<< "Name: " << testSubject.Name << "\n"
		<< "Score: " << testSubject.Score << "\n\n";
}