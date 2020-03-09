#ifndef KOIRAMIDDLECLASS_H
#define KOIRAMIDDLECLASS_H

#include "nisakasbaseclass.h"
#include <iostream>

class KoiraMiddleClass : public NisakasBaseClass
{
public:
	KoiraMiddleClass();
	void fun() { std::cout << "fun() called"; }
};

#endif // KOIRAMIDDLECLASS_H
