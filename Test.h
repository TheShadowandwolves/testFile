#pragma once

class Test
{
public:
	Test(char* name, int length, int age);
	Test();
	void setName(char* name, int length);
	void setLength(int length);
	void setAge(int age);
	int getLength();
	int getAge();
	void printAll();
	void print();
	
private:
	char _name[10]{0};
	int _length;
	int _age;

};

