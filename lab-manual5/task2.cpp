#include <iostream>
#include<cmath>
using namespace std;
float pow(float ,int);

main()
{
    int base_number,exponent_number;
    cout<<"Enter the base number:";
    cin>>base_number;
    cout<<"Enter the exponent number:";
    cin>>exponent_number;
    int result=pow(base_number,exponent_number);
    cout<< base_number << " raised to the power of " << exponent_number << " is " << result;
    
    return result;
}
