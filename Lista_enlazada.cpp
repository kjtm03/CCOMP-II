#include <iostream>

using namespace std;
struct nodo
{
    int valor;
    nodo *sig;
};

void insertar(nodo *&lista, int v)
{
    nodo *nodoNuevo = new nodo();
    nodoNuevo->valor = v;
    nodo *temp1 = lista;
    nodo *temp2;

    while((temp1 != NULL) && (temp1->valor < v)){
        temp2 = temp1;
        temp1 = temp1->sig;
    }
    if(lista == temp1){
        lista = nodoNuevo;
    }
    else{
        temp2->sig = nodoNuevo;
    }
    nodoNuevo->sig = temp1;
}

void mostrar(nodo *lista)
{
	nodo *posicion = new  nodo();
	posicion = lista;
	while(posicion != NULL){
		cout<<posicion->valor<<", ";
		posicion = posicion->sig;
	}
}

void buscar(nodo *lista,int n)
{
	bool temp = false;
	nodo *buscado = new nodo();
	buscado = lista;
	while((buscado != NULL) && (buscado->valor <= n)){
		if(buscado->valor == n){temp = true;}
		else{buscado = buscado->sig;}
		}
	if(temp == true){cout<<"El elemento se encuentra en las lista\n";}
	else{cout<<"El elemento NO se encuentra en la lista\n";}
}

int main()
{
    nodo *lista = NULL;
    int valor,x;
    cout<<"Elementos a ingresar: ";
    cin>>x;
  	for(int i=0;i<x;i++){
  		cin>>valor;
    	insertar(lista,valor);
	  }
	mostrar(lista);
	cout<<endl;
	cout<<"Buscar elemento: ";
	cin>>x;
    buscar(lista, x);
}



