#include <iostream>
using namespace std;
int gcd(int a, int b);
int power(int base,int exp);
int main (){
    //Write a recursive function to find the greatest common divisor of two positive integer parameters.
   int sum= gcd(8,24);
   cout<<sum;
}
int power(int base,int exponent){

}
int gcd(int a, int b){
    if(b!=0){
        return gcd(b,a%b);
    }
    else{
        return a;
    }
}

