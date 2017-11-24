#include<iostream>
using namespace std;

struct nodo{
	int valor;
	nodo *sig;
};

nodo *cabeza;
nodo *cola;
nodo *n;
int cont = 0;

void final(int val){
	cont += 1;
	if(cabeza == NULL){
		n = new nodo();
		n->valor = val;
		n->sig = n;
		cabeza = n;
		cola = n;
	}
	else{
		n = new nodo();
		n->valor = val;
		cola->sig = n;
		cola = n;
		cola->sig = cabeza;	
	}
}

void inicio(int val){
	cont += 1;
	if(cabeza == NULL){
		n = new nodo();
		n->valor = val;
		n->sig = n;
		cabeza = n;
		cola = n;
	}
	else{
		n = new nodo();
		n->valor = val;
		n->sig = cabeza;
		cabeza = n;
		cola->sig = cabeza;	
	}
}
void mostrar(){
	nodo *temp = cabeza;
	for(int i=0;i<cont;i++){
		cout<<temp->valor<<" ";
		temp = temp->sig;
	}
	cout<<endl;
}

void borrar(){
	nodo *temp = cabeza->sig;
	cabeza->sig = cabeza->sig->sig;
	delete temp;
}

int main(){
	
	inicio(1);
	inicio(2);
	final(3);
	inicio(4);
	mostrar();
	borrar();
	mostrar();
	
}
