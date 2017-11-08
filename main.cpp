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
		
		cout << "  |              __  __   _   _   ______    _____   _____   _    _   __  __   |" << endl;
		cout << "  |      /\     |  \/  | | \ | | |  ____|  / ____| |_   _| | |  | | |  \/  |  |" << endl;
		cout << "  |     /  \    | \  / | |  \| | | |__    | (___     | |   | |  | | | \  / |  |" << endl;
		cout << "  |    / /\ \   | |\/| | | . ` | |  __|    \___ \    | |   | |  | | | |\/| |  |" << endl;
		cout << "  |   / ____ \  | |  | | | |\  | | |____   ____) |  _| |_  | |__| | | |  | |  |" << endl;
		cout << "  |  /_/    \_\ |_|  |_| |_| \_| |______| |_____/  |_____|  \____/  |_|  |_|  |" << endl;
		cout << "  |___________________________________________________________________________|"<<endl;
		cout << "   \\                                                                         /"<<endl;
		cout << "    \\             Bartlomiej Ciolkosz All Rights Reserverd 2017.            /"<<endl;
		cout << "     \\_____________________________________________________________________/"<<endl<<endl<<endl;
		cout << "                     |   Nacisnij S, aby zaczac gre   |"<<endl;
		cout << "                     |   Nacisnij L, aby wczytac gre  |"<<endl;
		cout << "                     |   Nacisnij Q, aby wyjsc z gry  |"<<endl;
		
		
		wybor = getch();
			
		switch (wybor)
		{
			case 's':
			break;
				case 'l':
					cout << "# proste menu wczytywania gry"<<endl;
			break;	
					case 'q':
						exit(0);
			break;
		    default: cout<< "nie ma takiej opcji";
		}
			
		cout << endl << "Budzisz sie w zamknietym pomieszczeniu na lozku, twoja glowa bardzo cie boli, a obraz poczatkowo wydaje"
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
