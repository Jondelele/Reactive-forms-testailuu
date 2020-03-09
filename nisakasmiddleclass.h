#ifndef NISAKASMIDDLECLASS_H
#define NISAKASMIDDLECLASS_H

#include "eliobaseclass.h"

class NisakasMiddleClass : public ElioBaseClass
{
public:
	NisakasMiddleClass();
	~NisakasMiddleClass();
	virtual void aantele() = 0;

private:
	float karvanPituus_;
};



#endif // NISAKASMIDDLECLASS_H





