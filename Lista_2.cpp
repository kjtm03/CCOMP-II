#include <iostream>
using namespace std;

int valor,x;

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
        //cout<<"valor: "<<temp1->valor;
    }
    if(lista == temp1){lista = nodoNuevo;}

    else{temp2->sig = nodoNuevo;}

    nodoNuevo->sig = temp1;
    //cout<<nodoNuevo->sig<<" ,este"<<endl;
}

void mezclar(nodo *lista1, nodo *lista2, nodo *&lista3)
{
	nodo *ptr1 = new nodo();
	ptr1 = lista1;
	nodo *ptr2 = new nodo();
	ptr2 = lista2;
	while(ptr1 != NULL){
		/*if(ptr1 == NULL){
			insertar(lista3,ptr2->valor);
			ptr1 = ptr2->sig;
		}
		if(ptr2 == NULL){
			insertar(lista3,ptr1->valor);
			ptr1 = ptr1->sig;
		}
		insertar(lista3,ptr1->valor);
		ptr1 = ptr1->sig;*/
		insertar(lista3,ptr1->valor);
		ptr1 = ptr1->sig;
	}
	while(ptr2 != NULL){
		insertar(lista3,ptr2->valor);
		ptr2 = ptr2->sig;
	}
}

void mostrar(nodo *lista)
{
	nodo *posicion = new nodo();
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
	if(temp == true){cout<<"El elemento se encuentra en las lista"<<endl;}
	else{cout<<"El elemento NO se encuentra en la lista"<<endl;}
}

int main()
{
	nodo *lista1 = NULL;
    nodo *lista2 = NULL;
    nodo *lista3 = NULL;
    
	    cout<<"Elementos a ingresar: ";
	    cin>>x;
	  	for(int i=0;i<x;i++){
	  		cin>>valor;
	    	insertar(lista1,valor);
		  }
		cout<<endl;
		
		cout<<"Elementos a ingresar: ";
	    cin>>x;
	  	for(int i=0;i<x;i++){
	  		cin>>valor;
	    	insertar(lista2,valor);
		  }
		cout<<endl;
		mostrar(lista1);
		mostrar(lista2);
		mezclar(lista1,lista2,lista3);
		mostrar(lista2);
		cout<<endl;
		cout<<"lista3: "<<endl;
		mostrar(lista3);
	/*cout<<"Buscar elemento: ";
	cin>>x;
    buscar(lista, x);*/
}



