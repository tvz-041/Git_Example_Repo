#include <iostream>

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

void SomeClass::printSomeIntData() const
{
	std::cout << someIntData_;
}

void SomeClass::printSomeBoolData() const
{
	std::cout << someBoolData_;
}
