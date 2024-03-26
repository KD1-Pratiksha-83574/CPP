/*
Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]
*/

#include<iostream>
#include<string.h>
using namespace std;

class Product
{
    private:
        int id;
        string title;
        double price;
        double discount;
    
    public:
    virtual void accept()
    {
        cout <<  "Enter ID : ";
        cin >> id;

        cout << "Enter Title : ";
        cin >> title;

        cout << "Enter Price : ";
        cin >> price;
            }

    virtual void display()
    {
        cout << "ID : " << id << "Title :" << title << "Price :" << price << endl;

    }
    

    double getPrice() {

        return this->price;
    }
    
    void setPrice(double discount)
    {
        this -> discount = discount;
    }

    // virtual double discountPrice()
    // {
    //     return price;
    // }



};

class Book : public Product
{
    private:

    string author;

    public:
    void accept(){

        Product :: accept();

        cout << "Enter Author :" << author;
        cin >> author;

        Product :: setPrice(0.1);

    }

    void setPrice()
    {

    }

    virtual void display()
    {
        cout << "Author is - " <<  author << endl;
        Product::display();

    }

    // double discountPrice()
    // {
    //     double price = getPrice() * .10;
    //     return price;
    // }



};

class Tape : public Product

{
    private:

    string artist;

    public:

    void accept()
        {
            Product :: accept();
            cout << "Enter Artist : " << artist;
            cin >> artist;
            Product :: setPrice(0.05);

        }
    
    virtual void display()
    {
        cout << "Artist is " << artist << endl;
        Product::display();
    }
};


int main()
{
    Product *arr[3];
    int index = 0;
    int choice;
    int totalPrice =0;

    do{
        cout << "0. EXIT" << endl;
        cout << "1. BUY TAPE " << endl;
        cout << "2. BUY BOOK" << endl;
        cout << "3. TOTAL PRICE" << endl;

        cin >> choice;

        switch(choice){
            case 0:
            cout << "Thank You for visiting " << endl;

            for(int i=0; i<index; i++){
                delete arr[i];
                arr[i] = NULL;
            }
            break;

            case 1:

            if(index < 3){
                arr[index] = new Tape;
                arr[index] -> accept();
                index++ ;

            }

            else{
                cout << "Out of Storage " << endl;
            }
            break;

            case 2:
            if(index <3){
                arr[index] = new Book;

                arr[index]->accept();

                index++ ;
            }

            else{
                cout << "Out of Storage" << endl;
            }
            break;
            

            case 3:

            for(int i=0; i<index; i++){
                totalPrice += arr[i] -> getPrice();

            }

            cout << totalPrice << endl;
            break;

            default:
            cout << "Enter wrong Choice"<< endl;
        }

    }while (choice !=0);
    return 0;
    }
    





