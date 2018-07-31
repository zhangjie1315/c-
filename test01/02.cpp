#include <iostream>
using namespace std;
int main()
{
}
int Add1(int a=0,int b=0){
    return a+b;
}

int Add2(int a,int b=0){
    return a+b;
}
void Test()
{
    Add1();
    Add1(1);
    Add1(1,1);
    Add2(2);
    Add2(2,2);

}
