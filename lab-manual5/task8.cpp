#include <iostream>
using namespace std;
int oddish_evenish(int);
int main() 
{
    int number;
    cout<<"Enter a five-digit number:";
    cin>>number;
  
    oddish_evenish(number);
}
int oddish_evenish(int number)
{
    int a,b,c,d,e;
  a=number/10000;
  b=number%10;
  c=(number/10)%10;
  d=(number/100)%10;
  e=(number/1000)%10;
  int sum=a+b+c+d+e;
      if(sum%2==0)
      {
          cout<<"evenish";
      }
    if(sum%2==1)
    {
        cout<<"oddish";
    }
    return 0;
}