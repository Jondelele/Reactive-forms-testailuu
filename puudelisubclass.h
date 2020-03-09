#ifndef PUUDELISUBCLASS_H
#define PUUDELISUBCLASS_H

#include "koiramiddleclass.h"

class PuudeliSubClass : public KoiraMiddleClass
{
public:
	PuudeliSubClass();
	void aantele();
	// virtual avainsanan toistaminen tässä aliliokassa ei
	// pakollista, mutta hyvän ohjelmointityylin mukaista
	virtual void aanteleVIRTUAL();
};

#endif // PUUDELISUBCLASS_H
