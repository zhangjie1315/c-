#include<iostream>
using namespace std;

void Test1()
{
    int a=1;
    int& b=a;

    cout<<"a:address->"<<&a<<endl;
    cout<<"b:address->"<<&b<<endl;
    a=2;
    b=3;
    int& c = b;
    c=4;
}
 int main()
{
    Test1();
}
