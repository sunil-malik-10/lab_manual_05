#include<iostream>
using namespace std;
string digitToText(int);
main(){
    int n;
    cout<<"Enter a digit(1-99):";
    cin>>n;
    cout<<digitToText(n);
}
string digitToText(int n){
    string result = "";
    if(n>=20){
        if(n/10 == 2){
            result += "Twenty";
        }
        if(n/10 == 3){
            result += "Thirty";
        }
        if(n/10 == 4){
            result += "Forty";
        }
        if(n/10 == 5){
            result += "Fifty";
        }
        if(n/10 == 6){
            result += "Sixty";
        }
        if(n/10 == 7){
            result += "Seventy";
        }
        if(n/10 == 8){
            result += "Eighty";
        }
        if(n/10 == 9){
            result += "Ninety";
        }
    }
    if(n%10 !=0){
        n = n%10;
    }
 
    if (n == 1) result += "One";
    if (n == 2) result += "Two";
    if (n == 3) result += "Three";
    if (n == 4) result += "Four";
    if (n == 5) result += "Five";
    if (n == 6) result += "Six";
    if (n == 7) result += "Seven";
    if (n == 8) result += "Eight";
    if (n == 9) result += "Nine";
    if (n == 10) result += "Ten";
    if (n == 11) result += "Eleven";
    if (n == 12) result += "Twelve";
    if (n == 13) result += "Thirteen";
    if (n == 14) result += "Fourteen";
    if (n == 15) result += "Fifteen";
    if (n == 16) result += "Sixteen";
    if (n == 17) result += "Seventeen";
    if (n == 18) result += "Eighteen";
    if (n == 19) result += "Nineteen";

    return result;
}

