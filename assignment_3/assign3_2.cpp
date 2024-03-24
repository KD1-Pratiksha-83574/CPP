/*
Q2. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
Allocate the memory for the the object dynamically and test the functunalities using time ptr.
*/

#include<iostream>
using namespace std;

class Time
{
    private: 
    int hour;
    int min;
    int sec;

    public:
    
    Time(int hour, int min, int sec)
    {
        this -> hour = hour;
        this -> min = min;
        this -> sec = sec;
    }
    Time() {

    };

    int getHour()
    {
        return hour;
    }

    void setHour(int hour)
    {
        this->hour = hour;
    }

    int getMin()
    {
        return min;
    }

    void setMin(int min)
        {
            this->min = min;
        }

    int getSec()
        {
            return sec;
        }

    void setSec(int sec)
    {
        this -> sec = sec;
    }


    void printTime()
    {
        cout << "This is the true: "<< endl;
        cout << hour << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time *t = new Time(01, 12, 60);

    t -> printTime();

    cout << "Now using Setter" << endl;

    Time *t1 = new Time();

    t1 -> setHour(10);
    t1 -> setMin(20);
    t1 -> setSec(19);

    t1 -> printTime();

    cout << "Getting the information using getter "<< endl;

    int hour = t1 -> getHour();
    int min = t1 -> getMin();
    int sec = t1 -> getSec();

    cout << hour << ":" << min << ":"<< sec << endl;

}