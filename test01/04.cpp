#include <iostream>
using namespace std;
 
void p(int* left,int* right)
{
    int temp = *left;
       *left = *right;
       *right = temp;
}

void Test(){
    int a = 1;
    int b = 4;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    p(a,b);

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}
int main()
{
    Test();
}
