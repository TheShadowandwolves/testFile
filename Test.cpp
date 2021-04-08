#include "Test.h"
#include <iostream>
using namespace std;
Test::Test(char* name, int length, int age)
{
	_length = length;
	for (int i = 0; i < length; i++)
	{
		_name[i] = name[i];
	}
	_age = age;
}

Test::Test()
{
	char noName[7] = "noName";
	Test(noName, 7, 0);
}

void Test::setName(char* name, int length)
{
	for (int i = 0; i < length; i++)
	{
		_name[i] = name[i];
	}
}

void Test::setLength(int length)
{
	_length = length;
}

void Test::setAge(int age)
{
	_age = age;
}


int Test::getLength()
{
	return _length;
}

int Test::getAge()
{
	return _age;
}

void Test::printAll()
{
	for (int i = 0; i < _length; i++)
	{
		cout << _name[i];
	}
	cout << " " << _age << endl;
}

void Test::print()
{
	for (int i = 0; i < _length; i++)
	{
		cout << _name[i];
	}
	cout << " " << _age;
}

