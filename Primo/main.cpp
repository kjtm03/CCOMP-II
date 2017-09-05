#include <iostream>

using namespace std;

int main()
{
    for(int j=2;j<=1000;j++)
    {
        int a=0;
        for(int i=1;i<=1000;i++)
        {
            if(j%i==0)
            a++;
        }
        if(a==2)
        cout<<j<<endl;
    }
}

