// 1. Write a menu driven program to calculate volume of the box(length * width * height).
// Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
// Create the local objects in respective case and call the function to caluclate area.
// Menu options ->
// 1. Calculate Volume with default values
// 2. Calculate Volume with length,breadth and height with same value
// 3. Calculate Volume with different length,breadth and height values.

#include<iostream>

using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:

//parameterless
    Box ()
    {
        cout<<"Inside parameterless "<<endl;
        length=5;
        width=7;
        height=6;
    }

    //parameterized

    Box(int l,int w,int h)
    {
        cout<<"Inside parameterized"<<endl;
        length=l;
        width=w;
        height=h;
    }
    //single paramerized

    Box(int value)
    {
        length=value;
        width=value;
        height= value;
        
        cout<<"inside single parametrized"<<endl;
    }
    //calculate volume

    void calculatvolume()
    {
        int vol= length*width*height;
        cout<<"volume of box="<<vol<<endl;
    }
    

};
int main()
{
    Box b;
    int length,width,height,value;
    int choice;
    do
    {
    cout<<"0.EXIT"<<endl;
    cout<<"1.Calculate Volume with default values"<<endl;
    cout<<"2.Calculate Volume with length,width and height with same value"<<endl;
    cout<<"3.Calculate Volume with different length,breadth and height values"<<endl;
    cout<<"4.Enter the choice"<<endl;
    cin>>choice;


    switch(choice)
    {
        case 0:
            cout<<"EXIT";
            break;
        

        case 1:

            b.calculatvolume();

            break;
        
        case 2:
        {
            cout<<"enter the values"<<endl;
            cin>>value;
            Box b1(value);
            b1.calculatvolume();
            break;
        }
        case 3:
        {   
            cout<<"enter length "<<endl;
            cin>>length;
            cout<<"enter width "<<endl;
            cin>>width;
            cout<<"enter height"<<endl;
            cin>>height;
            Box b2(length,width,height);
            b2.calculatvolume();
            break;
        }
        default:
            cout<<"enter the choice"<<endl;
            break;
    }
    
    }while(choice!=0);
    return 0;    
            
}



