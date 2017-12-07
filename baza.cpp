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
	for (o=1,p=0 ; p>=0 && o>0;)
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
		if (p==0) cout<<"                           |        > START <        |\n"; else cout<<"                           |          START          |\n";
		if (p==1) cout<<"                           |       > WCZYTAJ <       |\n"; else cout<<"                           |         WCZYTAJ         |\n";
		if (p==2) cout<<"                           |      > INSTRUKCJA <     |\n"; else cout<<"                           |        INSTRUKCJA       |\n";
		if (p==3) cout<<"                           |        > TWORCA <       |\n"; else cout<<"                           |          TWORCA         |\n";
		if (p==4) cout<<"                           |      > WYJDZ Z GRY <    |\n"; else cout<<"                           |        WYJDZ Z GRY      |\n";
		cout << "                           ---------------------------"<<endl;
		wybor=getch();
		PlaySound(TEXT("choice.wav"),NULL,SND_FILENAME | SND_ASYNC);
		switch(wybor)
		{
			case'w':
				if(p==0) break;
				else {	p--;
				break;	}
			case's':
				if(p==4) break;
				else {	p++;
				break;	}
			case'a':
				o=0;
				break;				
		}	
	}
	if(p==0) {system("cls"); return(0);}
	//if(p==1) loadgame1();
	if(p==2) instrukcja();
	if(p==3) tworca();
	if(p==4) exit(0);
	goto MENU;
	}
	
int tworca()
{
using namespace std;
system("cls");
PlaySound(TEXT("rolldown.wav"),NULL,SND_FILENAME | SND_ASYNC);
cout << "\n\n\n\n\n\n\n\n\n                                ART DESIGN\n "<<endl;
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


int loading1()
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
        PlaySound(TEXT("choice.wav"),NULL,SND_FILENAME | SND_ASYNC);
}
int klodka()
{
using namespace std;
int k;
char a='0', b='0', c='0';

	if (k!=1) 
				{
					for (int i=1; i<=4; i++)
					{
						cout<<"\n                           .------------."<<endl;
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
						if(i==1) a=getch();
						if(i==2) b=getch();
						if(i==3) c=getch();
						if(i==4) 
						{
						if(a=='2' && b=='5' && c=='2')
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
					cout<<"brawo";
					
}	
else cout<<"Wchodzisz do Pokoju 3";
return(0);		
}




int dzwignia()
{
using namespace std;
int d, yup1, yup2, yup3, yup4;
char z1='0', z2, z3, z4, kolo;

	if (d!=1) 
				{
					for (int i=1; i<=5; i++)
					{
						cout<<"     ---"<<endl;
						cout<<"    | ";cout<<z1;cout<<" |"<<endl;
						cout<<" ---     ---"<<endl;
						cout<<"|";cout<<z2;cout<<"         ";cout<<z4;cout<<"|"<<endl;
						cout<<" ---     ---"<<endl;
						cout<<"    | ";cout<<z3;cout<<" |"<<endl;
						cout<<"     ---"<<endl;
							
						if(i==1)
						{
						kolo=getch();
						switch(kolo)
						{
							case'w': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'a': z1='\0', z2='0', z3='\0', z4='\0';break;
							case's': z1='\0', z2='\0', z3='0', z4='\0';yup1=1;break;
							case'd': z1='\0', z2='\0', z3='\0', z4='0';break;
						}
						}
						if(i==2) 
						{
						kolo=getch();
						switch(kolo)
						{
							case'w': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'a': z1='\0', z2='0', z3='\0', z4='\0';yup2=1;break;
							case's': z1='\0', z2='\0', z3='0', z4='\0';break;
							case'd': z1='\0', z2='\0', z3='\0', z4='0';break;
						}
						}
						if(i==3)
						{
						kolo=getch();
						switch(kolo)
						{
							case'w': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'a': z1='\0', z2='0', z3='\0', z4='\0';break;
							case's': z1='\0', z2='\0', z3='0', z4='\0';break;
							case'd': z1='\0', z2='\0', z3='\0', z4='0';yup3=1;break;
						}
						} 
						if(i==4)
						{
						kolo=getch();
						switch(kolo)
						{
							case'w': z1='0', z2='\0', z3='\0', z4='\0';break;
							case'a': z1='\0', z2='0', z3='\0', z4='\0';yup4=1;break;
							case's': z1='\0', z2='\0', z3='0', z4='\0';break;
							case'd': z1='\0', z2='\0', z3='\0', z4='0';break;
						}
						} 
						if(i==4) 
						{
						if(yup1==1 && yup2==1 && yup3==1 && yup4==1)
						{
							cout<<endl<<endl;	
						}
						else
						{
							cout<<endl<<"Zle";
							Sleep(900);
							i=0;
							yup1=0,yup2=0,yup3=0;
							z1='0', z2='\0', z3='\0', z4='\0';
						}
						}
						system("cls");
					
					}
					d=1;
					cout<<"Brawo";
					getch();
					
} else cout<<"Wchodzisz do Pokoju 4";					
	return(0);
}


int instrukcja()
{
	using namespace std;
	system("cls");
	PlaySound(TEXT("rolldown.wav"),NULL,SND_FILENAME | SND_ASYNC);
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
	getch();
	PlaySound(TEXT("rollup.wav"),NULL,SND_FILENAME | SND_ASYNC);
					
	return(0);
}
