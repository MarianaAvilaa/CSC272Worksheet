#include <iostream>
using namespace std;
#include <string>
class Employee{
public:
    void setItsName(string name);
    string getItsName();
    void setItsYear(int year);
    int getItsYear();
    void setItsAddress(string address);
    string getItsAddress();
    void display();
private:
    string name;
    int year;
    string address;
};
void Employee::setItsName(string name) {
    name=name;
}
void Employee::setItsYear(int year) {
    year=year;
}
void Employee::setItsAddress(string address) {
    address=address;
}
string Employee::getItsName() {
    return name;
}
int Employee::getItsYear() {
    return year;
}
string Employee::getItsAddress() {
    return address;
}
void Employee::display() {
    cout<<name<<" "<<year<<" "<<address;
}

int main(){
 Employee ma ("Mariana",2001, "valentine");
 ma.display();


}