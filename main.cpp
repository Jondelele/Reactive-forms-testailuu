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
	KoiraMiddleClass* koiraPointteri;
	PuudeliSubClass puudeliOlio;
	koiraPointteri = &puudeliOlio;

	// Tulostaa: VIRTUALHau hau hau hau haukuntaa!!!!!VIRTUAL
	// Koska vaikka metodi onkin virtuaalinen, niin etuosalla
	// KoiraMiddleClass:: kyetään määrittelemään että halutaan
	// kutsua kanta/koira luokan metodia
	koiraPointteri->KoiraMiddleClass::aanteleVIRTUAL();

	// Tulostaa: VIRTUALViu viu viu puudelihaukuntaa!!!!!VIRTUAL
	// Koska metodi ON VIRTUAALINEN ja kantaluokka olion päässä
	// on ali/puudeli luokan olio
	koiraPointteri->aanteleVIRTUAL();

	// Tulostaa: Hau hau hau hau haukuntaa!!!!!
	// Koska funktio ei ole virtuaalinen eli kutsuttava
	// metodi sidotaan kantaluokan metodiin käännösvaiheessa,
	// koska kyseessä on kanta/koira luokan pointteri
	koiraPointteri->aantele();

//	cout << "Pointer**********************************************************" << endl;
//	cout << "Polyformismi-------------------------------------------" << endl;
//	KoiraMiddleClass* koiraPtr = new PuudeliSubClass();
//	koiraPtr->aantele();

	return 0;
}
