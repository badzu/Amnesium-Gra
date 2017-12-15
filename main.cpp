#include<iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<cstdlib>
#include<stdio.h>
#include <stdlib.h>
#include <string>
#include "mmsystem.h"
#include "baza.hpp"
using namespace std;

	int skey, rkey, oknf, kskey, bylo, bear, kldk, klwrtk, notatka1, notatka2, mkjd ;
	char wybor;

	int main()
	{
	menu();
	loading1();
		
        POKOJ1:
        Sleep(250);
        system("cls");
		cout <<endl<< ">----------------------------{ AMNESIUM  POKOJ 1 }-----------------------------<"<<endl<<endl;											//POKOJ 1
		cout << " Budzisz sie w zamknietym pomieszczeniu na lozku, twoja glowa bardzo cie boli, a obraz poczatkowo wydaje"
			" sie byc jakby przez mgle. Chwila lezenia pomaga w koncu dojsc do siebie. Pokoj nie jest duzy dostrzegasz jedynie "
			"biurko, szafe, obraz oraz drzwi"<<endl<<endl;
		cout << " Drzwi <A> "<< endl;
		cout << " Stary Obraz <S>" << endl;
		cout << " Biurko <D>" << endl;
		cout << " Szafa <Z>";

        cout<<endl<<endl;
        cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;

            char wybor = getch();
            switch (wybor)
            {
			case 'a':
				
				 	if (bylo==1)
                    	{
                    		cout << " > Czy chcesz wyjsc z pokoju (ENTER/X) ?";
                    		BYLO_DRZWI1:
                    		cout<<endl;

                            wybor = getch();
                            switch (wybor)
                            {

                            case 13:
                            goto KORYTARZ1;
                            break;

                            case 'x':
                            cout<< " > Odchodzisz od drzwi  ";
                            goto POKOJ1;
                            break;


                            default: cout<< " > Nie ma takiej opcji ";
                            goto BYLO_DRZWI1;
                            }
							}
				
				cout << " > Podchodzisz do drzwi"; // PRZYPADEK DRZWI 1//

				DRZWI1:

				cout<<endl;

                    wybor = getch();
                    switch (wybor) 
                    {
                    case 'z':

                    cout << " > Bardzo stare drzwi wydaja sie byc zamkniete";
                    goto DRZWI1;
                    break;

                    case 'x':
                        if (skey==1)
                        {
                        cout << " > Uzyto klucza drzwi sie otwieraja, czy chcesz przejsc do Korytarza (ENTER/X) ?";
                        PlaySound(TEXT("door.wav"),NULL,SND_FILENAME | SND_ASYNC);

                        DRZWI_KLUCZ1:

                        cout<<endl;

                            wybor = getch();
                            switch (wybor)
                            {

                            case 13:
                            cout << " > Idziesz do Korytarza";
                            goto KORYTARZ1;
                            break;

                            case 'x':
                            cout<< " > Odchodzisz od drzwi  ";
                            goto POKOJ1;
                            break;


                            default: cout<< " > Nie ma takiej opcji ";
                            goto DRZWI_KLUCZ1;
                            }
                            } else
                            cout<< " > Nie mozna otworzyc drzwi";
                            goto DRZWI1;
                            break;

                    case 'c':
                    cout << " > Nie ma tutaj nic do zebrania";
                    goto DRZWI1;
                    break;

                    case 's':
                    cout << " > Odchodzisz od przedmiotu";
                    goto POKOJ1;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto DRZWI1;
                    }


				case 's':
				cout << " > Podchodzisz do starego obrazu"; // PRZYPADEK OBRAZU 1 //

				OBRAZ1:

                cout<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'z':
                    cout << " > Obraz wydaje sie tak jakby dziwnie na ciebie spogladac, ale ciezko powiedziec czy to tylko"
                    " wymysl twojej wyobrazni czy rzeczywiscie tak jest";
                    goto OBRAZ1;
                    break;

                    case 'x':
                    cout<< " > Dotykasz ramki obrazu z ktorego wypada cos na podloge zawinietego w zgnity material";
                    goto OBRAZ1;
                    break;

                    case 'c':
                        if(rkey!=1)
                        {
                        cout << " > Znajdujesz zardzewialy klucz";
                        rkey = 1;
                        }
                        else cout<<" > Wzioles juz zardzewialy klucz";
                    goto OBRAZ1;
                    break;

                    case 's':
                    cout << " > Odchodzisz od przedmiotu";
                    goto POKOJ1;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto OBRAZ1;
                    }

                case 'd':
                cout << " > Podchodzisz do biurka"; // PRZYPADEK BIURKA 1 //

				BIURKO1:

				cout<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                        case 'z':
                        cout << " > Cale pognite i paskudne biurko, pasuje do tego mrocznego wystroju.";
                        goto BIURKO1;
                        break;

                        case 'x':

                        cout<< " > Przeszukujac biurko odnajdujesz ukryty schowek w szufladzie";
                        goto BIURKO1;
                        break;

                        case 'c':
                            if(skey!=1)
                            {
                            cout << " > Bierzesz srebrny klucz";
                            skey = 1;
                            }
                            else cout<<" > Wzieto juz srebrny klucz";
                        goto BIURKO1;
                        break;

                        case 's':
                        cout << "> Odchodzisz od przedmiotu";
                        goto POKOJ1;
                        break;

                        default: cout<< " > Nie ma takiej opcji ";
                        goto BIURKO1;
                    }

                case 'z':
                cout << "> Podchodzisz do szafy"; // PRZYPADEK SZAFY 1 //

				SZAFA1:

				cout<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'z':

                    cout << " Szafa ma wyrwane drzwi i jest w tragicznym stanie."
                    "Okazuje sie jednak ze w podlodze ukryty jest schowek zamkniety jakims kluczem";
                    goto SZAFA1;
                    break;

                    case 'x':
                        if (rkey==1)
                        {
                        cout << " > Uzyto klucza, schowek sie otwiera i znajdujesz na jego dnie cos ostrego";
                        } else
                        cout<< " > Nie mozna otworzyc schowka";
                        goto SZAFA1;
                        break;

                    case 'c':
                    if (rkey==1)
                    {
                    cout << " > Wzieto stary pordzewialy noz";
                    oknf = 1;
                	}
                    else cout << " > Nie ma tutaj nic do zebrania.";
                    goto SZAFA1;
                    break;

                    case 's':
                    cout << "> Odchodzisz od przedmiotu";
                    goto POKOJ1;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto SZAFA1;
                    }

                default : goto POKOJ1;
		}


    	KORYTARZ1:
    	bylo=1;
        Sleep(250);
        system("cls");
        
        

		cout <<endl<< ">--------------------------{ AMNESIUM  KORYTARZ }---------------------------<"<<endl<<endl;												// KORYTARZ
		cout << " Znajdujesz sie w krotkim korytarzu, na œcianach pe³no zdeformowanej tapety. "
		" Parkiet tez jest w fatalnym stanie. Wnioskujesz, ze dom w ktorym sie znajdujesz"
		"musi byc opuszczony przez pare dziesiat lat. Twoj wzrok przykuwa jednak czerwona "
		"zaschnieta plama krwi, ktora tez swieza nie jest. Cala ta sytuacja przytlacza cie "
		"coraz bardziej. Z korytarza mozesz pojsc do czterech pokoi lub klatki schodowej. "<<endl<<endl;
		if(bear==1)
		{
			Sleep(4000);
			cout<<" DOSTRZEGASZ ZAMYKAJACE SIE DRZWI OD POKOJU 3 \n\n";
			PlaySound(TEXT("bearclose.wav"),NULL,SND_FILENAME | SND_ASYNC);
		}
		cout << " Pokoj 1 <A>" << endl;
		cout << " Pokoj 2 <S>" << endl;
		cout << " Pokoj 3 <D>" << endl;
		cout << " Pokoj 4 <Z>" <<endl;
		cout << " Klatka schodowa <X>";

        cout<<endl<<endl;
        cout << " Wybierz miejsce do ktorego chcesz pojsc :"<< endl << endl;

            wybor = getch();
            switch (wybor)
            {
			case 'a':
				cout << " > Podchodzisz do Pokoju 1"; 
				goto POKOJ1;
				break;
			case 's':
				cout << " > Podchodzisz do Pokoju 2"; 
				if (klwrtk!=1)
				{
				cout<< "\n > Na futrynie drzwi dostrzagasz napis : \n";
				cout<< "UWAGA ! Drzwi sa zablokowane dzwignia, ktora moze zabic. Mam nadzieje, ¿e umiesz rozwiazac ta zagadke \n";
				cout << " > Czy chcesz stawic czola dzwigni ? (ENTER/X) ?";
				wybor = getch();
                    switch (wybor)
                    {

                   		 case 'x':
                   		 cout << "\n > Idziesz do Korytarza";
                   		 goto KORYTARZ1;
                   		 break;

                   		 case 13:
                   		 dzwignia();
                   		 break;			
					}
					goto POKOJ2;
				}
				break;
			case 'd':
				system("cls");
				cout << " > Podchodzisz do Pokoju 3"<<endl<<endl;
				if (kldk!=1)
				{
					klodka();
				}
				goto POKOJ3;
				break;
			case 'z':
				system("cls");
				if (oknf!=1)
				{
					cout << " Drzwi blokuje sznurek z drugiej strony, pasowalo by cos ostrego aby go przeciac, przez szczeline.";
					Sleep(3000);
					goto KORYTARZ1;
				}
				cout << " > Podchodzisz do Pokoju 4"; 
				goto POKOJ4;
				break;
			case 'x':
				cout << " > Podchodzisz do klatki schodowej"; 
				goto KLATKA_SCHODOWA1;
				break;				
            default: cout<< "> Nie ma takiej opcji ";
                goto KORYTARZ1;
		}
		
	POKOJ2:
	klwrtk=1;
	system("cls");
		cout <<endl<< ">----------------------------{ AMNESIUM  POKOJ 2 }-----------------------------<"<<endl<<endl;												// POKOJ 2
		cout << " Pokoj ten rozni sie od innych, zamiast bialych zdartych scian, sa naklejone tapety ze wzorami"
		" gotyckimi. Kolorystyka dziwna, bo na tapetach przewaza kolor filetowy. Warstwa kurzu jednakze sie tutaj nie zmienila."
		" Jakim cudem woogole sie tutaj znalazlem, skoro wszystko wyglada jak sprzed kilkudziesieciu lat ? "
		" Na to pytanie musze wlasnie znalesc odpowiedz."<<endl<<endl;
		cout << " Drzwi <A>" << endl;
		cout << " Szafa <S>" << endl;
		cout << " Biurko <D>" << endl;
		cout << " Pianino <Z>" << endl;
		cout << " Rysunek na scianie <X>";

        cout<<endl;
        cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;
       
            wybor = getch();
            switch (wybor)
            {
			case 'a':
				cout << " > Czy chcesz wyjsc z pokoju (ENTER/X) ?"; // PRZYPADEK DRZWI 4//
                wybor = getch();
                switch (wybor)
                {

              	    case 13:
                    cout << " > Wracasz na korytarz";
                    goto KORYTARZ1;
                    break;

                    case 'x':
                    cout<< " > Wracasz do pokoju ";
                    goto POKOJ2;
                    break;
                    default: cout<< " > Nie ma takiej opcji ";
                }
               
			case 's':
			cout << " > Podchodzisz do szafy"; // PRZYPADEK SZAFA 2 //

				SZAFA2:

                cout<<endl;

                wybor = getch();
                switch (wybor)
                {
                    case 'z':
                    cout << " > Fatalny stan szafy cie nie zaskakuje, potym ile juz mebli zobaczyles";
                    goto SZAFA2;
                    break;

                    case 'x':
                    cout<< " > W szafie nie ma nic ciekawego, co ciekawe brakuje jej tylniej sciany.";
                    goto SZAFA2;
                    break;

                    case 'c':
                    cout<<" > Nie ma tutaj nic do wziecia";
                    goto SZAFA2;
                    break;

                    case 's':
                    cout << " > Odchodzisz od przedmiotu";
                    goto POKOJ2;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto SZAFA2;
                    }

                case 'd':
                cout << " > Podchodzisz do biurka"; // PRZYPADEK BIURKO 2 //

				BIURKO2:

				cout<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                        case 'z':
                        cout << " > Biurko jest w wyjatkowo fatalnym stanie. Jest tak pognite ze zastanawiasz sie jakim cudem jeszcze stoi";
                        goto BIURKO2;
                        break;

                        case 'x':

                        cout<< " > Inspekcja biurka skonczyla sie jego destrukcja. Bylo to do przewidzenia... Oprocz polamanego drewna nie ma nic";
                        goto BIURKO2;
                        break;

                        case 'c':
                    	cout<< " > Nie ma tutaj nic do wziecia";
                        //to gowno 1 moze
                        goto BIURKO2;
                        break;

                        case 's':
                        cout << "> Odchodzisz od przedmiotu";
                        goto POKOJ3;
                        break;

                        default: cout<< " > Nie ma takiej opcji ";
                        goto BIURKO2;
                    }

                case 'z':
                cout << "> Podchodzisz do pianina "; // PRZYPADEK PIANINO 1 //

				PIANINO1:

				cout<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'z':
                    cout << " > Zakurzone pianino, ktore na pierwszy rzut oka wydaje sie byc sprawne. Co ciekawe klawisze nie sa zakurzone az tak bardzo w porownaniu do reszty ";
                    goto PIANINO1;
                    break;

                    case 'x':
                	cout<< " > Pianino jak pianino nie znujdujesz obok niego nic. Jednak poczules natchnienie do gry na nim. Nie jestes sobie w stanie przypomniec czy nawet potrafisz grac.";
                	if (kskey!=1)
                    {
                		goto PIANINO1;
                	} 
					else
                	{
                		Sleep(500);
                		cout<< "Podczas gry nie spodziewanie wypada z niego klucz. Musial byc jakos sprytnie schowany w strunach pianina.";
                		goto PIANINO1;
                	}
                    break;

                    case 'c':
                    if (kskey!=1)
                    {
                    cout << " > Wziales klucz o oznaczeniu KS#12";
                    kskey = 1;
                	} else cout <<" Nie ma tutaj nic do podniesienia";
                    goto PIANINO1;
                    break;

                    case 's':
                    cout << "> Odchodzisz od przedmiotu";
                    goto POKOJ2;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto PIANINO1;
                    }
					
				case 'x':
                	cout << "> Podchodzisz do wygrawerowania na scianie \n\n"; // PRZYPADEK BEARA NA SCIANIE //
					cout << "     	      .--.              .--."<<endl;
					cout << "     	     : (\\ '. _......_ .' /) :"<<endl;
					cout << "    	       '.    `        `    .'"<<endl;
					cout << "    	        /'   _        _   `\\"<<endl;
					cout << "    	       /     0}      {0     \\"<<endl;
					cout << "    	      |       /      \\       |"<<endl;
					cout << "    	      |     /'        `\\     |"<<endl;
					cout << "     	       \\   | .  .==.  . |   /"<<endl;
					cout << "    	        '._ \\.' \\__/ './ _.'"<<endl;
					cout << "     	        /  ``\\_.-''-._/``  \\"<<endl;
					cout << "      	              \\/`--`\\/"<<endl<<endl;
					cout << "               THEY CALL HIM B-E-A-R";
					if (bear!=1)
					{PlaySound(TEXT("bear.wav"),NULL,SND_FILENAME | SND_ASYNC); 
					Sleep(6000);
					system("cls");Sleep(4000);PlaySound(TEXT("beargo.wav"),NULL,SND_FILENAME | SND_ASYNC); Sleep(4500);}
					Sleep(3000); bear=1;
					goto POKOJ2;
					
                case 'i':
					instrukcja();
					goto POKOJ2;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto POKOJ2;
	}
	
	POKOJ3:
	system("cls");
	kldk=1;
		cout <<endl<< ">----------------------------{ AMNESIUM  POKOJ 3 }-----------------------------<"<<endl<<endl;												// POKOJ 3
		cout << " Po otwarciu klodki udaje ci sie wejsc do pokoju. Ten wyglada fatalnie."
		"Wszystkie panele nosza slady ro¿nego rodzaju ciec, ale pomimo tego nie znajdujesz"
		"nigdzie krwi. Wyglada ten pokoj na taki, ktory byl wyczyszczony ale dawno temu i nikt"
		"tutaj nie zagladal. Oprocz paru elementow garderoby dostrzegasz na jednej scianie"
		"cos nie typowego. Jest cos na niej wystrugane"<<endl<<endl;
		cout << " Drzwi <A>" << endl;
		cout << " Lozko <S>" << endl;
		cout << " Fotel <D>" << endl;
		cout << " Telewizor <Z>" <<endl;
		cout << " Podejdz do nietypowej sciany <X>";

        cout<<endl<<endl;
        cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;
        
        if (bear==1)
        {
        	Sleep(3000);
        	PlaySound(TEXT("bearkill.wav"),NULL,SND_FILENAME | SND_ASYNC);
        	Sleep(2000);
        	system("cls");
       		cout<<"\n > Bear trafia cie mieczem prosto w klatke piersiowa. Umierasz.";
        	lose();
		}

            wybor = getch();
            switch (wybor)
            {
			case 'a':
				cout << " > Czy chcesz wyjsc z pokoju (ENTER/X) ?"; // PRZYPADEK DRZWI 3//
                wybor = getch();
                switch (wybor)
                {

              	    case 13:
                    cout << " > Wracasz na korytarz";
                    goto KORYTARZ1;
                    break;

                    case 'x':
                    cout<< " > Wracasz do pokoju ";
                    goto POKOJ3;
                    break;


                    default: cout<< " > Nie ma takiej opcji ";
                }
               
			case 's':
			cout << " > Podchodzisz do lozka"; // PRZYPADEK LOZKA 2 //

				LOZKO2:

                cout<<endl;

                wybor = getch();
                switch (wybor)
                {
                    case 'z':
                    cout << " > Zwykle bardzo stare lozko. Dalsza inspekcja tego lozka moze spowodowac\n"
					"jego zniszczenie";
                    goto LOZKO2;
                    break;

                    case 'x':
                    cout<< " > Wbrew logice zdecydowales sie jednak zbadac to lozko. Niestety, \n"
					"Lozko rozpadlo sie na kawalki jak domek z kart. Nie byla to raczej cicha destrukcja\n";
                    goto LOZKO2;
                    break;

                    case 'c':
                    cout<<" > Nie ma tutaj nic do wziecia";
                    goto LOZKO2;
                    break;

                    case 's':
                    cout << " > Odchodzisz od przedmiotu";
                    goto POKOJ3;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto LOZKO2;
                    }

                case 'd':
                cout << " > Podchodzisz do fotela"; // PRZYPADEK FOTEL 1 //

				FOTEL1:

				cout<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                        case 'z':
                        cout << " > Siedzisko jest cale podrabane i wysiedziane. Tona kurzu troszke to maskuje";
                        goto FOTEL1;
                        break;

                        case 'x':

                        cout<< " > Przeszukujac fotel odnajdujesz przyklejana notatke do spodu fotele, a raczej jej kawalek";
                        goto FOTEL1;
                        break;

                        case 'c':
                        notatka1=1;
                        if (notatka1==1 && notatka2==1)
						{				historyjka();                   	}
                    	else cout<< " > Wzieto skrawki papieru";
                        goto FOTEL1;
                        break;

                        case 's':
                        cout << "> Odchodzisz od przedmiotu";
                        goto POKOJ3;
                        break;

                        default: cout<< " > Nie ma takiej opcji ";
                        goto FOTEL1;
                    }

                case 'z':
                cout << "> Podchodzisz do telewizora "; // PRZYPADEK TELEWIZOR 1 //

				TELEWIZOR1:

				cout<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'z':

                    cout << " Jedyna rzecz ktora nie pasuje wgl to wystroju tego wnetrza. Wszystkie meble\n"
					"wygladaja jak antyki. Co tu robi ten telewizor ?";
                    goto TELEWIZOR1;

                    case 'x':
                	cout<< " > Stary nie dzialajacy telewizor, jedyne co znajdujesz to kurz i wygrawerowany napis z \n"
					"tylu B-E-A-R, hmmm cokolwiek ma to znaczyc";
                    goto TELEWIZOR1;
                    break;

                    case 'c':
                    cout << " > Nie ma tu nic do wziecia";
                    goto TELEWIZOR1;
                    break;

                    case 's':
                    cout << "> Odchodzisz od przedmiotu";
                    goto POKOJ3;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto TELEWIZOR1;
                    }
					
				case 'x':
                	cout << "> Podchodzisz do wygrawerowania na scianie \n\n\n\n";
					cout << "                                                                         _ _ _ _"<<endl; // PRZYPADEK TYGRYSA NA SCIANIE //
					cout <<"                                                           _ __..-;''`--/'//  / "<<endl;
					cout <<"                                                          (`/' ` |  \\ \\ \\ / / / "<<endl;
					cout <<"                                                         /'`\\ \\   |  \\ | \\| // "<<endl;
					cout <<"                 STRONGER THAN TIGER                    /<7' ;  \\ \\  | ; ||/ /|"<<endl;
					cout <<"                                                       /  _.-, `,-\\,__|  _-| / "<<endl;
					cout <<"                                                        `-`   / ;      / __/ \\__"<<endl;
					cout <<"                                                             `-'      |  -|   \\ "<<endl;
					cout <<"                                                                   __/   /     \\"<<endl;
					cout <<"                                                                 ((__.-'"<<endl;
					Sleep(4000); 
					goto POKOJ3;
					
                case 'i':
					instrukcja();
					goto POKOJ3;
                    break;

                    default: cout<< "> Nie ma takiej opcji ";
                    goto POKOJ3;
		}
		
	POKOJ4:
	system("cls");
		cout <<endl<< ">----------------------------{ AMNESIUM  POKOJ 4 }-----------------------------<"<<endl<<endl;											// POKOJ 4
		cout << " Pokoj zdaje sie byc najmniejszy ze wszystkich. Tak jak w Pokoju 3 wyglada na taki, w ktorym ktos \n"
		" kiedys zrobil porzadek i go porzucil na dlugi czas. Na jedenej ze scian znowu widac szkic czegos. \n"<<endl<<endl;
		cout << " Drzwi <A>" << endl;
		cout << " Lozko <S>" << endl;
		cout << " Szafa <D>" << endl;
		cout << " Szafka nocna <Z>" << endl;
		cout << " Kolejny rysunek na scianie <X>" <<endl;

        cout<<endl<<endl;
        cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;

            wybor = getch();
            switch (wybor)
            {
			case 'a':
				cout << " > Czy chcesz wyjsc z pokoju (ENTER/X) ?"; // PRZYPADEK DRZWI 4//
                wybor = getch();
                switch (wybor)
                {

              	    case 13:
                    cout << " > Wracasz na korytarz";
                    goto KORYTARZ1;
                    break;

                    case 'x':
                    cout<< " > Wracasz do pokoju ";
                    goto POKOJ4;
                    break;


                    default: cout<< " > Nie ma takiej opcji ";
                    
                }
               
			case 'd':
			cout << " > Podchodzisz do lozka"; // PRZYPADEK LOZKA 3 //

				LOZKO3:

                cout<<endl;

                wybor = getch();
                switch (wybor)
                {
                    case 'z':
                    cout << " > Lozko wyglada na stare ale wydaje sie byc solidne i nie byc az tak bardzo pognite";
                    goto LOZKO3;
                    break;

                    case 'x':
                    cout<< " > Po inspekcji lozka stwierdzasz, ze oprocz kurzu nie ma tutaj nic do wziecia";
                    goto LOZKO3;
                    break;

                    case 'c':
                    cout<<" > Nie ma tutaj nic do wziecia";
                    goto LOZKO3;
                    break;

                    case 's':
                    cout << " > Odchodzisz od przedmiotu";
                    goto POKOJ4;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto LOZKO3;
                    }

                case 's':
                cout << " > Podchodzisz do szafy"; // PRZYPADEK SZAFY 3//

				SZAFA3:

				cout<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                        case 'z':
                        cout << " > Szafa wydaje sie wygladac dosyc swiezo w porownaniu z reszta mebli. \n"
						"Nie pasuje do wystroju kompletnie. Ktos musial wstawic ja tutaj niedawno";
                        goto SZAFA3;
                        break;

                        case 'x':

                        cout<< " > Szafa jest pusta, ale pod nia dostrzegasz skrawki papieru";
                        goto SZAFA3;
                        break;

                        case 'c':  	
						notatka2=1;
						if (notatka1==1 && notatka2==1)
						{				historyjka();                   	}
                    	else cout<< " > Wzieto skrawki papieru";
                        goto SZAFA3;
                        break;

                        case 's':
                        cout << "> Odchodzisz od przedmiotu";
                        goto POKOJ4;
                        break;

                        default: cout<< " > Nie ma takiej opcji ";
                        goto SZAFA3;
                    }

                case 'z':
                cout << "> Podchodzisz do szafki nocnej "; // PRZYPADEK SZAFKI NOCNEJ 1 //

				SZAFKA_NOCNA1:

				cout<<endl;

                    wybor = getch();
                    switch (wybor)
                    {
                    case 'z':
                    cout << " Szafka nocna biala wyglada bardzo dostojnie, nie jest tak pognita jak reszta mebli. ";
                    goto SZAFKA_NOCNA1;
                    break;

                    case 'x':
                	cout<< " > W jednej z szuflad znajdujesz cale porysowane metalowe kajdanki";
                    goto SZAFKA_NOCNA1;
                    break;

                    case 'c':
                    cout << " > Wziales metalowe kajdanki";
                    mkjd = 1;
                    goto SZAFKA_NOCNA1;
                    break;

                    case 's':
                    cout << "> Odchodzisz od przedmiotu";
                    goto POKOJ4;
                    break;

                    default: cout<< "";
                    goto SZAFKA_NOCNA1;
                    }
					
				case 'x':
                	cout << "> Podchodzisz do wygrawerowania na scianie \n\n"; // PRZYPADEK WILKA NA SCIANIE //
					cout << "       _"<<endl;
					cout << "      / \\      _-'"<<endl;
					cout << "    _/|  \\-''- _ /"<<endl;
					cout << " -' { |          \\"<<endl;
					cout << "   /              \\"<<endl;
					cout << "   /        o.  |o }"<<endl;
					cout << "   |            \\ ;                       STRONGER THAN WOLF"<<endl;
					cout << "                 ',"<<endl;
					cout << "      \\_         __\\"<<endl;
					cout << "        ''-_    \\.//"<<endl;
					cout << "          / '-____'"<<endl;
					cout << "         /"<<endl;
					cout << "        /"<<endl;
					cout << "     ,-'"<<endl;
					cout << "__,-'"<<endl;
					Sleep(4000); 
					goto POKOJ4;
					break;
					
                case 'i':
					instrukcja();
					goto POKOJ4;
                    break;

                    default: cout<< " > Nie ma takiej opcji ";
                    goto POKOJ4;
                    
        	KLATKA_SCHODOWA1:
        		if(kskey==1)
        		{
        			cout<<"\n\n                     __     ______  _    _   __          _______ _   _ "<<endl;
        			cout<<"                     \\ \\   / / __ \\| |  | |  \\ \\        / /_   _| \\ | |"<<endl;
        			cout<<"                      \\ \\_/ / |  | | |  | |   \\ \\  /\\  / /  | | |  \\| |"<<endl;
        			cout<<"                       \\   /| |  | | |  | |    \\ \\/  \\/ /   | | | . ` |"<<endl;
        			cout<<"                        | | | |__| | |__| |     \\  /\\  /   _| |_| |\\  |"<<endl;
        			cout<<"                        |_|  \\____/ \\____/       \\/  \\/   |_____|_| \\_|"<<endl;
					getch();
        		}
        		else
        		{
        			cout<<" Drzwi sa zamkniete"	;
        			goto KORYTARZ1;
				}
		}
		return (0);
						
	}
