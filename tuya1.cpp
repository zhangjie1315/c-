#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
     int i = 0;
     for(i=0;i<str.size(),i++)
     {
         if(str.find(str[i]==str.rfind(str[i]))
            {
            cout<<str[i]<<endl;
            break;
            }
     }
     if(i==str.size())
     cout<<"-1";
    }
    return 0;
}
