#include <iostream>
using namespace std;

//定义一个简单的类
class Person                          //类名
{
public :                             //访问限定符
    void Display()                   //成员函数
    
    {
        cout<<_name<<"-"<<_sex<<"-"<<_age<<endl;
    }
public :
    char* _name;                      //成员变量
    char* _sex;
    int  _age;
};

void Test()
{
    Person p;
    char arr[]="张杰";
    p._name = arr;
    char arr1[]="男";
    p._sex = arr1;
    p._age = 23;
    p.Display();
}

int main()
{
    Test();
    return 0;
}
//类外定义成员函数
//void Person::Dsplay()

