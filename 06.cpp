#include <iostream>
using namespace std;

class Person
{
public:
    Person(class string& name)
        :_name(name)
    {}
    void Display()
    {
        cout<<_name<<endl;
    }
protect:
    string _name;
}

class Student:pblic Person
{
protect:
    int _num;
};
int main(){
    Display();


}
