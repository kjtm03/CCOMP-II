#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

Nodo *lista_1 = NULL;
Nodo *lista_2 = NULL;
int dato,x;

void insertar(Nodo *&lista, int n){
	
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n))
	{
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1)
	{
		lista =nuevo_nodo;
	}
	
	else
	{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	
}

void mostrar(Nodo *lista)
{
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL)
	{
		cout<<actual->dato<<" ";
		actual = actual->siguiente;
	}
}

void mezcla(Nodo *&lista_1, Nodo *lista_2)
{
	Nodo *auxiliar;
	int reversa;
	
	Nodo *primero=lista_1;
	Nodo *segundo=lista_2;
	/*Nodo *primero = new Nodo();
	primero = lista_1;
	
	Nodo *segundo = new Nodo();
	segundo = lista_2;*/
	
	if((primero->dato) > (segundo->dato))
	{
		reversa = primero->dato;
		primero->dato = segundo->dato;
		segundo->dato = reversa;
	}
	
	while(primero!= NULL || segundo->siguiente != NULL)
	{
		if((primero->siguiente)->dato > (segundo->dato))
		{
			auxiliar=primero->siguiente;
			primero->siguiente = segundo;
			segundo = auxiliar;
		}
		
		primero = primero->siguiente;
			
		if(primero->siguiente == NULL)
		{
			primero->siguiente = segundo;
			break;
		}
	}
	
}
int main()
{
		cout<<"Elementos a ingresar: ";
	    cin>>x;
	  	for(int i=0;i<x;i++){
	  		cin>>dato;
	    	insertar(lista_1,dato);
		  }
		cout<<endl;
		
		cout<<"Elementos a ingresar: ";
	    cin>>x;
	  	for(int i=0;i<x;i++){
	  		cin>>dato;
	    	insertar(lista_2,dato);
		  }
		cout<<endl;
		/*insertar(lista_1,1);
		insertar(lista_1,3);
		insertar(lista_1,5);
		insertar(lista_1,7);
		mostrar(lista_1);
		cout<<endl;
		insertar(lista_2,2);
		insertar(lista_2,4);
		insertar(lista_2,6);
		mostrar(lista_2);*/
		mezcla(lista_1, lista_2);
		cout<<endl;
		cout<<"mezcla: ";mostrar(lista_1);
		//cout<<"mezcla2: ";mostrar(lista_2);

}
