#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<cstdlib>
#include<stdio.h>
using namespace std;

	int x, y;
	char wybor;
	

	int main()

	{
			
		cout << "Budzisz sie w zamknietym pomieszczeniu na lozku, twoja glowa bardzo cie boli, a obraz poczatkowo wydaje"
			"sie byc jakby przez mgle. Chwila lezenia pomaga w koncu dojsc do siebie. Pokoj nie jest duzy dostrzegasz jedynie "
			"biurko, szafe, obraz oraz drzwi" << endl << endl;
		cout << "Drzwi <1>" << endl;
		cout << "Stary Obraz <2>" << endl;
		cout << "Biurko <3>" << endl;
		cout << "Szafa <4>" << endl;
		cout << "Wyjscie <Q>" << endl;
		
		for(;;)
		
		{
		
				cout<<endl<<endl;
				cout << "Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;

		wybor = getch();
			
		switch (wybor)
		{
			case '1':
				cout << "> Podchodzisz do drzwi";
			break;
				case '2':
					cout << "> Podchodzisz do starego obrazu";
			break;	
					case '3':
						cout << "> Podchodzisz do biurka";
			break;
						case '4':
							cout << "> Podchodzisz do szafy";
			break;
						case 'q':
							cout << "> Wychodzisz z gry";
							exit(0);
			break;
		    default: cout<< "nie ma takiej opcji";
		}
}

		return (0);
}
