#include <iostream>
using namespace std;

bool checkPrime(int x);
int Factorit(int x);

int main(){
    //Write a function FactorIt that writes out the prime factorization of an integer parameter.
    int positive;


    cout<<"Enter a postivie integer number: "<<endl;
    cin>>positive;
    Factorit(positive);

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

int Factorit(int m){
    for(int i=2;i<=m;i++){
        while(m%i==0){
            if(checkPrime(i)==1){
                cout<<i<<endl;
                m=m/i;

            }
        }
    }
}

