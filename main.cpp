#include <iostream>
#include "koiramiddleclass.h"
#include "nisakasmiddleclass.h"
#include "puudelisubclass.h"

using namespace std;

int main()
{
	cout << "Main alkaa!!!" << endl;
	KoiraMiddleClass koira;
	koira.aantele();

	PuudeliSubClass puudeli;
	puudeli.aantele();

	// Polyformismi toiminnassa, puudeli on Koira luokan
	// olion paikalla, joten sille kutsutaan luokan Koira
	// aantele metodia
	cout << "Polyformismi-------------------------------------------" << endl;
	KoiraMiddleClass koiraOlio = puudeli;
	koiraOlio.aantele();

	cout << "Pointer testailuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu!!!" << endl;
	cout << "Polyformismi-------------------------------------------" << endl;
	KoiraMiddleClass* koiraPtr = new PuudeliSubClass();
	koiraPtr->aantele();


	cout << "Main LOPPUU!!!" << endl;
	return 0;
}
