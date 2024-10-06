#include <iostream>
#include <cmath>
int checkAlphabetCase(char alphabet);
using namespace std;
int main() 
{
    char alphabet;
    cout<<"Enter the value of (A/a):";
    cin>>alphabet;
  
   char alpha=checkAlphabetCase(alphabet);
   cout<<"You have entered "<<alphabet;
}
int checkAlphabetCase(char alphabet)
{
 if(alphabet=='A')
 {
     return alphabet;
 }
  if(alphabet=='a')
 {
     return alphabet;
 }
}