#include <iostream>

using namespace std;
void arey(int (*a)[2][2])
{
    cout<<"ss"<<endl;
}
int main()
{
    int b[3][2][2]={
        {{1,2},{3,4}},
        {{5,6},{7,8}},
        {{9,10},{11,12}}
        };
    //int(*p)[2][2]=b;
    //cout<<*(*p+1)<<endl;
    cout<<(b+2)<<endl;
    cout<<*(*(*(b+1)+1)+1)<<endl;
    cout<<*(*(*(b+1)+3))<<endl;
    arey(b);
   /* int a[2][3]={
                {1,2,3},
                {4,5,6}
    };
    int (*p0)[3]=a;
    cout<<**p0+1<<endl;*/
}
