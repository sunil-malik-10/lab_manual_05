#include <iostream>
#include<cmath>
using namespace std;

float height(float,float);
main()
{
    float distance,angle;
    cout<<"Enter the distance from the base of the tree(in feets):";
    cin>>distance;
    cout<<"Enter the angle of elevation (in degrees):";
    cin>>angle;
    float result=height(distance,angle);
    cout<<"The height of the tree is: "<<result<<" feet";
}
float height(float distance,float angle){
    angle=angle/57.2958;
   float height=tan(angle)*distance;
    return height;
}
