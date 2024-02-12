#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"ENtr the year to check ";
    cin>>year;
    if(year%400==0)
    {
        cout<<"Leap year ";
    }
    else if(year%100==100)
    {
        cout<<"Leap year ";
    }
    else if(year%4==0)
    {
        cout<<"Leap year ";
    }
    else
    {
        cout<<"Ordinary year ";
    }
    return 0;
}