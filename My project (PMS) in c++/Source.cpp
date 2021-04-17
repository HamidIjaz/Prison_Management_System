#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<windows.h>
#include<iomanip>

using namespace std;

void login();
void AddRecord();
int SearchRecord();
void EditRecord();
void ViewRecord();
void DeleteRecord();
void ChangeCell();
void ExitProgram();

void gotoxy(short x, short y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
// Array sizes
const int NameSize = 50, Size = 50, AddSize = 50;

// Declare a structure for the record.
struct Info
{
	char name[NameSize];
	int age;
	char gender[Size];
	char PrisonerNum[50];
	char address[AddSize];
	char BarNum[Size];
	char crime[Size];
	char comingD[Size];
	char releaseD[Size];

};

void Islam()
{
	{
		system("color 2F");
		gotoxy(6, 2), cout << "                         ²²²                    ²²² ²²²" << endl;
		gotoxy(6, 3), cout << "                         ²²²°              ²²²  ²²²°²²²°" << endl;
		gotoxy(6, 4), cout << "            ²²²²²²²²     ²²²° ²²²          ²²²° ²²²°²²²°         ²²²" << endl;
		gotoxy(6, 5), cout << "²²²     ²²² ²°°°°²²²°    ²²²° ²²²°     ²²² ²²²° ²²²°²²²°         ²²²°" << endl;
		gotoxy(6, 6), cout << "²²² ²²  ²²²  °   ²²²°    ²²²° ²²²° ²²²²²²²°²²²° ²²²°²²²°     ²²² ²²²°" << endl;
		gotoxy(6, 7), cout << "²²²  °° ²²²²²²²²²²²²°²²²²²²²° ²²²° ²² °²²²°²²²° ²²²°²²²°     ²²²°²²²°" << endl;
		gotoxy(6, 8), cout << "²²²     ²²²°²²²°°°°°°²²²°°°°° ²²²° ²²²²²²²°²²²° ²²²°²²²° ²²² ²²²°²²²°" << endl;
		gotoxy(6, 9), cout << "²²²²²²²²²²²° °°°  ²²²²²²°     ²²²°  °°°°²²²²²²²²²²²° °°° ²²²°²²²°²²²°" << endl;
		gotoxy(6, 10), cout << " °°°°°°°°°°°       °°°°°°      °°°       °°°°°°°°°°° ²²² ²²²°²²²°²²²°" << endl;
		gotoxy(6, 11), cout << "                                                ²²²² ²²²°²²²°²²²°²²²°" << endl;
		gotoxy(6, 12), cout << "                                   ²²²      ²²²²²²²²²²²²²²²²²²²²²²²²°" << endl;
		gotoxy(6, 13), cout << "                                   ²²²°      °°°²²²²°°°°°°°°°°°°°°°°°" << endl;
		gotoxy(6, 14), cout << "                      ²²²²²²²²     ²²²° ²²²      °°°°           ²²" << endl;
		gotoxy(6, 15), cout << "                      ²°°°°²²²°    ²²²° ²²²°                     °°" << endl;
		gotoxy(6, 16), cout << "                  ²²²  °   ²²²°    ²²²° ²²²°" << endl;
		gotoxy(6, 17), cout << "          ²²²²²²²²²²²²²²²²²²²²°²²²²²²²° ²²²°" << endl;
		gotoxy(6, 18), cout << "          ²²²°²²²°°°°°°°°°°°°°°²²²°°°°° ²²²°" << endl;
		gotoxy(6, 19), cout << "          ²²²° °°°  ²² ²²   ²²²²²²°     ²²²°" << endl;
		gotoxy(6, 20), cout << "           °°°       °° °°   °°°°°°      °°°\n\n\n";
		Sleep(500);
		system("color 2E");
		Sleep(500);
		system("color 2D");
		Sleep(500);
		system("color 2C");
		cin.get();
	}
}

void intro()
{
	for (int i = 15; i <= 80; i++)
	{
		Sleep(10);
		gotoxy(i, 3);
		cout << "->";
	}

	cout << "\n\n\n\t\t\t WELLCOME TO OUR PRISON MANAGEMENT SYSTEM";

	for (int i = 15; i <= 80; i++)
	{
		Sleep(10);
		gotoxy(i, 9);
		cout << "->";
	}
	cin.get();
}

void main()
{
	Islam();
	system("cls");
	system("color F1");
	login();
	system("cls");
	system("color 0f");
	char num;
again:
	cout << "";
	cout << "___________________________________________________________";
	cout << ("\n\n\t\tWELLCOME TO MAIN MENU:\n");
	cout << "___________________________________________________________";
	cout << ("\n\n\tTO ADD RECORD OF PRISONERS PRESS\t\t[1]");
	cout << ("\n\tTO SEARCH RECORD OF ANY PRISONER PRESS\t\t[2]");
	cout << ("\n\tTO EDIT RECORD OF ANY PRISONER PRESS\t\t[3]");
	cout << ("\n\tTO VIEW RECORD OF ANY PRISONER PRESS\t\t[4]");
	cout << ("\n\tTO DELETE RECORD OF ANY PRISONER PRESS\t\t[5]");
	cout << ("\n\tTO CHANGE CELL NO. OF ANY PRISONER PRESS\t[6]");
	cout << ("\n\tTO EXIT PRESS THE PROGRAM PRESS\t\t\t[7]\n");
	cout << "___________________________________________________________";
	cout << ("\n\n\tENTER YOUR CHOICE:");
	cin >> num;
	switch (num)
	{
	case '1':
		AddRecord();
		break;
	case '2':
		SearchRecord();
		break;
	case '3':
		EditRecord();
		break;

	case '4':
		ViewRecord();
		break;

	case '5':
		DeleteRecord();
		break;

	case '6':
		ChangeCell();
		break;
	case '7':
		ExitProgram();
		break;

	default:
		cout << ("\nYOU ENTERED WRONG CHOICE.");
		cout << ("\nPress any num from given options(1 to 7)");
		break;
	}
	cout << endl;
	system("pause");
	system("cls");

	goto again;
}void login()
{
	char pass[32];	//to store password.
	string user;
	string password = "pass";
	string admin = "user";
	cout << "You will be given access to program if you enter correct user password\n" << endl;
	cout << "\t\t....::::====================(  LOGIN  )=======================::::...." << endl;
	cout << "User Name: ";
	cin >> user;

	cout << "Enter password: ";

	int i = 0;
	char a;
	for (i = 0;;)
	{
		a = _getch();//stores char typed in a
		if ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z') || (a >= '0'&&a <= '9'))
		{
			pass[i] = a;//stores a in pass
			++i;
			cout << "*";
		}
		if (a == '\r')//if enter is pressed
		{
			pass[i] = '\0';//null means end of string.
			break;//break the loop
		}
	}

	cout << endl;

	if (user == admin && pass == password)
	{
		system("cls");
		system("color F0");
		intro();
		cin.get();
	}
	else
	{
		for (int k = 3; k > 0; k--)
		{

			cout << "You have " << k << " more tries\n";
			cout << "You user name or password is wrong\nEnter again\n";
			cout << "User: ";
			cin >> user;

			cout << "Enter password: ";

			int i = 0;
			char a;
			for (i = 0;;)
			{
				a = _getch();//stores char typed in a
				if ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z') || (a >= '0'&&a <= '9'))
				{
					pass[i] = a;//stores a in pass
					++i;
					cout << "*";
				}
				if (a == '\r')//if enter is pressed
				{
					pass[i] = '\0';//null means end of string.
					break;//break the loop
				}
			}

			cout << endl;

			if (user == admin && pass == password)
			{
				system("cls");
				system("color F0");
				intro();
				cin.get();
				break;
			}
			if (user != admin || pass != password)
			{
				if (k == 1)
				{
					system("cls");
					gotoxy(0, 5), cout << "You are not allowed to access the program\n";
					system("color 4f");

					exit(0);
				}
			}
		}
	}
}

void AddRecord()
{
	Info prisoner; // To hold info about a person
	char again; // To hold Y or N
	char prisoner_num[Size];
	// Open a file for binary output.
	int age;
	fstream people;
	ifstream people1;
	cin.ignore();
	do
	{
		people.open("people.txt", ios::out | ios::in | ios::app | ios::binary);

		// Get data about a person.
		int check;
		int check1;
		cout << "Enter the following data about a person:\n";
		cout << "Name: ";
		cin.getline(prisoner.name, NameSize);
		do
		{

			cout << "Age: ";
			cin >> age;
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(1000, '\n');
				check = 1;
				cout << "Entered age is invalid\nEnter again\n";
			}
			else
			{
				prisoner.age = age;
				break;
			}

		} while (check==1);
	
		cin.ignore();
		cout << "Gender: ";
		cin.getline(prisoner.gender, Size);
	again3:
		cout << "Prisoner number: ";
		cin.getline(prisoner_num, Size);
		people1.open("people.txt");

		while (people1.peek() != -1)
		{
			Info prisoner2;
			people1.read(reinterpret_cast<char *>(&prisoner2), sizeof(prisoner2));
			if (strcmp(prisoner_num, prisoner2.PrisonerNum) == 0)
			{
				cout << "Entered prisoner number is already in use\nEnter again\n";
				people1.close();

				goto again3;

			}

		}
		strcpy_s(prisoner.PrisonerNum, prisoner_num);

		people1.close();

		cout << "Barr number: ";
		cin.getline(prisoner.BarNum, Size);


		cout << "Address: ";
		cin.getline(prisoner.address, AddSize);
		cout << "Crime Committed: ";
		cin.getline(prisoner.crime, AddSize);
		cout << "Imprisoned Date: ";
		cin.getline(prisoner.comingD, AddSize);
		cout << "Released date: ";
		cin.getline(prisoner.releaseD, AddSize);

		// Write the contents of the person structure to the file.
		people.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
		people.close();

		// Determine whether the user wants to write another record.
		cout << "To add another record Press [y]\n Otherwise";
		cout << " Press any character";
		cin >> again;
		cin.ignore();
		// Skip over the remaining newline.
	} while (again == 'Y' || again == 'y');
}
int SearchRecord()
{

	ifstream data;
	Info prisoner;
	char Prisoner[50];
	cout << "Enter Prisoner number : ";
	cin >> Prisoner;
	int count = 0;
	data.open("people.txt");
	if (!data)
	{
		cout << "Error occur opening file";
	}
	else
	{
		bool isFound = false;
		while (!data.eof())
		{
			data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			if (strcmp(Prisoner, prisoner.PrisonerNum) == 0)
			{
				cout << "Name: " << prisoner.name << endl;
				cout << "Age: " << prisoner.age << endl;
				cout << "Prisoner number: " << prisoner.PrisonerNum << endl;
				cout << "Bar number: " << prisoner.BarNum << endl;
				cout << "gender: " << prisoner.gender << endl;
				cout << "Address: " << prisoner.address << endl;
				cout << "Crime Committed: " << prisoner.crime << endl;
				cout << "Imprisoned Date: " << prisoner.comingD << endl;
				cout << "Released Date: " << prisoner.releaseD << endl;
				isFound = true;
				break;
			}
			count++;
		}

		if (isFound == false)
		{
			cout << "Prisoner number is not found \n";
			count = -1;
		}
	}
	return count;

}
void ViewRecord()
{
	Info prisoner; // To hold info about a person
	char again; // To hold Y or N
	fstream people; // File stream object

					// Open the file for input in binary mode.
	people.open("people.txt", ios::in | ios::binary);

	// Test for errors.
	if (!people)
	{
		cout << "Error opening file. Program aborting.\n";
	}
	else
	{
		cout << "Here are the people in the file:\n\n";
		// Read the first record from the file.
		people.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));

		// While not at the end of the file, display the records.
		while (!people.eof())
		{
			// Display the record.
			cout << "Name: ";
			cout << prisoner.name << endl;
			cout << "Age: ";
			cout << prisoner.age << endl;
			cout << "Gender: ";
			cout << prisoner.gender << endl;
			cout << "Prisoner number no: ";
			cout << prisoner.PrisonerNum << endl;
			cout << "Barr number no: ";
			cout << prisoner.BarNum << endl;
			cout << "Address: ";
			cout << prisoner.address << endl;
			cout << "Crime Committed: ";
			cout << prisoner.crime << endl;
			cout << "Imprisoned Date: ";
			cout << prisoner.comingD << endl;
			cout << "Released date: ";
			cout << prisoner.releaseD << endl;
			cout << endl;
			people.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
		}
		cout << "That's all the data in the file!\n";
	}
	people.close();
}
void EditRecord()
{
	Info prisoner;
	fstream data;
	int age,check;
	data.open("people.txt", ios::in | ios::out | ios::binary);
	int recNumber = SearchRecord();
	if (recNumber != -1)
	{
		char number;
		cout << left << setw(25) << "what do you want to edit" << endl;
		cout << setw(25) << "edit name " << "\t[1]" << endl;
		cout << setw(25) << "edit age " << "\t[2]" << endl;
		cout << setw(25) << "edit address " << "\t[3]" << endl;
		cout << setw(25) << "edit gender " << "\t[4]" << endl;
		cout << setw(25) << "edit prisoner number" << "\t[5]" << endl;
		cout << setw(25) << "edit crime committed" << "\t[6]" << endl;
		cout << setw(25) << "edit imprisoned date" << "\t[7]" << endl;
		cout << setw(25) << "edit releasing date" << "\t[8]" << endl;
		cout << setw(25) << "edit whole data " << "\t[9]" << endl;
		cin >> number;
		switch (number)
		{
		case '1':
			data.seekg(recNumber * sizeof(prisoner), ios::beg);
			data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			cin.ignore();
			cout << "Enter new data of the prisoner:-\n";
			cout << "Name: ";
			cin.getline(prisoner.name, Size);

			data.seekp(recNumber * sizeof(prisoner), ios::beg);
			// Write the new record over the current record.
			data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			data.close();
			break;

		case '2':
			data.seekg(recNumber * sizeof(prisoner), ios::beg);
			data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			cin.ignore();
			cout << "Enter new data of the prisoner:-\n";
			do
			{

				cout << "Age: ";
				cin >> age;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1000, '\n');
					check = 1;
					cout << "Entered age is invalid\nEnter again\n";
				}
				else
				{
					prisoner.age = age;
					break;
				}

			} while (check == 1);

			data.seekp(recNumber * sizeof(prisoner), ios::beg);
			// Write the new record over the current record.
			data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			data.close();

			break;
		case '3':
			data.seekg(recNumber * sizeof(prisoner), ios::beg);
			data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			cin.ignore();
			cout << "Enter new data of the prisoner:-\n";
			cout << "Address: ";
			cin.getline(prisoner.address, Size);
			data.seekp(recNumber * sizeof(prisoner), ios::beg);
			// Write the new record over the current record.
			data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			data.close();

			break;

		case '4':
			data.seekg(recNumber * sizeof(prisoner), ios::beg);
			data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			cin.ignore();
			cout << "Enter new data of the prisoner:-\n";
			cout << "Gender: ";
			cin.getline(prisoner.gender, Size);

			data.seekp(recNumber * sizeof(prisoner), ios::beg);
			// Write the new record over the current record.
			data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			data.close();

			break;

		case '5':
			data.seekg(recNumber * sizeof(prisoner), ios::beg);
			data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			cin.ignore();
			cout << "Enter new data of the prisoner:-\n";
			cout << "Prisoner Number: ";
			cin.getline(prisoner.PrisonerNum, Size);


			data.seekp(recNumber * sizeof(prisoner), ios::beg);
			// Write the new record over the current record.
			data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			data.close();

			break;

		case '6':
			data.seekg(recNumber * sizeof(prisoner), ios::beg);
			data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			cin.ignore();
			cout << "Enter new data of the prisoner:-\n";
			cout << "Crime Committed: ";
			cin.getline(prisoner.crime, Size);

			data.seekp(recNumber * sizeof(prisoner), ios::beg);
			// Write the new record over the current record.
			data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			data.close();

			break;

		case '7':
			data.seekg(recNumber * sizeof(prisoner), ios::beg);
			data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			cin.ignore();
			cout << "Enter new data of the prisoner:-\n";
			cout << "imprisoned date: ";
			cin.getline(prisoner.comingD, Size);

			data.seekp(recNumber * sizeof(prisoner), ios::beg);
			// Write the new record over the current record.
			data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			data.close();

			break;

		case '8':
			data.seekg(recNumber * sizeof(prisoner), ios::beg);
			data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			cin.ignore();
			cout << "Enter new data of the prisoner:-\n";
			cout << "Releasing date: ";
			cin.getline(prisoner.releaseD, Size);

			data.seekp(recNumber * sizeof(prisoner), ios::beg);
			// Write the new record over the current record.
			data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			data.close();

			break;
		case '9':
			cout << "Enter new data of the prisoner:-\n";
			cin.ignore();
			cout << "Name: ";
			cin.getline(prisoner.name, NameSize);
			
			do
			{

				cout << "Age: ";
				cin >> age;
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1000, '\n');
					check = 1;
					cout << "Entered age is invalid\nEnter again\n";
				}
				else
				{
					prisoner.age = age;
					break;
				}

			} while (check == 1);

			cin.ignore(); // Skip over the remaining newline.
			cout << "Gender: ";
			cin.getline(prisoner.gender, Size);
			cout << "Prisoner number no: ";
			cin.getline(prisoner.PrisonerNum, Size);
			cout << "Bar number no: ";
			cin.getline(prisoner.BarNum, Size);
			cout << "Address: ";
			cin.getline(prisoner.address, AddSize);
			cout << "Crime Committed: ";
			cin.getline(prisoner.crime, AddSize);
			cout << "Imprisoned Date: ";
			cin.getline(prisoner.comingD, AddSize);
			cout << "Released date: ";
			cin.getline(prisoner.releaseD, AddSize);
			data.seekp(recNumber * sizeof(prisoner), ios::beg);
			// Write the new record over the current record.
			data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
			data.close();
			break;
		default:
			cout << ("\nYOU ENTERED WRONG CHOICE.");
			cout << ("\nPress any num from given options(1 to 9)");
			break;
		}
	}

}
void DeleteRecord()
{
	Info prisoner;
	char Prisoner[50];
	cout << "Prisoner number no of prisoner whose record you want to delete?";
	cin >> Prisoner;
	ofstream fout("temp.txt", ios::binary);
	ifstream fin("people.txt", ios::binary);

	while (fin.peek() != -1)
	{
		fin.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
		if (strcmp(prisoner.PrisonerNum, Prisoner) != 0)
		{
			fout.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
		}
	}
	fin.close();
	fout.close();
	remove("people.txt");
	rename("temp.txt", "people.txt");
	cout << "Record of prisoner is deleted\n";
}

void ChangeCell()
{

	Info prisoner;
	fstream data;
	data.open("people.txt", ios::in | ios::out | ios::binary);
	int recNumber = SearchRecord();
	if (recNumber != -1)
	{
		data.seekg(recNumber * sizeof(prisoner), ios::beg);
		data.read(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
		cin.ignore();
		cout << "Enter new data of the prisoner:-\n";
		cout << "Bar number : ";
		cin.getline(prisoner.BarNum, Size);

		data.seekp(recNumber * sizeof(prisoner), ios::beg);
		// Write the new record over the current record.
		data.write(reinterpret_cast<char *>(&prisoner), sizeof(prisoner));
		data.close();
		cout << "Bar number has been changed\n";
	}

}

void ExitProgram()
{
	system("cls");
	cout << ("\n\n\t\tTHANK YOU , hope you are satisfied by our program \n");
	exit(0);
}