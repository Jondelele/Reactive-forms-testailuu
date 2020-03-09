#include <iostream>
#include "koiramiddleclass.h"
#include "nisakasmiddleclass.h"
#include "puudelisubclass.h"

using namespace std;

int main()
{
	// Polyformismi toiminnassa, puudeli on Koira luokan
	// olion paikalla, joten sille kutsutaan luokan Koira
	// aantele metodia
	cout << "Polyformismi-------------------------------------------" << endl;
	PuudeliSubClass puudeliOlio;
	KoiraMiddleClass* koiraPointteri;
	koiraPointteri = &puudeliOlio;
	koiraPointteri->aantele();
//	Hau hau hau hau haukuntaa!!!!!

	cout << "Pointer**********************************************************" << endl;
	cout << "Polyformismi-------------------------------------------" << endl;
	KoiraMiddleClass* koiraPtr = new PuudeliSubClass();
	koiraPtr->aantele();
//	Viu viu viu puudelihaukuntaa!!!!!

	return 0;
}
