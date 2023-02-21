#pragma once
#include <iostream>
#define MAX_SIZE 100
using namespace std;

struct Box {
        string name;
        short int height = 0;
        short int width = 0;

        void print() {
            cout << "\nBox's name: " << name << "\nBox's height: " << height << "\nBox's width: " << width << endl;
         
        }

        bool isEmpty() {
            return (height && width) ? false : true;
        }
};


struct PackerProblem {
    short int boxHeight;
    short int boxWidth;

    void loadPackerProblem(string problem) {
    
        cout << "\nNothing\n";
    
    }
};

template <typename T>
struct Stack {
    T _data[MAX_SIZE];
    unsigned int _top = 0;

    bool isEmpty() {
        return _top == 0;
    }

    bool isFull() {
        return _top == MAX_SIZE;
    }

    void push(T newVal) {
        if (!isFull()) {
            _data[_top++] = newVal;
        }
    }

    void pop() {
        if (!isEmpty()) {
            _top--;
        }
    }

    T top() {
        if (!isEmpty()) {
            return _data[_top - 1];
        }
    }

    void print() {
        if (!isEmpty()) {
            cout << "Printing stack from the top\n";
            for (int i = _top - 1; i >= 0; i--) {
                cout << _data[i] << "\n";
            }
            cout << "-----------\n\n";
        }
        else cout << "Stack is empty\n\n";
    }

};