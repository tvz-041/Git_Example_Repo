#ifndef SOMECLASS_H
#define SOMECLASS_H

class SomeClass
{
public:
	SomeClass(const int someIntData, const bool someBoolData);
	~SomeClass() = default;

	int someIntData() const;
	int someBoolData() const;

	void printSomeIntData() const;
	void printSomeBoolData() const;

private:
	int someIntData_ = 0;
	bool someBoolData_ = false;
};

#endif // SOMECLASS_H
