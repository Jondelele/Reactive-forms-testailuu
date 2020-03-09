#ifndef KOIRAMIDDLECLASS_H
#define KOIRAMIDDLECLASS_H

#include "nisakasbaseclass.h"
#include <iostream>

class KoiraMiddleClass : public NisakasBaseClass
{
public:
	KoiraMiddleClass();
	void aantele() override;
//	virtual void aanteleVirtual() override;

};

#endif // KOIRAMIDDLECLASS_H
