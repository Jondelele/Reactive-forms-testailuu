#ifndef NISAKAS_H
#define NISAKAS_H

#include <string>
#include <iostream>

class NisakasBaseClass
{
public:
//	NisakasBaseClass();
//	virtual void aantele() = 0;
	virtual void fun() = 0;

private:
	int ika;
	std::string laji;
};

#endif // NISAKAS_H
