#include <iostream>
#include <stdlib.h>
using namespace std;

void suma(int a,int b,int c)
{
    int x = (a+b)%c;
    if(x < 0){
        x = x + c;
    }
    cout<<"\n";
    cout<<"Resultado: "<<x<<endl;
}
void resta(int a,int b,int c)
{
    int x = (a-b)%c;
    if(x < 0){
        x = x + c;
    }
    cout<<"\n";
    cout<<"Resultado: "<<x<<endl;
}
void multi(int a,int b,int c)
{
    int x = (a*b)%c;
    while(x > c){
        x = x%c;
    }
    if(x < 0){
        x = x + c;
    }
    cout<<"\n";
    cout<<"Resultado: "<<x<<endl;
}
void inverso(int a,int c)
{
    for(int b = 0;b < c;b++){
        int x = (a*b)%c;
        if(x < 0){
            x = x + c;
        }
        if(x == 1){
            cout<<"\n";
            cout<<"Resultado: "<<b<<endl;
            break;
        }
        if(b == c-1 && x != 1){cout<<"No existe inverso modular \n";}
    }
}
int main()
{
    int a,b,c;
    char tecla;
        system("cls");
        cout << "                             Calculador Modular v1.0" << endl;
        cout << "                             -----------------------" << endl << endl;
        cout << "                          \t1 .- Suma" << endl;
        cout << "                          \t2 .- Resta" << endl;
        cout << "                          \t3 .- Multiplicacion" << endl;
        cout << "                          \t4 .- Inverso Modular" << endl;
        cout << "                          Elije una opcion: ";
        cin >> tecla;

		switch(tecla)
		{
			case '1':
				system("cls");
                cout<<"Ingrese 2 numeros: "<<endl;
                cin>>a;cin>>b;
                cout<<"Ingrese el modulo: "<<endl;
                cin>>c;
                suma(a,b,c);
				break;

			case '2':
				system("cls");
                cout<<"Ingrese 2 numeros: "<<endl;
                cin>>a;cin>>b;
                cout<<"Ingrese el modulo: "<<endl;
                cin>>c;
                resta(a,b,c);
				break;

			case '3':
				system("cls");
                cout<<"Ingrese 2 numeros: "<<endl;
                cin>>a;cin>>b;
                cout<<"Ingrese el modulo: "<<endl;
                cin>>c;
                multi(a,b,c);
				break;

            case '4':
				system("cls");
                cout<<"Ingrese 1 numero: "<<endl;
                cin>>a;
                cout<<"Ingrese el modulo: "<<endl;
                cin>>c;
                inverso(a,c);
				break;

			default:
				system("cls");
				break;
		}
}
