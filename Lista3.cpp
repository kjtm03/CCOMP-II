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

void insertar(nodo *&cabeza, int val){
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
		cola->sig = NULL;	
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
	
	insertar(cabeza, 1);
	insertar(cabeza, 2);
	insertar(cabeza, 3);
	insertar(cabeza, 4);
	
	mostrarSig();
	mostrarAnt();
	
	/*n = new nodo();
	n->valor = 1;
	n->ant = NULL;
	cabeza = n;
	cola = n;
	
	n = new nodo();
	n->valor = 2;
	n->ant = cola;
	cola->sig = n;
	cola = n;
	cola->sig = NULL;*/
}
