#include <iostream>
using namespace std;

bool checkPrime(int x);
int main() {
   /* Write a program that asks the user for a positive integer number and
    find the sum of all prime numbers up to that number.
    (Hint: you need define a function to test whether a number is prime!)*/

   int positive;
    int sum=0;
   cout<<"Enter a postivie integer number: "<<endl;
   cin>>positive;

for(int n=2; n<=positive;n++){
    if(checkPrime(n)){

        sum=sum+n;
    }
}
cout<<"sum of prime numbers up to "<<positive<<" is "<<sum;
    return 0;
}

bool checkPrime(int x){
     bool prime=true;
     if(x==0 || x==1){
         prime=false;
     }
     for(int divisor=2; divisor<= x/2;divisor++){
         if(x%divisor==0){
             prime= false;
             /*divides the num by integers.
              If there is no rem then its completely divisible by the value in the divisor.
              It has a number other than  1 and itself that divides it so not a prime.*/
             break;
         }
     }
    return prime;
}
