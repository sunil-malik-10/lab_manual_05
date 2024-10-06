#include <iostream>
#include <cmath>
using namespace std;
int calculatePoolState(int,int,int,int);
int main() 
{
    int volume,pipe1,pipe2,hours;
    cout<<"Enter the volume of the pool in liters:";
    cin>>volume;
    cout<<"Enter – the flow rate of the first pipe per hour:";
    cin>>pipe1;
    cout<<"Enter the flow rate of the second pipe per hour:";
    cin>>pipe2;
    cout<<"Enter the hours that the worker is absent:";
    cin>>hours;
    calculatePoolState(volume,pipe1,pipe2,hours);

}
int calculatePoolState(int volume,int pipe1,int pipe2,int hours)
{
     float water_from_pipe1 = pipe1 *hours;
    float water_from_pipe2 = pipe2* hours;
   float total_water=water_from_pipe1+water_from_pipe2;
   if (total_water <= volume) {

        int pool_filled_percent = (total_water / volume) * 100;
        int pipe1_contribution = (water_from_pipe1 / total_water) * 100;
        int pipe2_contribution = (water_from_pipe2 / total_water) * 100;
        cout << "The pool is " << pool_filled_percent << "% full. Pipe 1: " << pipe1_contribution << "%. Pipe 2: " << pipe2_contribution << "%." << endl;
    } if(total_water > volume) {

        float overflow = total_water- volume;
        cout << "For " << hours << " hours the pool overflows with " << overflow << " liters." << endl;
    }
}