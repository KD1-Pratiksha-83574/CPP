/*
Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of type Date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should be of type date.
Employee class should be inherited from Person.
Implement following classes. Test all functionalities in main().
(Note - Perform the Association and Inheritance in the above case.)
*/

#include <iostream>
#include <string.h>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(){

    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void acceptDate()
    {
        cout << "Day :";
        cin >> day;
        cout << "Month :";
        cin >> month;
        cout << "Year :";
        cin >> year;
    }

    void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
private:
    string name;
    string address;
    Date birthDate;

public:
    Person():birthDate()
    {

    }
    Person(string name, string address,int day,int month,int year):birthDate(day ,month,year)
    {
        this->name = name;
        this->address = address;
    }

    void acceptData()
    {
        cout << "NAME :" << endl;
        cin >> name;

        cout << "ADDRESS :" << endl;
        cin >> address;

        cout << "DOB : " << endl;
        birthDate.acceptDate();
    }

    void displayData()
    {
        cout << "NAME : " << name << endl;
        cout << "ADDRESS : " << address << endl;
        cout << "Birth Date : ";
        birthDate.displayDate();
        
    }
};

class Employee : public Person
{
private:
    int empid;
    double sal;
    string dept;
    Date doj;

public:
    void acceptData()
    {
        cout << "EMP_ID :" << endl;
        cin >> empid;

        cout << "SALARY :" << endl;
        cin >> sal;

        cout << "DEPARTMENT :" << endl;
        cin >> dept;

        cout << "DATE OF Joining :" << endl;
        doj.acceptDate();
       // Person::acceptData();
        
        
    }

    void display()
    {
        cout << "EMP_ID : " << empid << endl;
        cout << "SALARY : " << sal << endl;
        cout << "DEPARTMENT : " << dept << endl;
        cout << "DOB : ";
        doj.displayDate();
        //Person::displayData();
    }
};

int main()
{
    Person p;
    p.acceptData();
    p.displayData();

    Employee e;

    e.acceptData();

    e.displayData();

    // Person *ptr = new Employee;
    // ptr -> acceptData();
    // ptr -> displayData();
}
