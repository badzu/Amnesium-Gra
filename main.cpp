#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<cstdlib>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

	int quit=0, skey, rkey, oknf;
	char wybor;
	

	int main(){
	for(;;)
	{	
		
		// LVL 1 //
		
		cout << endl <<">------------------------------{ AMNESIUM LVL1 }-------------------------------<"<<endl<<endl;	
		cout << " Budzisz sie w zamknietym pomieszczeniu na lozku, twoja glowa bardzo cie boli,\n a obraz poczatkowo wydaje"
			" sie byc jakby przez mgle. Chwila lezenia pomaga \n w koncu dojsc do siebie. Pokoj nie jest duzy \n dostrzegasz jedynie "
			"biurko, szafe, obraz oraz drzwi";
			
		cout<<endl<<endl;	
		cout << " Drzwi <1>" << endl;
		cout << " Stary Obraz <2>" << endl;
		cout << " Biurko <3>" << endl;
		cout << " Szafa <4>" <<endl;
		cout << " Instrukcja gry <I>";
		
				cout<<endl<<endl;
				cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;
		
		wybor=getch();	
		
		switch (wybor)
		{
			case '1':
				cout << " > Podchodzisz do drzwi"; // PRZYPADEK DRZWI 1 //		
				cout<<endl<<endl;
				
				wybor = getch();
				switch (wybor)			
			{	
							
				case 'a':
					
				cout << " > Bardzo stare drzwi wydaja sie byc zamkniete";
				break;
				
				case 's':
					if (skey==1)
				{
				cout << " > Uzyto klucza drzwi sie otwieraja, czy chcesz przejsc do LVL2 (Y/N) ?";
				
				cout<<endl<<endl;
				
				wybor = getch();
				switch (wybor)			
			{	
							
				case 'y':
				cout << " > Idziesz do LVL2";
				break;
				
				case 'n':
				cout<< " > Odchodzisz od drzwi  ";
				break;
					
				
				default: cout<< "";	
			}		
				
				} else
				cout<< " > Nie mozna otworzyc drzwi";
				break;
				
				case 'd':
				cout << " > Nie ma tutaj nic do zebrania";
				break;
				
				case 'w':
				cout << " > Odchodzisz od przedmiotu";
				break;	
				
				default: cout<< "";	
			}		
				
		
					case '2':
						cout << " > Podchodzisz do starego obrazu"; // PRZYPADEK OBRAZU 1 //
						
				cout<<endl;
				switch (wybor)
			{
				case 'a':
				cout << " > Obraz wydaje sie tak jakby dziwnie na ciebie spogladac, ale ciezko powiedziec czy to tylko"
				" wymysl twojej wyobrazni czy rzeczywiscie tak jest";
				break;
				
				case 's':
				cout<< " > Dotykasz ramki obrazu z ktorego wypada cos na podloge zawinietego w zgnity material";
				break;
				
				case 'd':
				cout << " > Znajdujesz zardzewialy klucz";
				rkey = 1;
				break;
				
				case 'w':
				cout << " > Odchodzisz od przedmiotu";
				system ("cls");
				break;		
			}
			
					case '3':
						cout << " > Podchodzisz do biurka"; // PRZYPADEK BIURKA 1 //
					
				cout<<endl<<endl;
						
				wybor = getch();
				switch (wybor)
			{
				case 'a':
					
				cout << " > Cale pognite i paskudne biurko, pasuje do tego mrocznego wystroju.";
				break;
				
				case 's':
												
				cout<< " > Przeszukujac biurko odnajdujesz mnostwo kurzu oraz klucz";
				break;
				
				case 'd':
				cout << " > Wzieto srebrny klucz";
				skey = 1;
				break;
				
				case 'w':
				cout << "> Odchodzisz od przedmiotu";
				break;	
				
				default: cout<< "";	
				}	
		
						case '4':
							cout << "> Podchodzisz do szafy"; // PRZYPADEK SZAFY 1 //
							
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
				
				default: cout<< "";	
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
			break;	
			
		    default : break;
		
		}
		system("cls");
		continue;
		}
	
		return (0);
	}
