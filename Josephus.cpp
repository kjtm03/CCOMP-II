#include <iostream>
using namespace std;

struct nodo{
	int valor;
	nodo *sig;
};

nodo *cabeza;
nodo *cola;
nodo *n;
int num;

void insertar(int val){
	
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

void mostrar(){
	nodo *temp = cabeza;
	for(int i=0;i<num;i++){
		cout<<temp->valor<<" ";
		temp = temp->sig;
		if(temp==cabeza)break;
	}
	cout<<endl;
}
/*
bool comprobar(){
	bool comp = false;
	nodo *temp = cabeza;
	int cont = 0;
	while(temp != NULL){
	
		temp = temp->sig;
		cont += 1;
		cout<<cont;
		if(cont == 2){
			comp = true;
			mostrar();
		}
	}

	return comp;
}*/

void josephus(int n){
	for(int i=1;i<=n;i++){
		insertar(i);
	}
	cout<<"main: ";mostrar();
	for(int i=0;i<n-2;i++){
		nodo *temp = cabeza->sig->sig;
		cabeza->sig->sig = cabeza->sig->sig->sig;
		delete temp;
		cabeza = cabeza->sig->sig;
		//cout<<"for:";mostrar();
	}
	cout<<"Posiciones para sobrevivir:";mostrar();

}

int main()
{	
	cin>>num;
	josephus(num);
}
