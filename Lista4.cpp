#include<iostream>
using namespace std;

struct nodo{
	int valor;
	nodo *sig;
	nodo *ant;
};

nodo *cabeza;
nodo *cola;
nodo *n;

void insertar(int val){
	if(cabeza == NULL){
		n = new nodo();
		n->valor = val;
		n->ant = NULL;
		cabeza = n;
		cola = n;
	}
	else{
		n = new nodo();
		n->valor = val;
		n->ant = cola;
		cola->sig = n;
		cola = n;
		cola->sig = cabeza;	
	}
	
}

void mostrarSig(){
	nodo *temp = cabeza;
	while(temp != NULL){
		cout<<temp->valor<<" ";
		temp = temp->sig;
	}
	cout<<endl;
}

void mostrarAnt(){
	nodo *temp = cola;
	while(temp != NULL){
		cout<<temp->valor<<" ";
		temp = temp->ant;
	}
	cout<<endl;
}

int main(){
	
	insertar(1);
	insertar(2);
	insertar(3);
	insertar(4);
	
	mostrarSig();
	mostrarAnt();
}
