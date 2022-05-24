#include <iostream>
using namespace std;
#include <string>
class Account{
private:
    double bal=0;
public:
    void withdraw(const double &amount);
    void deposit(const double &amount);
    void deposittwo(const double amount);
    double balance();

};
void Account::withdraw(const double &amount){
    bal= bal - amount;
}
void Account::deposittwo(const double amount) {
    bal=bal+amount;
}

void Account::deposit(const double &amount){
    bal= bal + amount;
}
double Account::balance() {
    return bal;
}
int main(){
    Account account;
    //int x=10;
   // account.deposittwo(100);
    //account.deposittwo(50);
   account.deposit(100);
   account.deposit(50);
    cout << "Balance: " << account.balance() << endl;


    return 0;
}