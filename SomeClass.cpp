#include "SomeClass.h"

SomeClass::SomeClass(const int someIntData, const bool someBoolData)
{
	someIntData_ = someIntData;
	someBoolData_ = someBoolData;
}

int SomeClass::someIntData() const
{
	return someIntData_;
}

int SomeClass::someBoolData() const
{
	return someBoolData_;
}
