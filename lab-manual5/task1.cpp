#include <iostream>
using namespace std;
float minimum(float ,float);

main()
{
    float number1,number2;
    cout<<"Enter the 1st number:";
    cin>>number1;
    cout<<"Enter the 2nd number:";
    cin>>number2;
    float result= minimum(number1,number2);
    cout<<"The minimum of "<<number1<<" and "<<number2<<" is "<<result;
}
float minimum(float number1, float number2){
    float result;
    if(number1>number2)
    {
      result=number2;    
    }
    if(number2>number1)
    {
       result=number1;    
    }
    
    return result;
}
