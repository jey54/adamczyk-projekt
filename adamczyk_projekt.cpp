#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

bool czyPolnapol = false;
bool czyTelefon = false;
bool czyZamiana = false;
char k = 'x';
char znaklg = 201;
char znakpg = 187;
char znakld = 200;
char znakpd = 188;
char znakpo = 205;
char znakpi = 186;
char znakz = 141;
char t;
string polnapol;
string telefon;
string zamiana;

// napis na koncu gry
bool koniecGry(string poprawnaOdp, string wygrana)
{
	string odp;
	system("cls");
	cout << "Poprawna odpowiedz to: " << poprawnaOdp << endl;
	cout << "Wygrana " << wygrana << "PLN" << endl;
	cout << "Sprobuj ponownie - s" << endl;
	cout << "Zakoncz - z" << endl << endl;

	cin >> odp;

	if (odp == "s") return false;
	else if (odp == "z") return true;
	else koniecGry(poprawnaOdp, wygrana);
}
// kolo ratunkowe telefon
void telefonFun(string odp) {
	cout << "Poprawna odpowiedz to: " << odp << endl << endl;
}
// po wykorzystaniu kola ratunkowego bedzie napis wykorzystane
void aktualizujKola() {
	polnapol = "1. 50/50 ";
	polnapol += czyPolnapol ? "-Wykorzystane-" : "";
	telefon = "2. Telefon do przyjaciela ";
	telefon += czyTelefon ? "-Wykorzystane-" : "";
	zamiana = "3. Zamiana pytanie ";
	zamiana += czyZamiana ? "-Wykorzystane-" : "";
}

bool pytanie12()
{

	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();


	    cout << "Pytanie 12" << endl;
        if (pytanie == 1) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Rezyserem polskiego filmu Kler jest:" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Juliusz Machulski " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2){
				cout << "b)Patryk Vega" << endl;
			}
			cout << "c)Wojciech Smarzowski " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Tomasz Konecki " << endl << endl;
			}
		}
		else {
			cout << "a)Juliusz Machulski ";
			cout << "b)Patryk Vega" << endl;
			cout << "c)Wojciech Smarzowski ";
			cout << "d)Tomasz Konecki " << endl << endl;
		}

	}


	else if (pytanie == 2) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Czyj wizerunek widnieje na banknocie 100-zlotowym" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Mieszko " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Kazimierz III Wielki" << endl;
			}
			cout << "c)Wladyslaw II Jagiello " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Zygmunt I Stary " << endl << endl;
			}
		}
		else {
			cout << "a)Mieszko ";
			cout << "b)Kazimierz III Wielki" << endl;
			cout << "c)Wladyslaw II Jagiello ";
			cout << "d)Zygmunt I Stary " << endl << endl;

		}
	}

	else if (pytanie == 3) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jaka czesc ciala czlowieka powieksza sie dziesieciokrotnie?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "d)Przepona " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Pecherz" << endl;
			}
			cout << "a)Zrenica " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Watroba " << endl << endl;
			}
		}
		else {
			cout << "a)Zrenica ";
			cout << "b)Pecherz" << endl;
			cout << "c)Watroba ";
			cout << "d)Przepona " << endl << endl;

		}
	}

	else if (pytanie == 4) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "W ktorym roku odbyla sie pierwsza zalogowa misja lotu na Ksiezyc?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)1991 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)1957" << endl;
			}
			cout << "d)1969 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)1978 " << endl << endl;
			}
		}
		else {
			cout << "a)1991 ";
			cout << "b)1957" << endl;
			cout << "c)1978 ";
			cout << "d)1969 " << endl << endl;

		}
	}


	else if (pytanie == 5) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Ile bylo astronautow w programie Mercury?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)9 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2){
				cout << "b)5" << endl;
			}
			cout << "c)7 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)4 " << endl << endl;
			}
		}
		else {
			cout << "a)9 ";
			cout << "b)5" << endl;
			cout << "c)7 ";
			cout << "d)4 " << endl << endl;
		}
	}
	odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		cout<<"Wygrana"<<endl;
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "1 000 000");
	}
	else {
		goto generowaniePytania;
	}
}

bool pytanie11()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();


		cout << "Pytanie 11" << endl;
		if (pytanie == 1) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "W ktorym kraju powstala marka samochodow KTM" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "d)Niemcy " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Dania" << endl;
			}
			cout << "a)Austria " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)USA " << endl << endl;
			}
		}
		else {
			cout << "a)Austria ";
			cout << "b)Dania" << endl;
			cout << "c)USA ";
			cout << "d)Niemcy " << endl << endl;
		}

	}

	else if (pytanie == 2) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Ile metrow ma figura Jezusa w Swiebodzinie?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)24m " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "c)19m" << endl;
			}
			cout << "b)36m " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)39m " << endl << endl;
			}
		}
		else {
			cout << "a)24m ";
			cout << "b)36m" << endl;
			cout << "c)19m ";
			cout << "d)39m " << endl << endl;
		}

	}


	else if (pytanie == 3) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Ile jest roztapiajacych sie zegarow na obrazie Trwalosc pamieci Salvadora Dali" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)6 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)1" << endl;
			}
			cout << "d)3 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)0 " << endl << endl;
			}
		}
		else {
			cout << "a)6 ";
			cout << "b)1" << endl;
			cout << "c)0 ";
			cout << "d)3 " << endl << endl;
		}

	}

	else if (pytanie == 4) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "W ktorym roku marka Xiaomi, wydala pierwszego smartphona?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "d)2016 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2){
				cout << "b)2014" << endl;
			}
			cout << "a)2011 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)2013 " << endl << endl;
			}
		}
		else {
			cout << "a)2011 ";
			cout << "b)2014" << endl;
			cout << "c)2013 ";
			cout << "d)2016 " << endl << endl;
		}

	}


	else if (pytanie == 5) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jakiego zwierzecia brakuje w tytule tej ksiazki? Wolnosc..." << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Golebia " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "d)Bociana" << endl;
			}
			cout << "b)Jaskolki " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Kreta " << endl << endl;
			}
		}
		else {
			cout << "a)Golebia ";
			cout << "b)Jaskolki" << endl;
			cout << "c)Kreta ";
			cout << "d)Bociana " << endl << endl;
		}

	}
	odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie12();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "40 000");
	}
	else {
		goto generowaniePytania;
	}
}

bool pytanie10()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();


		cout << "Pytanie 10" << endl;
		if (pytanie == 1) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Czemu towarzyszy wstrzas anafilaktyczny" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "d)Reanimacji " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Zlamaniu" << endl;
			}
			cout << "a)Uczuleniu " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Migrenie " << endl << endl;
			}
		}
		else {
			cout << "a)Uczuleniu ";
			cout << "b)Zlamaniu" << endl;
			cout << "c)Migrenie ";
			cout << "d)Reanimacji " << endl << endl;
		}

	}

	else if (pytanie == 2) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "W uprawie ziemniakow ciepla i wilgotna pogoda sprzyja rozwojowi:" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)Alternariozy " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "c)Raka Ziemniaka" << endl;
			}
			cout << "b)Zarazy Ziemniakow " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Rizoktonizy " << endl << endl;
			}
		}
		else {
			cout << "a)Alternariozy ";
			cout << "b)Zarazy Ziemniakow" << endl;
			cout << "c)Raka Ziemniaka ";
			cout << "d)Rizoktonizy " << endl << endl;
		}

	}


	else if (pytanie == 3) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Co nie siada na doskonalosci?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Szerszen " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "d)Osa" << endl;
			}
			cout << "b)Mucha " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Komar " << endl << endl;
			}
		}
		else {
			cout << "a)Szerszen ";
			cout << "b)Mucha" << endl;
			cout << "c)Komar ";
			cout << "d)Osa " << endl << endl;
		}

	}

	else if (pytanie == 4) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jak brzmialo prawdziwe imie i nazwisko Jozefa Stalina?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Jozef Stalin " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Losif Stalin" << endl;
			}
			cout << "c)Losif Wissarionowicz Dzugaszwili " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Jozef Stalingradzki " << endl << endl;
			}
		}
		else {
			cout << "a)Jozef Stalin  ";
			cout << "b)Losif Stalin" << endl;
			cout << "c)Losif Wissarionowicz Dzugaszwili ";
			cout << "d)Jozef Stalingradzcki " << endl << endl;
		}

	}


	else if (pytanie == 5) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Najwiekszy dom whisky w Polsce znajduje sie w :" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Wladyslawowie " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "c)Gdansku" << endl;
			}
			cout << "b)Jastrzebiej Gorze " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "d)Wroclawiu " << endl << endl;
			}
		}
		else {
			cout << "a)Wladyslawowie ";
			cout << "b)Jastrzebiej Gorze" << endl;
			cout << "c)Gdansku ";
			cout << "d)Wroclawiu " << endl << endl;
		}

	}
	odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie11();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "40 000");
	}
	else {
		goto generowaniePytania;
	}
}

bool pytanie9()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();


		cout << "Pytanie 9" << endl;
		if (pytanie == 1) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Nagromadzenie, skupienie czegos, to co zostalo skupione, skupisko to:" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "d)Konfabulacja " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Emancypancja" << endl;
			}
			cout << "a)Aglomeracja " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Abominacja " << endl << endl;
			}
		}
		else {
			cout << "a)Aglomeracja ";
			cout << "b)Emancypancja" << endl;
			cout << "c)Abominacja ";
			cout << "d)Konfabulacja " << endl << endl;
		}

	}

	else if (pytanie == 2) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "W ktorym roku zatonal Tytanik?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)1922 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2){
				cout << "b)1892" << endl;
			}
			cout << "d)1912 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)1902 " << endl << endl;
			}
		}
		else {
			cout << "a)1922 ";
			cout << "b)1892" << endl;
			cout << "c)1902 ";
			cout << "d)1912 " << endl << endl;
		}
	}


	else if (pytanie == 3) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Gdzie znajduje sie kolumna Zygmunta" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)W Krakowie " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2){
				cout << "b)W Poznaniu" << endl;
			}
			cout << "c)W Warszawie " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "d)W Gdansku " << endl << endl;
			}
		}
		else {
			cout << "a)W Krakowie ";
			cout << "b)W Poznaniu" << endl;
			cout << "c)W Warszawie ";
			cout << "d)W Gdansku " << endl << endl;
		}

	}

	else if (pytanie == 4) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Przed kim bronia sie Chinczycy w animacji Mulan?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Przed Imperium Osmanskim " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2){
				cout << "b)Przed Japonczykami" << endl;
			}
			cout << "d)Przed Hunami " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "c)Przed Brytyjczykami " << endl << endl;
			}
		}
		else {
			cout << "a)Przed Imperium Osmanskim ";
			cout << "b)Przed Japonczykami" << endl;
			cout << "c)Przed Brytyjczykami ";
			cout << "d)Przed Hunami " << endl << endl;
		}

	}


	else if (pytanie == 5) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "W ktorym roku wybuchla rewolucja bolszewicka" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)1922 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)1914" << endl;
			}
			cout << "d)1917 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)1929 " << endl << endl;
			}
		}
		else {
			cout << "a)1922 ";
			cout << "b)1914" << endl;
			cout << "c)1929 ";
			cout << "d)1917 " << endl << endl;
		}

	}
	odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie10();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "40 000");
	}
	else {
		goto generowaniePytania;
	}
}

bool pytanie8()
{
int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();

		cout << "pytanie 8" << endl;
        if (pytanie == 1) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Ktora polska granica ladowa jest najkrotsza?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)Z Rosia " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "c)Ze Slowacja" << endl;
			}
			cout << "b)Z Litwa " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Z Bialorusia " << endl << endl;
			}
		}
		else {
			cout << "a)Z Rosia ";
			cout << "b)Z Litwa" << endl;
			cout << "c)Ze Slowacja ";
			cout << "d)Z Bialorusia " << endl << endl;
		}

		}

	if (pytanie == 2) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Nastepca, jakiego modelu Fiata jest Linea?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Bravo " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2){
				cout << "b)126p" << endl;
			}
			cout << "c)Albei " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "d)Punto " << endl << endl;
			}
		}
		else {
			cout << "a)Bravo ";
			cout << "b)126p" << endl;
			cout << "c)Albei ";
			cout << "d)Punto " << endl << endl;
		}

		}


	else if (pytanie == 3) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "W ktorym kraju powstala marka samochodow Nissan?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Korea Poludniowa " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2){
				cout << "b)Nowa Zelandia" << endl;
			}
			cout << "c)Japonia " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Chiny " << endl << endl;
			}
		}
		else {
			cout << "a)Korea Poludniowa ";
			cout << "b)Nowa Zelandia" << endl;
			cout << "c)Japonia ";
			cout << "d)Chiny " << endl << endl;
		}

		}

	if (pytanie == 4) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jaka powierzchnie w przyblizeniu ma Polska?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)1885 km2 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)450 tys. km2" << endl;
			}
			cout << "d)313 tys. km2 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "c)289 tys. km2 " << endl << endl;
			}
		}
		else {
			cout << "a)1885 km2 ";
			cout << "b)450 tys. km2" << endl;
			cout << "c)289 tys. km2 ";
			cout << "d)313 tys. km2 " << endl << endl;
		}

		}


 if (pytanie == 5) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jaki film jako pierwszy zostal wydany na DVD?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "d)Wladca Pierscieni " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Matrix" << endl;
			}
			cout << "a)Twister " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Tytanic " << endl << endl;
			}
		}
		else {
			cout << "a)Twister ";
			cout << "b)Matrix" << endl;
			cout << "c)Tytanic ";
			cout << "d)Wladca Pierscieni " << endl << endl;
		}

	}
	odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie9();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "40 000");
	}
	else {
		goto generowaniePytania;
	}
}

bool pytanie7()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();
//cout<<"Pytanie 7"<<endl;endl;
	if (pytanie == 1) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jakie kolory ma flaga Francji?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)granatowy, bialy i zloty " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)granatowy, zloty i czerwony" << endl;
			}
			cout << "c)granatowy, bialy i czerwony " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)zielony, bialy i czerwony " << endl << endl;
			}
		}
		else {
			cout << "a)granatowy, bialy i zolty ";
			cout << "b)granatowy, zolty i czerwony" << endl;
			cout << "c)garanatowy, bialy i czerwony ";
			cout << "d)zielony, bialy i czerwony " << endl << endl;
		}

	}

	else if (pytanie == 2) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Ktore z wymienionych panstw nie nalezalo do ZSRR" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "d)Bialorus " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Kazachstan" << endl;
			}
			cout << "a)Turcja " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Ukraina " << endl << endl;
			}
		}
		else {
			cout << "a)Turcja ";
			cout << "b)Kazachstan" << endl;
			cout << "c)Ukraina ";
			cout << "d)Bialorus " << endl << endl;
		}

		}



	else if (pytanie == 3) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jaka bronia poslugiwal sie Apollo?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Pistoletem " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Mieczem" << endl;
			}
			cout << "c)Lukiem " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Wlocznia " << endl << endl;
			}
		}
		else {
			cout << "a)Pistoletem ";
			cout << "b)Mieczem" << endl;
			cout << "c)Lukiem ";
			cout << "d)Wlocznia " << endl << endl;
		}

		}


	else if (pytanie == 4) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jakie jest prawdziwe imie i nazwisko The Rocka?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)Vin Diesel " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Jackie Chan" << endl;
			}
			cout << "c)Dwayn Johnson " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Sylvester Stallone " << endl << endl;
			}
		}
		else {
			cout << "a)Vin Diesel ";
			cout << "b)Jackie Chan" << endl;
			cout << "c)Dwayn Johnson ";
			cout << "d)Sylvester Stallone " << endl << endl;
		}

		}



	else if (pytanie == 5) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Ktore miasto w Polsce, jest na drugim miejscu pod wzgledem zaludnienia" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "d)Szczecin " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Katowice" << endl;
			}
			cout << "a)Krakow " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "c)Lodz " << endl << endl;
			}
		}
		else {
			cout << "a)Krakow ";
			cout << "b)Katowice" << endl;
			cout << "c)Lodz ";
			cout << "d)Szczecin " << endl << endl;
		}

		}
		odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie8();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "1 000");
	}
	else {
		goto generowaniePytania;
	}

}

bool pytanie6()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();
 cout<<"Pytanie 6"<<endl;
	 if (pytanie == 1) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Kto zostal Mistrzem Europy w 2016 roku w pilce noznej?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)Polska " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "d)Niemcy" << endl;
			}
			cout << "b)Portugalia " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Francja " << endl << endl;
			}
		}
		else {
			cout << "a)Polska ";
			cout << "b)Portugalia" << endl;
			cout << "c)Francja ";
			cout << "d)Niemcy " << endl << endl;
		}

	}

	 if (pytanie == 2) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Kto byl owocem kazirodczego zwiazku w serialu Gra o Tron" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Samwell Tarly " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "d)Jon Snow" << endl;
			}
			cout << "b)Joffrey Baratheon " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "c)Theon Greyjoy " << endl << endl;
			}
		}
		else {
			cout << "a)Samwell Tarly ";
			cout << "b)Joffrey Baratheon" << endl;
			cout << "c)Theon Greyjoy ";
			cout << "d)Jon Snow " << endl << endl;
		}
	 }


	else if (pytanie == 3) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Pizza Bianca to rodzaj pizzy" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "d)Z mozarella " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Z podwojnym serem " << endl;
			}
			cout << "a)Bez sosu pomidorowego " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Z majonezem " << endl << endl;
			}
		}
		else {
			cout << "a)Bez sosu pomidorowego ";
			cout << "b)Z podwojnym serem" << endl;
			cout << "c)Z majonezem ";
			cout << "d)Z mozarella " << endl << endl;
		}
	}

	else if (pytanie == 4) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Z ilu kregow zbudowany jest kregoslup?" << endl << endl;

		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "d)39 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)37" << endl;
			}
			cout << "a)33-34 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)35-36 " << endl << endl;
			}
		}
		else {
			cout << "a)33-34 ";
			cout << "b)37" << endl;
			cout << "c)35-36 ";
			cout << "d)39 " << endl << endl;
		}
	}


	else if (pytanie == 5) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Ile pieter ma Palac Kultury i Nauki?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)38 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2){
				cout << "d)53" << endl;
			}
			cout << "b)42 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)27 " << endl << endl;
			}
		}
		else {
			cout << "a)38 ";
			cout << "b)42" << endl;
			cout << "c)27 ";
			cout << "d)53 " << endl << endl;
		}
	}
	odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie7();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "1 000");
	}
	else {
		goto generowaniePytania;
	}
}

bool pytanie5()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();
cout<<"Pytanie 5"<<endl;
	 if (pytanie == 1) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Z jakiego filmu jest cytat: Ciemnosc, widze ciemnosc" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)Mis " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "d)Brunet wieczorowa pora" << endl;
			}
			cout << "b)Seksmisja " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Rozmowy kontrolowane " << endl << endl;
			}
		}
		else {
			cout << "a)Mis ";
			cout << "b)Seksmisja" << endl;
			cout << "c)Rozmowy kontrolowane ";
			cout << "d)Brunet wieczorowa pora " << endl << endl;
		}
	}

	 if (pytanie == 2) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Ktore miasto jest stolica Australii" << endl << endl;
	if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)Waszyngton " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "d)Brisbane" << endl;
			}
			cout << "b)Canberra " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "c)Sydney " << endl << endl;
			}
		}
		else {
			cout << "a)Waszyngton ";
			cout << "b)Canberra" << endl;
			cout << "c)Sydney ";
			cout << "d)Brisbane " << endl << endl;
		}

	}


	 if (pytanie == 3) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jak nazywal sie syn Rumcajsa?" << endl << endl;
	if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "d)Rumcajs nie mial syna " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Marianek" << endl;
			}
			cout << "a)Cypisek " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Karolek " << endl << endl;
			}
		}
		else {
			cout << "a)Cypisek ";
			cout << "b)Marianek" << endl;
			cout << "c)Karolek ";
			cout << "d)Rumcajs nie mial syna " << endl << endl;
		}
	}

	if (pytanie == 4) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Czym jest PHP" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Programem komputerowym " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Protokolem internetowym" << endl;
			}
			cout << "c)Jezykiem programowania " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "d)Interfejsem " << endl << endl;
			}
		}
		else {
			cout << "a)Programwm komputerowym ";
			cout << "b)Protokolem internetowym" << endl;
			cout << "c)Jezykiem programowania ";
			cout << "d)Interfejsem " << endl << endl;
		}

	}


	 if (pytanie == 5) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Gdzie znajduje sie najwyzszy punkt w Polsce?" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)W Szczecinie " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)W Gdansku" << endl;
			}
			cout << "c)W Raczkach Elblaskich " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4){
				cout << "d)W Elblagu " << endl << endl;
			}
		}
		else {
			cout << "a)W Szczecinie ";
			cout << "b)W Gdansku" << endl;
			cout << "c)W Raczkach Elblaskich ";
			cout << "d)W Elblagu " << endl << endl;
		}

	}
	odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie6();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "1 000");
	}
	else {
		goto generowaniePytania;
	}
}

bool pytanie4()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();
cout<<"Pytanie 4"<<endl;
	if (pytanie == 1) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;


		cout << "Ile lat byla Polska pod zaborami" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)112 " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "c)135" << endl;
			}
			cout << "b)123 " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)141 " << endl << endl;
			}
		}
		else {
			cout << "a)112 ";
			cout << "b)123" << endl;
			cout << "c)135 ";
			cout << "d)141 " << endl << endl;
		}
	}

	else if (pytanie == 2) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Ktore miasto bylo pierwsza stolica Polski" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Krakow " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Warszawa" << endl;
			}
			cout << "d)Gniezno " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Poznan " << endl << endl;
			}
		}
		else {
			cout << "a)Krakow ";
			cout << "b)Warszawa" << endl;
			cout << "c)Poznan ";
			cout << "d)Gniezno " << endl << endl;
		}
	}


	else if (pytanie == 3) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Waluta japonii to..." << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Dolar japonski " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "d)Won" << endl;
			}
			cout << "b)Jen " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Yuan " << endl << endl;
			}
		}
		else {
			cout << "a)Dolar japonski ";
			cout << "b)Jen" << endl;
			cout << "c)Yuan ";
			cout << "d)Won " << endl << endl;
		}
	}




else if (pytanie == 4) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Lek przed otwarciem oczu to:" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)Bronofobia " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Androfobia" << endl;
			}
			cout << "d)Optofobia " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Zoofobia " << endl << endl;
			}
		}
		else {
			cout << "a)Bronofobia ";
			cout << "b)Androfobia" << endl;
			cout << "c)Zoofobia ";
			cout << "d)Optofobia " << endl << endl;
		}
}

	else if (pytanie == 5) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jak nazywa sie czwarta planeta od slonca" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Wenus " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Merkury" << endl;
			}
			cout << "d)Mars " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Ziemia " << endl << endl;
			}
		}
		else {
			cout << "a)Wenus ";
			cout << "b)Merkury" << endl;
			cout << "c)Ziemia ";
			cout << "d)Mars " << endl << endl;
		}
	}

	odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie5();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "1 000");
	}
	else {
		goto generowaniePytania;
	}
}

bool pytanie3()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();

	cout << "Pytanie 3" << endl << endl;

	if (pytanie == 1) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Teatr narodzil sie w:" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Rzymie " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Chinach" << endl;
			}
			cout << "d)Grecji " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Babilonie " << endl << endl;
			}
		}
		else {
			cout << "a)Rzymie ";
			cout << "b)Chinach" << endl;
			cout << "c)Bablionie ";
			cout << "d)Grecji " << endl << endl;
		}


	}

		else if (pytanie == 2) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Z jakiego obszaru pochodzily pierwsze koty domowe" << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Ze srodkowej Azji " << endl;
			}
			if (usunPytanie1 != 3 && usunPytanie2 != 3) {
				cout << "c)Z polnocnej Europy" << endl;
			}
			cout << "b)Z polnocnej Afryki " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Z poludniowej Ameryki " << endl << endl;
			}
		}
		else {
			cout << "a)Ze srodkowej Azji ";
			cout << "b)Z polnocnej Afryki" << endl;
			cout << "c)Z polnocnej Europy ";
			cout << "d)Z poludniowej Ameryki " << endl << endl;
		}

	}


		if (pytanie == 3) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Nie wtykaj nosa..." << endl << endl;
		if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)Bo ci go utna " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)W sasiadow sparwy" << endl;
			}
			cout << "d)W nie sowje sprawy " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Gdy masz katar " << endl << endl;
			}
		}
		else {
			cout << "a)Bo ci go utna ";
			cout << "b)W sprawy sasiadow" << endl;
			cout << "c)Gdy masz katar ";
			cout << "d)W nie swoje sprawy " << endl << endl;
		}

		}

	else if (pytanie == 4) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;

		cout << "Jaka rzeka plynie przez Hades?" << endl << endl;
		 if(czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1)  {
				cout << "a)Amur " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Skamander" << endl;
			}
			cout << "d)Styks " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "c)Nil " << endl << endl;
			}
		}
		else {
			cout << "a)Amur ";
			cout << "b)Skamander" << endl;
			cout << "c)Nil ";
			cout << "d)Styks " << endl << endl;
		}

	}


	else if (pytanie == 5) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;


		cout << "Jakiego zwierzecia brakuje w tytule ksiazki? O...,ktory wrocil do domu" << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) Australia" << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) Ameryka Poludniowa" << endl;
			}
			if (usunPytanie1 != 3 && usunPytanie2 != 3) {
				cout << "c) Europa " << endl;
			}
			cout << "d) Ameryka Polnocna " << endl;
		}

		if  (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a)Kocie " << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b)Kroliku" << endl;
			}
			cout << "c)Psie " << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Koniu " << endl << endl;
			}
		}
		else {
			cout << "a)Kocie ";
			cout << "b)Kroliku" << endl;
			cout << "c)Psie ";
			cout << "d)KOniu " << endl << endl;
		}
	}

		odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie4();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "1 000");
	}
	else {
		goto generowaniePytania;
	}
	}

bool pytanie2()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();

	cout << "Kola ratunkowe:" << endl;
	cout << polnapol << endl;
	cout << telefon << endl;
	cout << zamiana << endl << endl;
	cout << "Pytanie 2" << endl << endl;

	if (pytanie == 1) {
		poprawnaOdp = "a";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Ktory samochod jest wloski" << endl << endl;
		if (czyUzycPolnapol) {
			cout << "a) Ferrari" << endl;
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) Ford" << endl;
			}
			if (usunPytanie1 != 3 && usunPytanie2 != 3) {
				cout << "c) Peugeot" << endl;
			}
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d)Dacia" << endl;
			}
		}
		else {
			cout << "a)Ferrari ";
			cout << "b)Ford" << endl;
			cout << "c)Peugeot ";
			cout << "d)Dacia " << endl;
		}
		cout << endl;
	}
	else if (pytanie == 2) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Jednostki mocy w ukladzie MKS to mechaniczne:" << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) Slonie" << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) Psy" << endl;
			}
			cout << "c) Konie" << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d) Koty" << endl;
			}
		}
		else {
			cout << "a) Slonie" << endl;
			cout << "b) Psy" << endl;
			cout << "c) Konie" << endl;
			cout << "d) Koty" << endl;
		}
		cout << endl;
	}
	else if (pytanie == 3) {
		poprawnaOdp = "b";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Ile trwa ruch obiegowy Ziemi?" << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) 356 dni" << endl;
			}
			cout << "b) 365 dni" << endl;
			if (usunPytanie1 != 3 && usunPytanie2 != 3) {
				cout << "c) 12 h" << endl;
			}
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d) 24 h" << endl;
			}
		}
		else {
			cout << "a) 356 dni" << endl;
			cout << "b) 365 dni" << endl;
			cout << "c) 12 h" << endl;
			cout << "d) 24 h" << endl;
		}
		cout << endl;
	}
	else if (pytanie == 4) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Narodowy sport Japonii to:" << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) Judo" << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) Zapasy" << endl;
			}
			if (usunPytanie1 != 3 && usunPytanie2 != 3) {
				cout << "c) Taekwondo" << endl;
			}
			cout << "d) Sumo" << endl;
		}
		else {
			cout << "a) Judo" << endl;
			cout << "b) Zapasy" << endl;
			cout << "c) Taekwondo" << endl;
			cout << "d) Sumo" << endl;
		}
		cout << endl;
	}
	else if (pytanie == 5) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Niektore grzyby, maja pod kapeluszem:" << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) Listewki" << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) Deseczki" << endl;
			}
			cout << "c) Blaszki" << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d) Slomeczki" << endl;
			}
		}
		else {
			cout << "a) Listewki" << endl;
			cout << "b) Deseczki" << endl;
			cout << "c) Blaszki" << endl;
			cout << "d) Slomeczki" << endl;

		}

		cout << endl;
	}

odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie3();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "0");
	}
	else {
		goto generowaniePytania;
	}

}

bool pytanie1()
{
	int pytanie;
	int usunPytanie1;
	int usunPytanie2;
	string odp;
	string poprawnaOdp;
	bool czyUzycPolnapol = false;

	srand(time(NULL));

	pytanie = rand() % 5 + 1;
	usunPytanie1 = rand() % 4 + 1;
	usunPytanie2 = rand() % 4 + 1;

generowaniePytania:
	system("cls");

	aktualizujKola();

	cout << "Kola ratunkowe:" << endl;
	cout << polnapol << endl;
	cout << telefon << endl;
	cout << zamiana << endl << endl;
	cout << "Pytanie 1" << endl << endl;

	if (pytanie == 1) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Dokoncz przyslowie: Strach ma wielkie..." << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) Uszy" << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) Nogi" << endl;
			}
			cout << "c) Oczy" << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d) Serce" << endl;
			}
		}
		else {
			cout << "a) Uszy" << endl;
			cout << "b) Nogi" << endl;
			cout << "c) Oczy" << endl;
			cout << "d) Serce" << endl;
		}
		cout << endl;
	}
	else if (pytanie == 2) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Swiateczna ryba to:" << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) Halibut" << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) Makrela" << endl;
			}
			cout << "c) Karp" << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d) Panga" << endl;
			}
		}
		else {
			cout << "a) Halibut" << endl;
			cout << "b) Makrela" << endl;
			cout << "c) Karp" << endl;
			cout << "d) Panga" << endl;
		}
		cout << endl;
	}
	else if (pytanie == 3) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Jak nazywa sie najwyzsza liga rozgrywek pilki noznej w Polsce?" << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) Megaklasa" << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) Superliga" << endl;
			}
			cout << "c) Ekstraklasa" << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d) Liga swiatowa" << endl;
			}
		}
		else {
			cout << "a) Megaklasa" << endl;
			cout << "b) Superliga" << endl;
			cout << "c) Ekstraklasa" << endl;
			cout << "d) Liga swiatowa" << endl;
		}
		cout << endl;
	}
	else if (pytanie == 4) {
		poprawnaOdp = "c";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Gdzie znajduje sie scieglo Achillesa?" << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) W ramieniu" << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) W kolanie" << endl;
			}
			cout << "c) W piecie" << endl;
			if (usunPytanie1 != 4 && usunPytanie2 != 4) {
				cout << "d) W udzie" << endl;
			}
		}
		else {
			cout << "a) W ramieniu" << endl;
			cout << "b) W kolanie" << endl;
			cout << "c) W piecie" << endl;
			cout << "d) W udzie" << endl;
		}
		cout << endl;
	}
	else if (pytanie == 5) {
		poprawnaOdp = "d";
		if (usunPytanie1 == 3) usunPytanie1 = usunPytanie1 % 4 + 1;
		if (usunPytanie2 == 3) usunPytanie2 = usunPytanie2 % 4 + 1;
		if (usunPytanie1 == usunPytanie2) usunPytanie2 = (usunPytanie2 + 1) % 4 + 1;
		cout << "Na jakim kontynencie leza Stany Zjednoczone?" << endl << endl;
		if (czyUzycPolnapol) {
			if (usunPytanie1 != 1 && usunPytanie2 != 1) {
				cout << "a) Australia" << endl;
			}
			if (usunPytanie1 != 2 && usunPytanie2 != 2) {
				cout << "b) Ameryka Poludniowa" << endl;
			}
			if (usunPytanie1 != 3 && usunPytanie2 != 3) {
				cout << "c) Europa " << endl;
			}
			cout << "d) Ameryka Polnocna " << endl;
		}
		else {
			cout << "a) Australia" << endl;
			cout << "b) Ameryka Poludniowa" << endl;
			cout << "c) Europa " << endl;
			cout << "d) Ameryka Polnocna " << endl;
		}

		cout << endl;
	}

odpowiedz:
	aktualizujKola();

	cout << "Twoja odpowiedz: ";
	cin >> odp;
	cout << endl;

	if (odp == "1" && !czyPolnapol) {
		czyUzycPolnapol = true;
		czyPolnapol = true;
		goto generowaniePytania;
	}
	else if (odp == "2" && !czyTelefon) {
		telefonFun(poprawnaOdp);
		czyTelefon = true;
		goto odpowiedz;
	}
	else if (odp == "3" && !czyZamiana) {
		pytanie = (pytanie + 1) % 5 + 1;
		czyZamiana = true;
		goto generowaniePytania;
	}
	else if (odp == poprawnaOdp) {
		return pytanie2();
	}
	else if (odp != poprawnaOdp && odp == "a" || odp == "b" || odp == "c" || odp == "d") {
		return koniecGry(poprawnaOdp, "0");
	}
	else {
		goto generowaniePytania;
	}

}


void menu()
{
	while (true)
	{
	start:
		if (k == 'x')
		{
			// menu
			cout << znaklg << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpg << endl;
			cout << znakpi << "a-START" << znakpi << endl;
			cout << znakld << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpd << endl;
			cout << znaklg << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpg << endl;
			cout << znakpi << "b-O GRZE" << znakpi << endl;
			cout << znakld << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpd << endl;
			cout << znaklg << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpg << endl;
			cout << znakpi << "c-WYJD" << znakz << znakpi << endl;
			cout << znakld << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpd << endl;
			cin >> k;
			goto start;
		}
		if (k == 'a')
		{
			// start gry
		poczatek:
			system("cls");
			bool czyKoniec = pytanie1();
			if (czyKoniec) break;
			else goto poczatek;
		}
		// o grze
		else if (k == 'b')
		{
			system("cls");
			cout << "KWOTY" << endl;
			cout << "12. * 1 000 000PLN" << endl;
			cout << "11.     500 000PLN" << endl;
			cout << "10.     250 000PLN" << endl;
			cout << " 9.     125 000PLN" << endl;
			cout << " 8.      75 000PLN" << endl;
			cout << " 7. *    40 000PLN" << endl;
			cout << " 6.      20 000PLN" << endl;
			cout << " 5.      10 000PLN" << endl;
			cout << " 4.       5 000PLN" << endl;
			cout << " 3.       2 000PLN" << endl;
			cout << " 2. *     1 000PLN" << endl;
			cout << " 1.         500PLN" << endl;
			cout << endl;
			cout << "Progi gwarantowane *" << endl;
			cout << endl;
			cout << "Odpowiadaj na pytania a, b, c, d" << endl;
			cout << endl;
			cout << endl;
			cout << "x- Powrot do menu" << endl;
			cout << "a- Start gry" << endl;
			cin >> k;
			system("cls");
			goto start;
		}

		else if (k == 'c')
		{
			// zakonczenie
			system("cls");
			cout << znaklg << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpg << endl;
			cout << znakpi << "KONIEC GRY" << znakpi << endl;
			cout << znakld << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpo << znakpd << endl;
			break;
		}
	}



}

int main()
{
	menu();
}
