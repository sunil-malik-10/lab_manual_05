#include <iostream>
#include <cmath>
using namespace std;
int timeTravel(int,int);
int main() 
{
    int hours,minutes;
    cout<<"Enter Hours: ";
    cin>>hours;
    cout<<"Enter Minutes: ";
    cin>>minutes;
    timeTravel( hours,minutes);
  

}
int timeTravel(int hours,int minutes)
{        minutes=minutes+15;
     if(minutes>59)
     { 
        hours=hours+1;
        minutes=minutes-60;
    
     if(hours>23 )
        {
           hours=hours-24;   
           cout<<hours<<":"<<minutes;
        }
     }
       
         
     
}