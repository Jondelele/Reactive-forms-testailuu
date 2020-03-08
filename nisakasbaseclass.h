#ifndef NISAKAS_H
#define NISAKAS_H

#include <string>
#include <iostream>

class NisakasBaseClass
{
public:
	NisakasBaseClass();
	virtual void aantele() = 0;

private:
	int ika;
	std::string rotu;
};

#endif // NISAKAS_H
