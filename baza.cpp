#include "baza.hpp"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

int menu()
{
int o, p;
char wybor;
using namespace std;
	MENU:
	for (o=1,p=0 ; p>=0 && o>0;) // petla ktora wykonuje sie ca�y czas dopoki nie zatwierdzimy opcji
	{	
		system("cls");
		cout << "   ___________________________________________________________________________"<<endl;
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
		cout << "                           ---------------------------"<<endl;
		if (p==0) cout<<"                           |         > START <       |\n"; else cout<<"                           |           START         |\n";
		if (p==1) cout<<"                           |      > INSTRUKCJA <     |\n"; else cout<<"                           |        INSTRUKCJA       |\n";
		if (p==2) cout<<"                           |        > TWORCA <       |\n"; else cout<<"                           |          TWORCA         |\n";
		if (p==3) cout<<"                           |         > DEMO <        |\n"; else cout<<"                           |           DEMO          |\n";
		if (p==4) cout<<"                           |      > WYJDZ Z GRY <    |\n"; else cout<<"                           |        WYJDZ Z GRY      |\n";
		cout << "                           ---------------------------"<<endl;
		wybor=getch();
		switch(wybor) // poruszanie sie po menu w g�re, w do� oraz zatwierdzanie
		{
			case 72:
				if(p==0) break;
				else { PlaySound(TEXT("choice.wav"),NULL,SND_FILENAME | SND_ASYNC);	p--;
				break;	}
			case 80:
				if(p==4) break;
				else { PlaySound(TEXT("choice.wav"),NULL,SND_FILENAME | SND_ASYNC);	p++;
				break;	}
			case 13:
				PlaySound(TEXT("choice.wav"),NULL,SND_FILENAME | SND_ASYNC);
				o=0;
				break;				
		}	
	}
	if(p==0) {system("cls"); return(0);} // dla p=0 funkcja ko�czy sie przenosz�c nas tym samym do pocz�tku kodu w main.cpp
	if(p==1) instrukcja(); // dla p=1 funkcja pokazuje nam instrukcje
	if(p==2) tworca(); // dla p=2 funkcja pokazuje nam tworcow gry
	if(p==3) demo(); // dla p=3 funckja pokazuje nam demo gry
	if(p==4) exit(0); // dla p=4 funkcja konczy dzia�anie programu
	goto MENU;
	}
	
int tworca() // tworcy gry
{
using namespace std;
system("cls");
PlaySound(TEXT("rolldown.wav"),NULL,SND_FILENAME | SND_ASYNC);
cout << "\n\n\n\n\n                                 ART DESIGN\n "<<endl;
cout << "                             Bartlomiej Ciolkosz\n\n"<<endl;
cout << "                                 GAME PROJECT\n "<<endl;
cout << "                             Bartlomiej Ciolkosz\n\n"<<endl;
cout << "                                  SCRIPTING\n "<<endl;
cout << "                             Bartlomiej Ciolkosz\n\n"<<endl;
cout << "                                  SCREENPLAY\n"<<endl;
cout << "                             Bartlomiej Ciolkosz\n\n"<<endl;
getch();
PlaySound(TEXT("rollup.wav"),NULL,SND_FILENAME | SND_ASYNC);
return(0);
}


int loading1() // ekran wczyrtywania gry
{
		using namespace std;
		PlaySound(TEXT("loading.wav"),NULL,SND_FILENAME | SND_ASYNC);
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
		Sleep (100); cout << "+              ___.-~ \\(| \\  \\0\\ \\__/ /0/ /:|)~   ~   \\   ,;;;;/;;;;;'         +" << endl;
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
		Sleep (100); cout << "+ |   S   |  --- Odchodzenie od przedmiotow                                    +" << endl;
		Sleep (100); cout << "+ |_______|                                                                    +" << endl;
		Sleep (100); cout << "+------------------------------------------------------------------------------+" << endl;
		Sleep (100); cout << "+     >>> >>> >>>   NACISNIJ DOWOLNY KLAWISZ ABY ZACZAC GRE   <<< <<< <<<      +" << endl;
		Sleep (100); cout << "+                                                                              +" << endl;
		Sleep (100); cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

        getch();
        PlaySound(TEXT("choice.wav"),NULL,SND_FILENAME | SND_ASYNC);
}

int demo() // demo gry
{		
		system("cls");
		using namespace std;
		cout << "DEMO";
		cout <<endl<< ">----------------------------{ AMNESIUM  POKOJ 2 }-----------------------------<"<<endl<<endl;												// POKOJ 2
		cout << " Pokoj ten rozni sie od innych, zamiast bialych zdartych scian, sa naklejone tapety ze wzorami"
		" gotyckimi. Kolorystyka dziwna, bo na tapetach przewaza kolor filetowy. Warstwa kurzu jednakze sie tutaj nie zmienila."
		" Jakim cudem woogole sie tutaj znalazlem, skoro wszystko wyglada jak sprzed kilkudziesieciu lat ? "
		" Na to pytanie musze wlasnie znalesc odpowiedz."<<endl<<endl;
		cout << " Drzwi <A>" << endl;
		cout << " Szafa <S>" << endl;
		cout << " Biurko <D>" << endl;
		cout << " Pianino <Z>" << endl;
		cout << " Rysunek na scianie <X>" <<endl<<endl;
        cout << " Wybierz rzecz do ktorej chcesz podejsc :"<< endl << endl;
        	Sleep (3800);
			cout << " > Podchodzisz do szafy\n"; // PRZYPADEK SZAFA 2 //
			Sleep (1500);
            cout << " > Fatalny stan szafy cie nie zaskakuje, potym ile juz mebli zobaczyles\n";
			Sleep (1500);
            cout<< " > W szafie nie ma nic ciekawego, co ciekawe brakuje jej tylniej sciany.\n";
			Sleep (1500);
            cout<<" > Nie ma tutaj nic do wziecia\n";
			Sleep (1500);
            cout << " > Odchodzisz od przedmiotu";
            Sleep (2500);

}

int klodka() // zagadaka klodka
{
using namespace std;
int k;
char a='0', b='0', c='0',wybor;

cout<<"                    Na drzwiach jest wystrugane \n\n";
cout<<"                         |  8   2   6 |\n";
cout<<"                         |  7  14   8 |\n";
cout<<"                         | 49  -6  35 |\n\n";
cout<<"                     Plus zmienia sie na minus\n\n";
	if (k!=1) 
				{
					for (int i=1; i<=4; i++) // Petla wykonuje sie 4 razy. Przez pierwsze 3 razy naszym zadaniem jest wprowadzenie cyfr szyfru. Za czwartym razem petla sprawdza poprawno�� szyfru
					{
						cout<<"                           .------------."<<endl;
						cout<<"                          / .----------. \\"<<endl;
						cout<<"                         / /            \\ \\"<<endl;
						cout<<"                         | |            | |"<<endl;
						cout<<"                  _______| |____________| |_______"<<endl;
						cout<<"                .'       |_|            |_|        '."<<endl;
						cout<<"                '._________________________________.' "<<endl;
						cout<<"                |     .'_'.     .'_'.     .'_'.     | "<<endl;
						cout<<"                '.__.'.' '.'._.'.' '.'._.'.' '.'. __' "<<endl;
						cout<<"                '.__  | ";cout<<a;cout<<" |  _  | ";cout<<b;cout<<" |  _  | ";cout<<c;cout<<" |  '__' "<<endl;
						cout<<"                |   '.'._.'.' '.'._.'.' '.'._.'.'   | "<<endl;
						cout<<"                '.____'._.'_____'._.'_____'._.'____.' "<<endl;
						cout<<"                '._________________________________.' "<<endl;
						if(i==1) 
						{
							 a=getch();
							 if(a=='s') return(1); // ten warunek sprawdza czy chcemy odejsc od klodki, jesli prawdziwe to przeniesie nas to do KORYTARZ1
						}
						if(i==2)
						{
							 b=getch();
							 if(b=='s') return(1); // ten warunek sprawdza czy chcemy odejsc od klodki, jesli prawdziwe to przeniesie nas to do KORYTARZ1
						}
						if(i==3)
						{
							 c=getch();
							 if(b=='s') return(1); // ten warunek sprawdza czy chcemy odejsc od klodki, jesli prawdziwe to przeniesie nas to do KORYTARZ1
						}
						if(i==4) 
						{
						if(a=='2' && b=='5' && c=='2') // petla sprawdza tu czy szyfr jest poprawny
						{
							cout<<endl<<endl;	
						}
						else
						{
							cout<<endl<<"Nie poprawny szyfr";
							Sleep(900);
							i=0;
							a='0',b='0',c='0';
						}
					}
						system("cls");
					
					}
					k=1;
					PlaySound(TEXT("door.wav"),NULL,SND_FILENAME | SND_ASYNC);
					
}	
else cout<<"Wchodzisz do Pokoju 3";
return(0);		
}


int historyjka() // Otwiera sie ona gdy zierzemy notaka1 i notatka2. Jest ona potrzebna do rozwi�zania zagadki d�wigna
{
using namespace std;
cout<< " > Wzieto skrawki papieru, z ktorych udalo ci sie zlozyc kawalek notatki \n\n";
cout<< " Armia krola udala sie na polnoc. Walka tam jednak byla tragiczna w skutkach wiec resztki wojska wrocily na polodnie. "
"Niestety krolestwo ktore zastali byl pod atakiem barbazyncow. Udali sie wiec na zachod. Przez pare lat zylo im tam sie pieknie"
", a armia zdazyla sie odbudowac. Ruszyli wiec na wschod. Stoczyli tam kilka zwycieskich walk. Po czym zdecydowali wrocic "
"z powrotem na zachod\n\n"; getch();
 cout<<" > Wyglada to na szyfr do poruszania dzwignia";
	
	return(0);
}


int dzwignia() // zagadka dzwignia 
{
using namespace std;
int d, yup1, yup2, yup3, yup4, dead=0;
char z1='0', z2, z3, z4, kolo;

cout<< "\n\n  Zasada dzialania dzwigni \n";
cout<< "   S - Dzwignia do gory\n";
cout<< "   Z - Dzwignia w lewo\n";
cout<< "   X - Dzwignia w dol\n";
cout<< "   C - Dzwignia w prawo\n";

	if (d!=1) 
				{
					for (int i=1; i<=5; i++) // petla ktora wykonuje sie 5 razy. Przez pierwsze 4 razy wprowadzamy polozenie d�wigni. W ostatnim razie petla sprawdza poprawnosc wprowadzonych ruch�w d�wigni
					{
						cout<<"\n\n     ---"<<endl;
						cout<<"    | ";cout<<z1;cout<<" |"<<endl;
						cout<<" ---     ---"<<endl;
						cout<<"|";cout<<z2;cout<<"         ";cout<<z4;cout<<"|"<<endl;
						cout<<" ---     ---"<<endl;
						cout<<"    | ";cout<<z3;cout<<" |"<<endl;
						cout<<"     ---"<<endl;
							
						if(i==1) // wprowadzenie pierwszego ruchu dzwigni
						{
						kolo=getch();
						switch(kolo)
						{
							case's': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'z': z1='\0', z2='0', z3='\0', z4='\0';break;
							case'x': z1='\0', z2='\0', z3='0', z4='\0';yup1=1;break;
							case'c': z1='\0', z2='\0', z3='\0', z4='0';break;
						}
						}
						if(i==2) // wprowadzenie drugiego ruchu dzwigni
						{
						kolo=getch();
						switch(kolo)
						{
							case's': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'z': z1='\0', z2='0', z3='\0', z4='\0';yup2=1;break;
							case'x': z1='\0', z2='\0', z3='0', z4='\0';break;
							case'c': z1='\0', z2='\0', z3='\0', z4='0';break;
						}
						}
						if(i==3) // wprowadzenie trzeciego ruchu dzwigni
						{
						kolo=getch();
						switch(kolo)
						{
							case's': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'z': z1='\0', z2='0', z3='\0', z4='\0';break;
							case'x': z1='\0', z2='\0', z3='0', z4='\0';break;
							case'c': z1='\0', z2='\0', z3='\0', z4='0';yup3=1;break;
						}
						} 
						if(i==4) // wprowadzenie czwartetgo ruchu dzwigni
						{
						kolo=getch();
						switch(kolo)
						{
							case's': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'z': z1='\0', z2='0', z3='\0', z4='\0';yup4=1;break;
							case'x': z1='\0', z2='\0', z3='0', z4='\0';break;
							case'c': z1='\0', z2='\0', z3='\0', z4='0';break;
						}
						} 
						if(i==4) // Tutaj petla sprawdza czy wprowadzone ruchy dzwigni by�y poprawne
						{
						if(yup1==1 && yup2==1 && yup3==1 && yup4==1) // Jesli te kombinacje sie zgadzaja to program zwraca 0 przenoszac nas do main.cpp
						{
							cout<<endl<<endl;	
						}
						else // W innym przypadku wraca nas na pocz�tek p�tli i j� zeruje (i=0). Za kazdym nie powodzeniem zmienna dead zwieksza swoj� warto�� o 1
						{
							cout<<endl<<"Zle";
							Sleep(900);
							i=0;
							yup1=0,yup2=0,yup3=0;
							z1='0', z2='\0', z3='\0', z4='\0';
							dead ++; 
							if (dead==3) // je�li nasza zmienna dead b�dzie mia�a warto�� r�wn� 3 giniemy.
							{
								Sleep(1500);
		        				PlaySound(TEXT("bearkill.wav"),NULL,SND_FILENAME | SND_ASYNC);
       						 	Sleep(2000);					
       					 		system("cls");
       					 		cout<<"\n > Przez futryne drzwi przebijaja sie kolce, ktore cie zabijaja.";
							  	lose();
							}
						}
						}
						system("cls");
					
					}
					d=1;
					PlaySound(TEXT("door.wav"),NULL,SND_FILENAME | SND_ASYNC);
					
} else cout<<"Wchodzisz do Pokoju 4";					
	return(0);
}


int instrukcja() // instrukcja gry
{
	using namespace std;
	system("cls");
	PlaySound(TEXT("rolldown.wav"),NULL,SND_FILENAME | SND_ASYNC);
	cout << endl << endl <<endl;
	cout << "                                _______ "<<endl;
	cout << "                               |       |"<<endl;
	cout << "                               |   S   | --- Powrot"<<endl;
	cout << "                               |_______|"<<endl;
	cout << "                        _______   _______   _______ "<<endl;
	cout << "                       |       | |       | |       |"<<endl;
	cout << "                       |   z   | |   x   | |   c   |"<<endl;
	cout << "                       |_______| |_______| |_______|"<<endl;
	cout << "                         /           |           \\" <<endl;
	cout << "                        /  Uzyj/przeszukaj rzecz  \\" <<endl;
	cout << "                       /                         Wez przedmiot " << endl;
	cout << "      Inspekcja przedmiotu" << endl << endl << endl << endl;
	getch();
	PlaySound(TEXT("rollup.wav"),NULL,SND_FILENAME | SND_ASYNC);
						
	return(0);
}

int lose() // ekran smierci
{
	using namespace std;
	cout<<"\n\n  __     ______  _    _    _      ____   _____ ______"<<endl;
	cout<<"  \\ \\   / / __ \\| |  | |  | |    / __ \\ / ____|  ____|"<<endl;
	cout<<"   \\ \\_/ / |  | | |  | |  | |   | |  | | (___ | |__   "<<endl;
	cout<<"    \\   /| |  | | |  | |  | |   | |  | |\\___ \\|  __|  "<<endl;
	cout<<"     | | | |__| | |__| |  | |___| |__| |____) | |____ "<<endl;
	cout<<"     |_|  \\____/ \\____/   |______\\____/|_____/|______|"<<endl;
	getch();
	getch();
	exit(0);
	
	return(0);
}
