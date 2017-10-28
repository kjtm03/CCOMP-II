#include <iostream>

using namespace std;

void impr(int *x)
{
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
                if(*x<10){cout<<"  "<<*x;}
                else{cout<<" "<<*x;}
                x++;
            }
            cout<<"\n";
    }
    //cout<<*x<<endl;
}
int main()
{
    int a[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,0}
        };
    int (*b)[4] = a;
    int *A;
    A = *b;
    impr(A);

}