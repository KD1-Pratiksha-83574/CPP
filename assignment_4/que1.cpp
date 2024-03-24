/*
Q1. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
given, allocate stack of size 5.
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().
*/

#include<iostream>
using namespace std;

class Stack {

private:
    int* array;
    int index;
    int capacity;

public:
    Stack(int size=5)
    {
        capacity = size;
        array = new int[capacity];
        index = -1;
    }
    

    bool isEmpty()
    {
        return index == -1;
    } 

    bool isFull()
    {
        return index == capacity - 1;

    }

    void push(int value)
    {
        if(isFull())
        {
            cout<< "Stack Overflow, cannot push element " << endl;
            return;
        }

        array[++index] = value;
            cout<< "Pushed " << value << " onto the stack."<< endl;
    }

    void pop(){
        if (isEmpty()) {
            cout<< "Stack underflow! Cannot pop element. " << endl;
            return;
        }
        cout<<"Popped : " << array[index--] << " " <<"from the stack. "<< endl;
    }

    int peek(){
        if(isEmpty()){
            cout<<"Stack is empty! \n";
            exit(1);
            
        }
        return array[index];
    }

    void print()
    {
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return;
            
        }

        cout << "Stack :";

        for(int i=0; i <= index; ++i)
        {
            cout << array[i] << " " << endl;

        }
        
    }

    ~Stack()
    {
        delete[] array;
    }

};

int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);

    s.print();

    s.pop();

    cout<< "Top Element :" << s.peek() << endl;

    s.print();

    return 0;
}

