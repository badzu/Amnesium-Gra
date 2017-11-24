#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<cstdlib>
#include<stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

	int skey, rkey, oknf;
	char wybor;
	

	int main()

	{
		MENU:
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
		cout << "                     |   Nacisnij Q, aby wyjsc z gry  |"<<endl;
		
		
		wybor = getch();
			
		switch (wybor)
		{
			case 's':
			break;	
				case 'q':
					exit(0);
			break;
		    default: cout<< "nie ma takiej opcji";
		    system("cls");
		    goto MENU;
		    
		}
		// LVL 1 //
		cout <<endl<< ">------------------------------{ AMNESIUM LVL1 }-------------------------------<"<<endl<<endl;	
		cout << " Budzisz sie w zamknietym pomieszczeniu na lozku, twoja glowa bardzo cie boli,\n a obraz poczatkowo wydaje"
			" sie byc jakby przez mgle. Chwila lezenia pomaga \n w koncu dojsc do siebie. Pokoj nie jest duzy \n dostrzegasz jedynie "
			"biurko, szafe, obraz oraz drzwi";
		
			
		P1:													// POKOJ 1
		cout<<endl<<endl;
		cout << " Drzwi <1>" << endl;
		cout << " Stary Obraz <2>" << endl;
		cout << " Biurko <3>" << endl;
		cout << " Szafa <4>" <<endl;
		cout << " Instrukcja gry <I>";
		
				cout<<endl<<endl;
				cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;
		wybor = getch();
		switch (wybor)
		{
			case '1':
				cout << " > Podchodzisz do drzwi"; // PRZYPADEK DRZWI //
				
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
					if (skey==1)
				{
				cout << " > Uzyto klucza drzwi sie otwieraja, czy chcesz przejsc do LVL2 (Y/N) ?";
				
				KA:
				
				cout<<endl<<endl;
				
				wybor = getch();
				switch (wybor)			
			{	
							
				case 'y':
				cout << " > Idziesz do LVL2";
				goto LVL2;
				break;
				
				case 'n':
				cout<< " > Odchodzisz od drzwi  ";
				goto P1;
				break;
					
				
				default: cout<< " ! Nie ma takiej opcji !";
				goto KA;	
			}		
				
				} else
				cout<< " > Nie mozna otworzyc drzwi";
				goto DR;
				break;
				
				case 'd':
				cout << " > Nie ma tutaj nic do zebrania";
				goto DR;
				break;
				
				case 'w':
				cout << " > Odchodzisz od przedmiotu";
				goto P1;
				break;	
				
				default: cout<< " ! Nie ma takiej opcji !";
				goto DR;	
			}		
				
		
				case '2':
				cout << " > Podchodzisz do starego obrazu"; // PRZYPADEK OBRAZU //
					
				OB:
					
				cout<<endl<<endl;
						
				wybor = getch();
				switch (wybor)
			{
				case 'a':
				cout << " > Obraz wydaje sie tak jakby dziwnie na ciebie spogladac, ale ciezko powiedziec czy to tylko"
				" wymysl twojej wyobrazni czy rzeczywiscie tak jest";
				goto OB;
				break;
				
				case 's':
				cout<< " > Dotykasz ramki obrazu z ktorego wypada cos na podloge zawinietego w zgnity material";
				goto OB;
				break;
				
				case 'd':
				cout << " > Znajdujesz zardzewialy klucz";
				rkey = 1;
				goto OB;		
				break;
				
				case 'w':
				cout << " > Odchodzisz od przedmiotu";
				goto P1;
				break;	
				
				default: cout<< " ! Nie ma takiej opcji !";
				goto OB;
			}
			
					case '3':
						cout << " > Podchodzisz do biurka"; // PRZYPADEK BIURKA //
						
				BI:	
				
				cout<<endl<<endl;
						
				wybor = getch();
				switch (wybor)
			{
				case 'a':
					
				cout << " > Cale pognite i paskudne biurko, pasuje do tego mrocznego wystroju.";
				goto BI;
				break;
				
				case 's':
												
				cout<< " > Przeszukujac biurko odnajdujesz mnostwo kurzu oraz klucz";
				goto BI;
				break;
				
				case 'd':
				cout << " > Wzieto srebrny klucz";
				skey = 1;
				goto BI;
				break;
				
				case 'w':
				cout << "> Odchodzisz od przedmiotu";
				goto P1;
				break;	
				
				default: cout<< " ! Nie ma takiej opcji !";	
				goto BI;
			}
		
						case '4':
							cout << "> Podchodzisz do szafy"; // PRZYPADEK SZAFY //
							
				SZ:
				
				cout<<endl<<endl;
							
				wybor = getch();
				switch (wybor)
			{
				case 'a':
					
				cout << " Szafa ma wyrwane drzwi i jest w tragicznym stanie."
				"Okazuje sie jednak ze w podlodze ukryty jest schowek zamkniety jakims kluczem";
				goto SZ;
				break;
				
				case 's':
				if (rkey==1)
				{
				cout << " > Uzyto klucza, schowek sie otwiera i znajdujesz na jego dnie cos ostrego";
				} else
				cout<< " > Nie mozna otworzyc schowka";
				goto SZ;
				break;
				
				case 'd':
				cout << " > Wzieto stary pordzewialy noz";
				oknf = 1;
				goto SZ;
				break;
				
			 	case 'w':
				cout << "> Odchodzisz od przedmiotu";
				goto P1;
				break;
				
				default: cout<< " ! Nie ma takiej opcji !";
				goto SZ;		
			}
		
			
		case 'i':
					cout << endl << endl <<endl;
					cout << "                                _______ "<<endl;
					cout << "                               |       |"<<endl;
					cout << "                               |   W   | --- Powrot"<<endl;
					cout << "                               |_______|"<<endl;
					
					cout << "                        _______   _______   _______ "<<endl;
					cout << "                       |       | |       | |       |"<<endl;
					cout << "                       |   A   | |   S   | |   D   |"<<endl;
					cout << "                       |_______| |_______| |_______|"<<endl;
					cout << "                         /           |           \\" <<endl;
					cout << "                        /  Uzyj/przeszukaj rzecz  \\" <<endl;
					cout << "                       /                         Wez przedmiot " << endl;
					cout << "      Inspekcja przedmiotu" << endl << endl << endl << endl;
					goto P1;		
			break;	
			
		    default: cout<< "! Nie ma takiej opcji !";
		    goto P1;
		}



									// LVL 2 //
									
		LVL2: cout <<" - Tu bedzie LVL2";
	
		
			
		return (0);
	}
