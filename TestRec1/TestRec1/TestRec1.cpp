// TestRec1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

 int recursion(int num, int power) {
	 if (power == 0) {
		 return 1;
	 }
	if (power == 1)
	{
	  return num;
	}
	return num* recursion(num, power - 1);
}

 int recursion2(int num, int power) {
	 if (power == 0) {
		 return 1;
	 }
	 if (power == 1)
	 {
		 return num;
	 }
	 return num * recursion(num-1, power - 1);
 }

 int recursion3(int num, int power) {
	 if (power == 0)
	 {
		 return num;
	 }
	 recursion3(num+1, power - 1);
 }
 int recursion4(int num, int rad, int power) {
	 return num * recursion(rad, power);
 }
int main()
{
	int action = 1;
	int num, power, rad;
	while (action) {
		cout << "Enter num: " << endl;
		cin >> num;
		cout << "Enter power: " << endl;
		cin >> power;
		cout << num << "^" << power << "= " << recursion(num, power) << endl;
		cout << "Calculation of my own recursion: " << recursion2(num, power) << endl;
		cout << "num + power: " << recursion3(num, power) << endl;
		cout << "Enter rad: " << endl;
		cin >> rad;
		cout << "( " << "(" << rad << "^" << power << ") " << " * " << num << ")" << "^" << power << "= " << recursion(recursion4(num, rad, power), power) << endl;
		cout << "Enter number over 1 to try again, less to leave: ";
		cin >> action;
		cout << endl;
	}
	cout << "Thank you! Bye...";
	return 0;
}

