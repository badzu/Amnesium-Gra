#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<cstdlib>
#include<stdio.h>
#include<fstream>
using namespace std;

	int key;
	char wybor;
	

	int main()

	{	
		cout << "  |              __  __   _   _   ______    _____   _____   _    _   __  __   |" << endl;
		cout << "  |      /\\     |  \\/  | | \\ | | |  ____|  / ____| |_   _| | |  | | |  \\/  |  |" << endl;
		cout << "  |     /  \\    | \\  / | |  \\| | | |__    | (___     | |   | |  | | | \\  / |  |" << endl;
		cout << "  |    / /\\ \\   | |\\/| | | . ` | |  __|    \\___ \\    | |   | |  | | | |\\/| |  |" << endl;
		cout << "  |   / ____ \\  | |  | | | |\\  | | |____   ____) |  _| |_  | |__| | | |  | |  |" << endl;
		cout << "  |  /_/    \\_\\ |_|  |_| |_| \\_| |______| |_____/  |_____|  \\____/  |_|  |_|  |" << endl;
		cout << "  |___________________________________________________________________________|"<<endl;
		cout << "   \\                                                                         /"<<endl;
		cout << "    \\             Bartlomiej Ciolkosz All Rights Reserverd 2017.            /"<<endl;
		cout << "     \\_____________________________________________________________________/"<<endl<<endl<<endl;
		cout << "                     |   Nacisnij S, aby zaczac gre   |"<<endl;
		cout << "                     |   Nacisnij Q, aby wyjsc z gry  |"<<endl<<endl;
		
		
		wybor = getch();
			
		switch (wybor)
		{
			case 's':
			break;
				case 'q':
					exit(0);
			break;
		    default: cout<< "nie ma takiej opcji";
		}
			
		cout << "Budzisz sie w zamknietym pomieszczeniu na lozku, twoja glowa bardzo cie boli, a obraz poczatkowo wydaje"
			"sie byc jakby przez mgle. Chwila lezenia pomaga w koncu dojsc do siebie. Pokoj nie jest duzy dostrzegasz jedynie "
			"biurko, szafe, obraz oraz drzwi";
			
		P1:	
		cout<<endl<<endl;	
		cout << "Drzwi <1>" << endl;
		cout << "Stary Obraz <2>" << endl;
		cout << "Biurko <3>" << endl;
		cout << "Szafa <4>" <<endl;
				
				cout<<endl<<endl;
				cout << "Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;

		wybor = getch();
			
		switch (wybor)
		{
			case '1':
				cout << "> Podchodzisz do drzwi"; // PRZYPADEK DRZWI//
				
				DR:
				
				cout<<endl<<endl;
				
				wybor = getch();
				switch (wybor)			
		{	
							
				case 'a':
					
				cout << " > Bardzo stare drzwi wydaja sie byc zamkniete";
				goto DR;
				break;
				
				case 's':
					if (key==1)
				{
				cout << " > Uzyto klucza drzwi sie otwieraja";
				} else
				cout<< " > Nie mozna otworzyc drzwi";
				goto DR;
				break;
				
				case 'd':
				cout << " > Nie ma tutaj nic do zebrania";
				goto DR;
				break;
				
				case 'w':
				cout << "> Odchodzisz od przedmiotu";
				goto P1;
				break;	
					
		}		
				
			break;
				case '2':
					cout << "> Podchodzisz do starego obrazu"; // PRZYPADEK OBRAZU //
					
					OB:
					
							wybor = getch();
				switch (wybor)
		{
				case 'a':
					
				cout << " Bardzo stare drzwi wydaja sie byc zamkniete";
				goto OB;
				break;
				
				case 's':
					if (key==1)
				{
				cout << " > Uzyto klucza drzwi sie otwieraja";
				} else
				cout<< " > Nie mozna otworzyc drzwi";
				goto OB;
				break;
				
				case 'd':
				cout << " > Nie ma tutaj nic do zebrania";
				goto OB;
				break;
				
				case 'w':
				cout << "> Odchodzisz od przedmiotu";
				goto P1;
				break;		
		}
			break;	
					case '3':
						cout << "> Podchodzisz do biurka"; // PRZYPADEK BIURKA //
						
				BI:	
						
								wybor = getch();
				switch (wybor)
		{
				case 'a':
					
				cout << " > Przeszukujac biurko odnajdujesz mnostwo kurzu oraz klucz";
				goto BI;
				break;
				
				case 's':
								
				cout<< " > Przedmiotu biurko nie da sie uzyc";
				goto BI;
				break;
				
				case 'd':
				cout << " > Wzieto srebrny klucz";
				key = 1;
				goto BI;
				break;
				
				case 'w':
				cout << "> Odchodzisz od przedmiotu";
				goto P1;
				break;		
		}
			break;
						case '4':
							cout << "> Podchodzisz do szafy"; // PRZYPADEK SZAFY //
							
									wybor = getch();
				switch (wybor)
		{
				case 'a':
					
				cout << " Bardzo stare drzwi wydaja sie byc zamkniete";
				break;
				
				case 's':
					if (key==1)
				{
				cout << " > Uzyto klucza drzwi sie otwieraja";
				} else
				cout<< " > Nie mozna otworzyc drzwi";
				break;
				
				case 'd':
				cout << " > Nie ma tutaj nic do zebrania";
				break;
				
				case 'w':
				cout << "> Odchodzisz od przedmiotu";
				goto P1;
				break;		
		}
			break;
		    default: cout<< "nie ma takiej opcji";
		}


		return (0);
	}
