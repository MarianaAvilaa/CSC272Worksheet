#include <iostream>
using namespace std;
#include <string>

class Employee{
public:
    string name;
    int year;
    string address;
    void display(){
        cout<< name<<"  "<<year<<"  "<<address;
       cout<<endl;
    }
};
int main(){
    cout<<"Name"<<"  "<<"Year of joining"<<"  "<<"Address";
    cout<<endl;
    Employee obj1;
    obj1.name="Robert";
    obj1.year=1994;
    obj1.address="64C-WallsStreat";
    obj1.display();

    Employee obj2;
    obj2.name="sam";
    obj2.year=2000;
    obj2.address="68D-WallsStreat";
    obj2.display();

    Employee obj3;
    obj3.name="John";
    obj3.year=1999;
    obj3.address="26B-WallsStreat";
    obj3.display();
    return 0;
}

