#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    int choice;
    int countManager = 0;
    int countSalesman = 0;
    int countSalesmanager = 0;
    char choose;
    int index = 0;
    Employee *arr[10]; 


    do{
        cout << "0. EXIT" << endl;
        cout << "1. ACCEPT EMPLOYEE" << endl;
        cout << "2. Display the count of all employees w.r.t designation" << endl;
        cout << "3. DISPLAY ALL MANAGERS " << endl;
        cout << "4. DISPLAY ALL SALESMAN" << endl;
        cout << "5. DISPLAY ALL SALESMANAGERS" << endl;
        cout << "ENTER YOUR CHOICE :" ;
        cin >> choice;



        switch(choice)
        {
            case 0:
                cout << "Thank You" << endl;
                break;

            case 1:
            {
                 int typeEmp;
                cout << "Enter type of Employee :" << endl;
                cout << "1. Manager" << endl;
                cout << "2. Salesman"<< endl;
                cout << "3. Salesmanager"<< endl;
                cin>> typeEmp;

                if(typeEmp == 1)
                {
                    if(index<10)
                    {
                        arr[index] = new Manager();
                        arr[index] ->accept();
                        index++;
                        countManager++;
                    }
                }
                else if(typeEmp== 2)
                {
                    if(index<10)
                    {
                        arr[index] = new Salesman();
                        arr[index] -> accept();
                        index++;
                        countSalesman++;
                    }
                }
                else if(typeEmp == 3)
                {
                    if(index<10)
                    {
                        arr[index] = new SalesManager();
                        arr[index] -> accept();
                        index++;
                        countSalesmanager++;
                    }
                }
                else{
                    cout <<"Wrong Choice of Designation"<< endl;
               }
            break;
            }
            case 2:
            {
                cout << "The count of Mananger is " << countManager <<endl;
                cout << "The count of Salesman is " << countSalesman << endl;
                cout << "The count of SalesManager is "<< countSalesmanager << endl;

                break;
            }

            case 3:
            
                for(int i=0; i<index; i++)
                {
                    if(typeid(*arr[i])== typeid(Manager))
                    {
                        arr[i] -> display();
                    }
                }

            case 4:

                for(int i=0; i<index; i++)
                {
                    if(typeid(*arr[i]) == typeid(Salesman))
                    {
                        arr[i] -> display();
                    }
                }
            case 5:

                for(int i=0; i<index; i++)
                {
                    if(typeid(*arr[i]) == typeid(SalesManager))
                    {
                        arr[i] -> display();
                    }
                }
                break;
        }
        }while(choice != 0);

        for(int i=0; i<index; i++)
        {
            delete arr[i];
            arr[i] = NULL;

        }
        return 0;
}
