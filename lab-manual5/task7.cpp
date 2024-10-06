#include <iostream>
using namespace std;
int is_Symmetrical(int);
int main() 
{
    int number;
    cout<<"Enter a three-digit number:";
    cin>>number;
  
    is_Symmetrical(number);
}
int is_Symmetrical(int number)
{
    int hundreds = number / 100;          
    int tens = (number / 10) % 10;       
    int units = number % 10;

      if(hundreds==units)
      {
          cout<<"The number is Symmetrical";
      }
   if(hundreds!=units)
    {
        cout<<"The number is not Symmetrical";
    }
    
}