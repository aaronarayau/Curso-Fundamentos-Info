#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {

	//el tamaño del array es fijo y definido en el momento de su creacion
	int mirey[5]; //Definido mas no inicializado
	
	mirey[0] = -1;
	mirey[1] = 2;
	mirey[2] = 5;
	mirey[3] = 90;
	mirey[4] = 37;
	
	//mostrar informacion
	
	for (int i = 1; i < 5 ;i++){
		cout << "El valor del Array en la posicion " << i <<" es " <<mirey[i]<<endl;
	}
	
	int mireyna[5] = {1,23,4,56,73};
	
	for (int i = 1; i < 5 ;i++){
		cout <<endl<<endl<< "El valor del Array en la posicion " << i <<" es " <<mireyna[i]<<endl;
	}
	system ("cls");
	
	int tam = 5;
	
	int myking[tam];
	
	for(int i = 0; i < tam; i++){
	int dato;
	
	cout<<"Digite el valor del array en la casilla " << i<<" ";
	cin >> dato;
	 myking [i] = dato;
	 
}
	for(int i = 0; i < tam; i++){
		cout <<endl<<endl<< "El valor del Array en la posicion " << i <<" es " <<myking[i]<<endl;
	}
	cin.ignore(2);
	system ("cls");
	
	//Dos arrays son iguales si la informacion almacenada en ellos casilla por casilla es igual.
	
	bool iguales = true;
	
	tam = 5;
	
	int vector1[tam] = {0,1,2,3,4};
	int vector2[tam] = {0,1,2,3,4};
	
	for (int i = 0; i < tam; i++){
		
		if(vector1[i] != vector2[i]){
			iguales = false;
			break;
		}
	}
	
	if(iguales){
		cout <<"Los arrays son iguales"<<endl;
	} else {
		cout << "Los arrays son diferentes"<<endl;
	}
	return 0;
}

