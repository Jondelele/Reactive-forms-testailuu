#include <iostream>
#include "koiramiddleclass.h"
#include "nisakasmiddleclass.h"
#include "puudelisubclass.h"

using namespace std;

int main()
{
	// Vaihtaa kantaluokkaolion/new KoiraMiddleClass() aliluokan/puudeliPointterin päähän
	KoiraMiddleClass* koiraPointteri22222 = new KoiraMiddleClass();
	PuudeliSubClass* puudeliPointteri = dynamic_cast<PuudeliSubClass*>(koiraPointteri22222);


	// Polyformismi toiminnassa, puudeli on Koira luokan
	// olion paikalla, joten sille kutsutaan luokan Koira
	// aantele metodia
	cout << "Polyformismi-------------------------------------------" << endl << std::endl;
	KoiraMiddleClass* koiraPointteri;
	PuudeliSubClass puudeliOlio;
	koiraPointteri = &puudeliOlio;

	// Tulostaa: VIRTUALHau hau hau hau haukuntaa!!!!!VIRTUAL
	// Koska vaikka metodi onkin virtuaalinen, niin etuosalla
	// KoiraMiddleClass:: kyetään määrittelemään että halutaan
	// kutsua kanta/koira luokan metodia
	cout << "koiraPointteri->KoiraMiddleClass::aanteleVIRTUAL();" << endl;
	koiraPointteri->KoiraMiddleClass::aanteleVIRTUAL();

	// Tulostaa: VIRTUALViu viu viu puudelihaukuntaa!!!!!VIRTUAL
	// Koska metodi ON VIRTUAALINEN ja kantaluokka olion päässä
	// on ali/puudeli luokan olio ja siksi dynamic binding valitsee
	// ajettavaksi aliluokan toteutuksen siitä huolimatta vaikka
	// puudeli onkin koiran ilmentymän päässä
	cout << "koiraPointteri->aanteleVIRTUAL();" << endl;
	koiraPointteri->aanteleVIRTUAL();

	// Tulostaa: Hau hau hau hau haukuntaa!!!!!
	// Koska funktio ei ole virtuaalinen eli kutsuttava
	// metodi sidotaan kantaluokan metodiin käännösvaiheessa,
	// koska kyseessä on kanta/koira luokan pointteri, jonka
	// päässä puudeli siis asustaa, ohjelmalla ei ole
	// kiinnostusta tai aikaa tarkistella että mitä pointterin
	// päässä ihan oikeasti on
	cout << "koiraPointteri->aantele();" << endl;
	koiraPointteri->aantele();

	return 0;
}
