#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<cstdlib>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

	int skey, rkey, oknf, bear;
	char wybor, a,b,c;


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
		cout << "                     |   Nacisnij L, aby wczytac gre  |"<<endl;
		cout << "                     |   Nacisnij Q, aby wyjsc z gry  |"<<endl;
		cout << "                     ----------------------------------"<<endl;


		wybor = getch();

		switch (wybor)
		{
			case 's':
			system("cls");
			goto L1;
			break;
				case 'l':
					cout << "# proste menu wczytywania gry";
			break;
					case 'q':
						exit(0);
			break;

							getchar();
		    default: cout<< "nie ma takiej opcji";
}

    L1:

        Sleep (100); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		Sleep (100); cout << "+     _     __  __   _  _   ___   ___   ___   _   _   __  __      /------------+" << endl;
		Sleep (100); cout << "+    /_\\   |  \\/  | | \\| | | __| / __| |_ _| | | | | |  \\/  |    /-------------+" << endl;
		Sleep (100); cout << "+   / _ \\  | |\\/| | | .` | | _|  \\__ \\  | |  | |_| | | |\\/| |   /--------------+" << endl;
		Sleep (100); cout << "+  /_/ \\_\\ |_|  |_| |_|\\_| |___| |___/ |___|  \\___/  |_|  |_|  /---------------+" << endl;
		Sleep (100); cout << "+                                                             /----------------+" << endl;
		Sleep (100); cout << "+------------------------------------------------------------------------------+" << endl;
		Sleep (100); cout << "+         ___ _  _   _   ___ _____ ___ ___      _           /------------------+" << endl;
		Sleep (100); cout << "+        / __| || | /_\\ | _ \\_   _| __| _ \\    / |         /-------------------+" << endl;
		Sleep (100); cout << "+       | (__| __ |/ _ \\|  _/ | | | _||   /    | |        /--------------------+" << endl;
		Sleep (100); cout << "+        \\___|_||_/_/ \\_\\_|   |_| |___|_|_\\    |_|       /---------------------+" << endl;
		Sleep (100); cout << "+                                                       /----------------------+" << endl;
		Sleep (100); cout << "+------------------------------------------------------------------------------+" << endl;
		Sleep (100); cout << "+                           __.--|~|--.__                               ,,;/;  +" << endl;
		Sleep (100); cout << "+                         /~     | |    ;~\\                          ,;;;/;;'  +" << endl;
		Sleep (100); cout << "+                        /|      | |    ;~ \\                      ,;;;;/;;;'   +" << endl;
		Sleep (100); cout << "+                       |/|      \\_/   ;;;| |                    ,;;;;/;;;;'   +" << endl;
		Sleep (100); cout << "+                       |/ \\          ;;;/  )                 ,;;;;/;;;;;'     +" << endl;
		Sleep (100); cout << "+                   ___ | ______     ;_____ |___....__      ,;;;;/;;;;;'       +"<< endl;
		Sleep (100); cout << "+              ___.-~ \\(| \\  \\.\\ \\__/ /./ /:|)~   ~   \\   ,;;;;/;;;;;'         +" << endl;
		Sleep (100); cout << "+         /~~~    ~\\    |  ~-.     |   .-~: |//  _.-~~--,;;;;/;;;;;'           +" << endl;
		Sleep (100); cout << "+        (.-~___     \\.'|    | /-.__.-\\|::::| //~     ,;;;;/;;;;;'             +" << endl;
		Sleep (100); cout << "+        /      ~~--._ \\|   /          `\\:: |/      ,;;;;/;;;;;'               +" << endl;
		Sleep (100); cout << "+     .-|             ~~|   |  /V----V\\ |:  |     ,;;;;/;;;;;' \\               +" << endl;
		Sleep (100); cout << "+    /                   \\  |  ~`^~~^'~ |  /    ,;;;;/;;;;;'    ;              +" << endl;
		Sleep (100); cout << "+   (        \\             \\|`\\._____./'|/    ,;;;;/;;;;;'      '\\             +" << endl;
		Sleep (100); cout << "+  / \\        \\                             ,;;;;/;;;;;'     /    |            +" << endl;
		Sleep (100); cout << "+ |            |                          ,;;;;/;;;;;'      |     |            +" << endl;
		Sleep (100); cout << "+ |`-._          |                       ,;;;;/;;;;;'              \\           +" << endl;
		Sleep (100); cout << "+ |             /                      ,;;;;/;;;;;'  \\              \\          +" << endl;
		Sleep (100); cout << "+------------------------------------------------------------------------------+" << endl;
		Sleep (100); cout << "+  _______                                                                     +" << endl;
		Sleep (100); cout << "+ |       |                                                                    +" << endl;
		Sleep (100); cout << "+ |   ^   |  --- Chowanie sie przed przeciwnikami, ktorych nie mozesz pokonac  +" << endl;
		Sleep (100); cout << "+ |_______|                                                                    +" << endl;
		Sleep (100); cout << "+------------------------------------------------------------------------------+" << endl;
		Sleep (100); cout << "+     >>> >>> >>>   NACISNIJ DOWOLNY KLAWISZ ABY ZACZAC GRE   <<< <<< <<<      +" << endl;
		Sleep (100); cout << "+                                                                              +" << endl;
		Sleep (100); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

        getch();

        P1:
        bear=1;
        bear=(rand()%2);
        Sleep(250);
        system("cls");

		// LVL 1 //

		cout <<endl<< ">------------------------------{ AMNESIUM POKOJ 1 }-------------------------------<"<<endl<<endl;
		cout << " Budzisz sie w zamknietym pomieszczeniu na lozku, twoja glowa bardzo cie boli,\n a obraz poczatkowo wydaje"
			" sie byc jakby przez mgle. Chwila lezenia pomaga \n w koncu dojsc do siebie. Pokoj nie jest duzy \n dostrzegasz jedynie "
			"biurko, szafe, obraz oraz drzwi";

		cout<<endl<<endl;
		cout << " Spotkasz bear : "	<< bear <<endl;
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
				cout << " > Podchodzisz do drzwi"; // PRZYPADEK DRZWI 1//

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
				cout << " > Podchodzisz do starego obrazu"; // PRZYPADEK OBRAZU 1 //

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
                        if(rkey!=1)
                        {
                        cout << " > Znajdujesz zardzewialy klucz";
                        rkey = 1;
                        }
                        else cout<<" > Wzioles juz zardzewialy klucz";
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
                cout << " > Podchodzisz do biurka"; // PRZYPADEK BIURKA 1 //

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

                        cout<< " > Przeszukujac biurko odnajdujesz ukryty schowek w szufladzie";
                        goto BI;
                        break;

                        case 'd':
                            if(skey!=1)
                            {
                            cout << " > Bierzesz srebrny klucz";
                            skey = 1;
                            }
                            else cout<<" > Wzieto juz srebrny klucz";
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


    	K1:
        bear=1;
        bear=(rand()%2);
        Sleep(250);
        system("cls");
        
        

		cout <<endl<< ">----------------------------{ AMNESIUM KORYTARZ }-----------------------------<"<<endl<<endl;
		cout << " Znajdujesz sie w krotkim korytarzu, na œcianach pe³no zdeformowanej tapety.\n "
		" Parkiet te¿ jest w fatalnym stanie. Wnioskujesz, ¿e dom w którym siê znajdujesz\n"
		"musi byæ opuszczony przez pare dziesiat lat. Twoj wzrok przykuwa jednak czerwona \n"
		"zaschnieta plama krwi, ktora tez swieza nie jest. Cala ta sytuacja przytlacza cie \n"
		"coraz bardziej. Z korytarza mozesz pojsc do czterech pokoi lub klatki schodowej. \n";

		cout<<endl<<endl;
		cout << " Spotkasz bear : "	<< bear <<endl;
		cout << " Pokoj <1>" << endl;
		cout << " Pokoj <2>" << endl;
		cout << " Pokoj <3>" << endl;
		cout << " Pokoj <4>" <<endl;
		cout << " Klatka schodowa <5>" <<endl;
		cout << " Instrukcja gry <I>";

        cout<<endl<<endl;
        cout << " Wybierz miejsce do ktorego chcesz pojsc :"<< endl << endl;

            wybor = getch();
            switch (wybor)
            {
			case '1':
				cout << " > Podchodzisz do Pokoju 1"; 
				goto P1;
				break;
			case '2':
				cout << " > Podchodzisz do Pokoju 2"; 
				goto P2;
				break;
			case '3':
				cout << " > Podchodzisz do Pokoju 3"<<endl<<endl;
				if (k!=1) 
				{
					for (int i=1; i<=4; i++)
					{
						cout<<"           .------------."<<endl;
						cout<<"          / .----------. \\"<<endl;
						cout<<"         / /            \ \\"<<endl;
						cout<<"         | |            | |"<<endl;
						cout<<"  _______| |____________| |_______"<<endl;
						cout<<".'       |_|            |_|        '."<<endl;
						cout<<"'._________________________________.' "<<endl;
						cout<<"|     .'_'.     .'_'.     .'_'.     | "<<endl;
						cout<<"'.__.'.' '.'._.'.' '.'._.'.' '.'. __' "<<endl;
						cout<<"'.__  | ";cout<<a;cout<<" |  _  | "cout<<b;cout<<" |  _  | ";cout<<c;cout<<" |  '__' "<<endl;
						cout<<"|   '.'._.'.' '.'._.'.' '.'._.'.'   | "<<endl;
						cout<<"'.____'._.'_____'._.'_____'._.'____.' "<<endl;
						cout<<"'._________________________________.' "<<endl;
						if(i==1) cin>>a;
						if(i==2) cin>>b;
						if(i==3) cin>>c;
					}
				}	
				goto P3;
				break;
			case '4':
				cout << " > Podchodzisz do Pokoju 4"; 
				goto P4;
				break;
			case '5':
				cout << " > Podchodzisz do klatki schodowej"; 
				goto KS1;
				break;
			case 'i':
				goto I1;
				break;
				
            default: cout<< "! Nie ma takiej opcji !";
                goto K1;
		}
		
		cout <<endl<< ">------------------------------{ AMNESIUM POKOJ 2 }-------------------------------<"<<endl<<endl;
		cout << " Budzisz sie w zamknietym pomieszczeniu na lozku, twoja glowa bardzo cie boli,\n a obraz poczatkowo wydaje"
			" sie byc jakby przez mgle. Chwila lezenia pomaga \n w koncu dojsc do siebie. Pokoj nie jest duzy \n dostrzegasz jedynie "
			"biurko, szafe, obraz oraz drzwi";

		cout<<endl<<endl;
		cout << " Spotkasz bear : "	<< bear <<endl;
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
				cout << " > Podchodzisz do drzwi"; // PRZYPADEK DRZWI 1//

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
				cout << " > Podchodzisz do starego obrazu"; // PRZYPADEK OBRAZU 1 //

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
                        if(rkey!=1)
                        {
                        cout << " > Znajdujesz zardzewialy klucz";
                        rkey = 1;
                        }
                        else cout<<" > Wzioles juz zardzewialy klucz";
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
                cout << " > Podchodzisz do biurka"; // PRZYPADEK BIURKA 1 //

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

                        cout<< " > Przeszukujac biurko odnajdujesz ukryty schowek w szufladzie";
                        goto BI;
                        break;

                        case 'd':
                            if(skey!=1)
                            {
                            cout << " > Bierzesz srebrny klucz";
                            skey = 1;
                            }
                            else cout<<" > Wzieto juz srebrny klucz";
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


		cout <<endl<< ">------------------------------{ AMNESIUM POKOJ 3 }-------------------------------<"<<endl<<endl;
		cout << " Po otwarciu klodki udaje ci sie wejsc do pokoju. Ten wyglada fatalnie.\n"
		"Wszystkie panele nosza slady ro¿nego rodzaju ciec, ale pomimo tego nie znajdujesz\n"
		"nigdzie krwi. Wyglada ten pokoj na taki, ktory byl wyczyszczony ale dawno temu i nikt\n"
		"tutaj nie zagladal. Oprocz paru elementow garderoby dostrzegasz na jednej scianie\n"
		"cos nie typowego. Jest cos na niej wystrugane";

		cout<<endl<<endl;
		cout << " Spotkasz bear : "	<< bear <<endl;
		cout << " Drzwi <1>" << endl;
		cout << " Lozko <2>" << endl;
		cout << " Fotel <3>" << endl;
		cout << " Telewizor <4>" <<endl;
		cout << " Podejdz do nietypowej sciany <5>" <<endl;
		cout << " Instrukcja gry <I>";

        cout<<endl<<endl;
        cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;

            wybor = getch();
            switch (wybor)
            {
			case '1':
				cout << " > Czy chcesz wyjsc z pokoju (Y/N) ?"; // PRZYPADEK DRZWI 3//
                wybor = getch();
                switch (wybor)
                {

              	    case 'y':
                    cout << " > Wracasz na korytarz";
                    goto K1;
                    break;

                    case 'n':
                    cout<< " > Wracasz do pokoju ";
                    goto P3;
                    break;


                    default: cout<< "";
                }
               
			case '2':
			cout << " > Podchodzisz do lozka"; // PRZYPADEK LOZKA 2 //

				LOZ2:

                cout<<endl;

                wybor = getch();
                switch (wybor)
                {
                    case 'a':
                    cout << " > Zwykle bardzo stare lozko. Dalsza inspekcja tego lozka moze spowodowac\n"
					"jego zniszczenie";
                    goto LOZ2;
                    break;

                    case 's':
                    cout<< " > Wbrew logice zdecydowales sie jednak zbadac to lozko. Niestety, \n"
					"Lozko rozpadlo sie na kawalki jak domek z kart. Nie byla to raczej cicha destrukcja\n";
                    goto LOZ2;
                    break;

                    case 'd':
                    cout<<" > Nie ma tutaj nic do wziecia";
                    goto LOZ2;
                    break;

                    case 'w':
                    cout << " > Odchodzisz od przedmiotu";
                    goto P3;
                    break;

                    default: cout<< "";
                    goto LOZ3;
                    }

                case '3':
                cout << " > Podchodzisz do fotela"; // PRZYPADEK FOTEL 1 //

				FOT1:

				cout<<endl<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                        case 'a':
                        cout << " > Siedzisko jest cale podrabane i wysiedziane. Tona kurzu troszke to maskuje";
                        goto FOT1;
                        break;

                        case 's':

                        cout<< " > Przeszukujac fotel odnajdujesz przyklejana notatke do spodu fotele, a raczej jej kawalek";
                        goto FOT1;
                        break;

                        case 'd'
                        cout<< " > Wzieto kawalek notatki "
                        cout<< to gowno 1 moze
                        goto FOT1;
                        break;

                        case 'w':
                        cout << "> Odchodzisz od przedmiotu";
                        goto P3;
                        break;

                        default: cout<< "";
                        goto FOT1;
                    }

                case '4':
                cout << "> Podchodzisz do telewizora "; // PRZYPADEK TELEWIZOR 1 //

				TEL1:

				cout<<endl<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'a':

                    cout << " Jedyna rzecz ktora nie pasuje wgl to wystroju tego wnetrza. Wszystkie meble\n"
					"wygladaja jak antyki. Co tu robi ten telewizor ?";
                    goto TEL1;
                    break;

                    case 's':
                	cout<< " > Stary nie dzialajacy telewizor, jedyne co znajdujesz to kurz i wygrawerowany napis z \n"
					"tylu B-E-A-R, hmmm cokolwiek ma to znaczyc";
                    goto TEL1;
                    break;

                    case 'd':
                    cout << " > Nie ma tu nic do wziecia";
                    oknf = 1;
                    goto TEL1;
                    break;

                    case 'w':
                    cout << "> Odchodzisz od przedmiotu";
                    goto P3;
                    break;

                    default: cout<< "";
                    goto P3;
                    }
					
				case '5':
                	cout << "> Podchodzisz do wygrawerowania na scianie "; // PRZYPADEK TYGRYSA NA SCIANIE //
					cout << tajgerek i wnioski ze ta paznokciami jest wydarte chyba czy cus
					
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

		cos musi byc z tym nozem zardzewialym tu
		cout <<endl<< ">------------------------------{ AMNESIUM POKOJ 4 }-------------------------------<"<<endl<<endl;
		cout << " Pokoj zdaje sie byc najmniejszy ze wszystkich. Tak jak w Pokoju 3 wyglada na taki, w ktorym ktos \n"
		" kiedys zrobil porzadek i go porzucil na dlugi czas. Na jedenej ze scian znowu widac szkic czegos. \n";

		cout<<endl<<endl;
		cout << " Spotkasz bear : "	<< bear <<endl;
		cout << " Drzwi <1>" << endl;
		cout << " Szafa <2>" << endl;
		cout << " Lozko <3>" << endl;
		cout << " Szafka nocna <4>" << endl;
		cout << " Kolejny rysunek na scianie <5>" <<endl;
		cout << " Instrukcja gry <I>";

        cout<<endl<<endl;
        cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;

            wybor = getch();
            switch (wybor)
            {
			case '1':
				cout << " > Czy chcesz wyjsc z pokoju (Y/N) ?"; // PRZYPADEK DRZWI 4//
                wybor = getch();
                switch (wybor)
                {

              	    case 'y':
                    cout << " > Wracasz na korytarz";
                    goto K1;
                    break;

                    case 'n':
                    cout<< " > Wracasz do pokoju ";
                    goto P4;
                    break;


                    default: cout<< "";
                }
               
			case '2':
			cout << " > Podchodzisz do lozka"; // PRZYPADEK LOZKA 3 //

				LOZ3:

                cout<<endl;

                wybor = getch();
                switch (wybor)
                {
                    case 'a':
                    cout << " > Lozko wyglada na stare ale wydaje sie byc solidne i nie byc az tak bardzo pognite";
                    goto LOZ3;
                    break;

                    case 's':
                    cout<< " > Po inspekcji lozka stwierdzasz, ze oprocz kurzu nie ma tutaj nic do wziecia";
                    goto LOZ3;
                    break;

                    case 'd':
                    cout<<" > Nie ma tutaj nic do wziecia";
                    goto LOZ3;
                    break;

                    case 'w':
                    cout << " > Odchodzisz od przedmiotu";
                    goto P3;
                    break;

                    default: cout<< "";
                    goto LOZ3;
                    }

                case '3':
                cout << " > Podchodzisz do szafy"; // PRZYPADEK SZAFY 2 //

				SZ2:

				cout<<endl<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                        case 'a':
                        cout << " > Szafa wydaje sie wygladac dosyc swiezo w porownaniu z reszta mebli. \n"
						"Nie pasuje do wystroju kompletnie. Ktos musial wstawic ja tutaj niedawno";
                        goto SZ2;
                        break;

                        case 's':

                        cout<< " > Szafa jest pusta, ale pod nia dostrzegasz skrawki papieru";
                        goto SZ2;
                        break;

                        case 'd'
                        cout<< " > Wzieto skrawki papieru, z ktorych udalo zlozyc ci sie kawalek notatki"
                        cout<< to gowno 1 moze
                        goto FOT1;
                        break;

                        case 'w':
                        cout << "> Odchodzisz od przedmiotu";
                        goto P3;
                        break;

                        default: cout<< "";
                        goto FOT1;
                    }

                case '4':
                cout << "> Podchodzisz do telewizora "; // PRZYPADEK SZAFKI NOCNEJ 1 //

				SZN1:

				cout<<endl<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'a':
                    cout << " Szafka nocna biala wyglada bardzo dostojnie, nie jest tak pognita jak reszta mebli. ";
                    goto SZN1;
                    break;

                    case 's':
                	cout<< " > W jednej z szuflad znajdujesz cale porysowane metalowe kajdanki";
                    goto SZN1;
                    break;

                    case 'd':
                    cout << " > Wziales metalowe kajdanki";
                    oknf = 1;
                    goto TEL1;
                    break;

                    case 'w':
                    cout << "> Odchodzisz od przedmiotu";
                    goto P3;
                    break;

                    default: cout<< "";
                    goto P3;
                    }
					
				case '5':
                	cout << "> Podchodzisz do wygrawerowania na scianie "; // PRZYPADEK TYGRYSA NA SCIANIE //
					cout << tajgerek i wnioski ze ta paznokciami jest wydarte chyba czy cus
					
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






		return (0);
		
	}
