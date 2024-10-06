#include <iostream>
#include <cmath>
using namespace std;
int dicriminant(int,int,int);
int main() 
{
    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;
    dicriminant(a,b,c);

}
int dicriminant(int a,int b, int c)
{
    float Determinant=(b*b)-4*(a*c);
    float root1,root2;
    if(Determinant==0)
    {
         root1=-b/(2*a);
         cout<<"Solution : x = "<<root1;
         
         
    }
    if(Determinant>0)
    {
        root1=(-b+(sqrt(Determinant)))/(2*a);
        root2=(-b-(sqrt(Determinant)))/(2*a);
        cout<<"Solutions: x ="<<root1<<" and x = "<<root2;
    }
    if(Determinant<0)
    {
          root1=(-b/2*a);
      int root_1=(sqrt(Determinant))/(2*a);
          root2=(sqrt(-Determinant))/(2*a);
        cout<<"Complex Solutions: x ="<< root1<<" + "<<root_1<<"i and x = "<<root1<<" - "<<root2<<"i";
    }
}