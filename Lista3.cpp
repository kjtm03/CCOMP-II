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

void borrar(){
	nodo *temp = cabeza->sig;
	cabeza->sig = cabeza->sig->sig;
	delete temp;
}

int main(){
	
	insertar(2);
	insertar(3);
	insertar(4);
	insertar(1);
	
	mostrarSig();
	borrar();
	mostrarSig();
	
	//mostrarAnt();
	
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
