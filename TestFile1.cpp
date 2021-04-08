// TestFile1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//This is a test code for githup

#include <iostream>
#include "Test.h"
using namespace std;

void printAll(Test* p, int length) {
    for (int i = 0; i < length; i++)
    {
        p[i].printAll();
        cout << endl;
    }
}

int main()
{
    Test* p = new Test[100];
    int age;
    int in = 0;
    int length=1;
    int actionNum;
    char name[10]{};
    cout << "This is a test code!" << endl;
    cout << "Enter one of these numbers for a task!" << endl;
    cout << "Enter any other number for exit" << endl;
    cout << "1, to input to databank, max person: 100" << endl;
    cout << "2, to print everyone" << endl;
    cin >> actionNum;
    while (actionNum)
    {
        if (actionNum == 1)
        {
            p[in];
            cout << "Enter length of name, max length 9:" << endl;
                cin >> length;

            cout << "Enter a name: " << endl;
            
             cin >> name;
            p[in].setName(name, length);
            cout << "Enter age: " << endl;
            cin >> age;
            p[in].setAge(age);
            p[in].setLength(length);
            p[in].print();
            in++;
            
        }
        else if (actionNum == 2)
        {
            printAll(p, in);
        }
        else
        {
            break;
        }
        cout << endl;
        cout << "Enter a new action: " << endl;
        cin >> actionNum;
    }
    return 0;

}

