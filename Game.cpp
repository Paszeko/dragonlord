//KAMIL BOGUMI£, DragonLord v1 @2017, Wszelkie prawa zastrzezone.
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int lvls[30];
int wilk[5];
int exp= 1000;
int wytrzymalosc;
int inteligencja;
int hp= wytrzymalosc;
int mana= inteligencja;
int tmp1= 10;
int level = 1;
int atak;
int unik;
int zmienna;
string M;
string G;
char X;
string imie;
int dmg=5;
void eq()
{
	cout<<"Twoj aktualny inwentarz sklada sie z..: "<<endl;
	if(exp==1000)
	{
		cout<<"Palka Bojowa DMG +5"<<endl;
		cout<<"Jaszczurza Zbroja HP +10"<<endl;
	}
}



void enter(){
	cout<<endl;
		cout<<endl;
			cout<<endl;
}


void tworcy()
{
cout<<"Tworcamy niniejszej gry jest: "<<endl<<"Kamil Bogumil"<<endl<<"Dominik Kludiewicz"<<endl<<"Sergiej Fedotov"<<endl<<"ALL RIGHTS RESERVED @2017"<<endl;

}


void kreator(){

cout<<"Podaj imie bohatera"<<endl;
cin>>imie;
Sleep(1000);
cout<<"Twoje imie to: "<<imie<<endl;
cout<<"Teraz Wybierz Statystyki poczatkowe "<<imie<<"a"<<endl;
do{

cout<<"Wytrzymalosc = max punktow 10 (Tylko CYFRY!)"<<endl;
cin>>wytrzymalosc;

if(wytrzymalosc>10)
{
	cout<<"Nie mozesz tego zrobic moj panie...max 10"<<endl;
}

}while (wytrzymalosc>10);

do{

cout<<"inteligencja = max punktow 10 (Tylko CYFRY!)"<<endl;
cin>>inteligencja;

if(inteligencja>10)
{
	cout<<"Nie mozesz tego zrobic moj panie...max 10"<<endl;
}

}while (inteligencja>10);

system("cls");
cout<<"Twoje Finalne statystki: "<<endl<<"HP: "<<wytrzymalosc*10<<endl<<"MANA: "<<inteligencja*1<<endl<<"Twoj obecny lvl: "<<level<<endl<<"Ilosc EXP: "<<exp<<endl<<"DMG"<<dmg<<endl;
enter();

}


void stats()
{
	cout<<"Twoje statystki: "<<endl<<"HP: "<<wytrzymalosc*10<<endl<<"MANA: "<<inteligencja*1<<endl<<"Twoj obecny lvl: "<<level<<endl<<"Ilosc EXP: "<<exp;
	if(dmg==5)
	{
	cout<<endl<<"DMG: "<<dmg<<endl;
	}
}


void menu(){

//MENU
cout<<"Wybierz opcje MENU"<<endl;
cout<<"[1]- Bohater"<<endl;
cout<<"[2]- EKWIPUNEK"<<endl;
cout<<"[3]- TWORCY"<<endl;
cout<<"[4]- WYJDZ Z MENU"<<endl;
cin>>zmienna;

switch(zmienna)
{
case 1:
   cout<<"Bohater: "<<endl<<imie<<endl;
   stats();
   Sleep(100);
cout<<"Wpisz ok aby kontynowac: "<<endl;
cin>>G;
if(G=="OK"|| G=="ok" )
{
	 Sleep(100);
		 system("cls");
menu();
}
else{
	if(G!="OK"|| G!="ok" )
	{
		cout<<"TY OSZUSCIE NIE WPISALES OK!!!!"<<endl;
		 Sleep(2000);
		 system("cls");
	}
}
    menu();
    break;

case 2:
    eq();
    Sleep(100);
cout<<"Wpisz ok aby kontynowac: "<<endl;
cin>>G;
if(G=="OK"|| G=="ok" )
{
	 Sleep(100);
		 system("cls");
menu();
}
else{
	if(G!="OK"|| G!="ok" )
	{
		cout<<"TY OSZUSCIE NIE WPISALES OK!!!!"<<endl;
		 Sleep(2000);
		 system("cls");
	}
}
    menu();
    break;

    //...
case 3:
    tworcy();
     Sleep(100);
cout<<"Wpisz ok aby kontynowac: "<<endl;
cin>>G;
if(G=="OK"|| G=="ok" )
{
	 Sleep(100);
		 system("cls");
menu();
}
else{
	if(G!="OK"|| G!="ok" )
	{
		cout<<"TY OSZUSCIE NIE WPISALES OK!!!!"<<endl;
		 Sleep(2000);
		 system("cls");
	}
}
    menu();
    break;
case 4:
	Sleep(100);
	cout<<"Wyjdz";
	for(int lol=0;lol<1;lol++)
	{
		cout<<"BUG"<<lol<<endl;
		system("cls");
	}
	break;
}
}

int main()
{
	system("mode 650");
    system("01.mp3");





	/*
	HANDLE okno = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD size;

    size.X = 1000;
    size.Y = 3000;

    SetConsoleScreenBufferSize(okno, size);
*/

cout<<"88888888ba,                                                                       88                                             88                                 888888 "<<endl;
cout<<"88        8b                                                                      88                                             88                    8b       d8      88 "<<endl;
cout<<"88         8b                                                                     88                                             88                    `8b     d8'      88   "<<endl;
cout<<"88         88  8b,dPPYba,  ,adPPYYba,   ,adPPYb,d8   ,adPPYba,   8b,dPPYba,       88            ,adPPYba,   8b,dPPYba,   ,adPPYb,88                     `8b   d8'       88  "<<endl;
cout<<"88         88  88P'    Y8           Y8  a8      Y88  a8      8a  88P      8a      88           a8       8a  88P     Y8  a8      Y88                      `8b,d8'        88  "<<endl;
cout<<"88         8P  88          ,adPPPPP88  8b       88  8b       d8  88       88      88           8b       d8  88          8b       88                         8           88  "<<endl;
cout<<"88      .a8P   88          88,    ,88   8a,   ,d88   8a,   ,a8   88       88      88            8a,   ,a8   88           8a,   ,d88                    "<<endl;
cout<<"88888888Y      88            8bbdP Y8    YbbdP Y8    YbbdP       88       88      88888888888     YbbdP     88            8bbdP Y8                     "<<endl;
cout<<endl;
cout<<"	_____________________________________________,d888 `____________ "<<endl;
cout<<"____________________________________________,d88`_ _____________ "<<endl;
cout<<"__________________________________________,d88`___ _____________ "<<endl;
cout<<"_________________________________________,d8`_____ _____________ "<<endl;
cout<<"_______________________________________,d8*_______ _____________ "<<endl;
cout<<"_____________________________________,d88*________ _____..d*`__ "<<endl;
cout<<"___________________________________,d88`_________. .d8*`________ "<<endl;
cout<<"_________________________________,d888`____..d8P*` _____________ "<<endl;
cout<<"_________________________._____,d8888*8888*`______ _____________ "<<endl;
cout<<"_______________________,*_____,88888*8P*__________ _____________ "<<endl;
cout<<"_____________________,*______d888888*8b.__________ _____________ "<<endl;
cout<<"___________________,P_______d8__*888.*888b._______ _____________ "<<endl;
cout<<"_________________,8*________8____*888__`*88888b._ _____________ "<<endl;
cout<<"_______________,d8________________*88___________*8 8b.__________ "<<endl;
cout<<"______________d8`__________________*8b____________ ___*8b.______ "<<endl;
cout<<"____________,d8`____________________*8.___________ _______*88b._ "<<endl;
cout<<"___________d8P_______________________88.__________ _____________ "<<endl;
cout<<"_________,88P________________________888__________ _____________ "<<endl;
cout<<"________d888*_______.d88P____________888__________ _____________ "<<endl;
cout<<"______d8888b..d888888*______________888__________ _____________ "<<endl;
cout<<"_____,888888888888888b.______________888__________ _____________ "<<endl;
cout<<"____,8*;88888P*788888888ba._____888___________ ____________ "<<endl;
cout<<"___,8;,8888*________`88888*__________d88*_________ ______________ "<<endl;
cout<<"___)8e888*__________,88888be.________888__________ ______________ "<<endl;
cout<<"__,d888`___________,8888888*_____d888___________ _____________ "<<endl;
cout<<"_,d88P`___________,8888888Pb._____d888`___________ _____________                                     KAMIL BOGUMIL"<<endl;
cout<<"_888*____________,88888888*___.d8888*____________ _____________                                      DOMINIK KLUDKIEWICZ"<<endl;
cout<<"_`88____________,888888888____.d88888b____________ _____________                                     SERGIEJ FEDOTOV"<<endl;
cout<<"__`P___________,8888888888bd888888*_______________ _____________ "<<endl;
cout<<"_______________d888888888888d888*_________________ _____________ "<<endl;
cout<<"_______________8888888888888888b._________________ _____________ "<<endl;
cout<<"_______________88*._*88888888888b.________.db_____ _____________ "<<endl;
cout<<"_______________`888b.`8888888888888b._.d8888P_____ _____________ "<<endl;
cout<<"________________*88b.`*8888888888888888888888b... _____________ "<<endl;
cout<<"_________________*888b.`*8888888888P*78888888888 88e.________ "<<endl;
cout<<"__________________88888b.`*.d8888b*`88888P *___________ "<<endl;
cout<<"__________________`888888b_____.d88888888888*`888 8.___________ "<<endl;
cout<<"___________________)888888.___d888888888888P___`88 88888b.______ "<<endl;
cout<<"__________________,88888*____d88888888888*`____`8 888b_________ "<<endl;
cout<<"_________________,8888*____.8888888888P`__________ `888b.________ "<<endl;
cout<<"________________,888*______888888888b...__________ __`888P88b.____ "<<endl;
cout<<"_______.db.___,d88*________88888888888888b________ __`8888_______ "<<endl;
cout<<"___,d888888b.8888`_________`*888888888888888888P`_ __`888b._____ "<<endl;
cout<<"__/*8888b*`______________`*8888P*``8888`______ _`8888b.__ "<<endl;
cout<<"_______/*88`_________________.ed8b..__.d888P`____________ `88888_ "<<endl;
cout<<"____________________________d8*888888888P*_______ ________`88b_ "<<endl;
cout<<"___________________________(*``,d8888*`_________ ___________`88 "<<endl;
cout<<"______________________________(*`_________________ ______________`8 "<<endl;
enter();
/*
Beep(523,500);
Beep(587,500);
Beep(659,500);
Beep(698,500);
Beep(784,800);
Beep(784,500);
Beep(876,400);
Beep(876,400);
Beep(876,400);
Beep(876,400);
Beep(784,800);
Beep(876,400);
Beep(876,400);
Beep(876,400);
Beep(876,400);
Beep(784,800);
Beep(698,400);
Beep(698,400);
Beep(698,400);
Beep(698,400);
Beep(659,700);
Beep(659,500);
Beep(587,400);
Beep(587,400);
Beep(587,400);
Beep(587,400);
Beep(523,1000);

*/


cout<<"Witaj w DragonLord (v.1.00) graczu, Milej zabawy w tego TextRPGa!! "<<endl;
Sleep(1000);


kreator();

//KOD ODPOWIEDZIALNY ZA ODNOSZENIE SIE DO MENU
cout<<"Czy chcesz uzyc MENU ? TAK LUB NIE"<<endl;
cin>>M;
system("cls");
if(M=="TAK"|| M=="tak" || M=="Tak" )
{

menu();

}

/*else{
	Sleep(200);
	cout<<"Poczatek";
	Sleep(200);
}
*/
/////////////////////////////////////////////////////////START FABU£Y///////////////////////////////////////////////////////////////////////////////////////////////////////
	Sleep(200);
	cout<<"Poczatek"<<endl;
	
	
	
system("taskkill /F /IM winamp.exe");//dla starszych systemow	
system("cls");
system("taskkill /F /IM wmplayer.exe");//dla starszych systemow
system("cls");
system("taskkill /F /IM Music.UI.exe");//dla windows 10
system("cls");








	Sleep(200);
	cout<<"To juz koniec naszej histori, dziekujemy!"<<endl;
	
	
system("pause");

















return 0;
}








