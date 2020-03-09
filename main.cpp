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
	PuudeliSubClass puudeli;
	KoiraMiddleClass koiraOlio = puudeli;
	koiraOlio.aantele();

	cout << "Pointer*****************************************************" << endl;
	cout << "Polyformismi-------------------------------------------" << endl;
	KoiraMiddleClass* koiraPtr = new PuudeliSubClass();
	koiraPtr->aantele();


	return 0;
}
