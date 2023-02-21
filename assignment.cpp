// assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
#include <sstream>
using namespace std;

string boxNames[] = {"box1","box2","box3"};

// SHOULD BE NOT VOID, SHOULD BE STRUCT TYPE //
//void ErrorControl(data) {
//    for (int i = 0; i < data.length; i++) {
//        if ()
//    }
//}

int main()
{
    Stack<int>* newStack = new Stack<int>();
    Box* newBox = new Box();
    newBox->name = "Box 3";
    Box* n = new Box[4];
    for (int i = 0; i < 4; i++) {
        string currentName = "Box" + to_string(i);
        n[i].name = currentName;
    }
    for (int i = 0; i < 4; i++) {
        n[i].print();
    }
    newStack->push(60);
    newStack->print();
    cout << newBox->name << endl;
    PackerProblem* loadPackerProblem();
    cout << n[1].isEmpty() << endl;
    newBox->print();
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
