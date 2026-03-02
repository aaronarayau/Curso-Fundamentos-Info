#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	//enteros
	short a = 20; //la variable nace valiendo 20
	int b = 20;
	long c = 20L; //Long es para cuando ocupo que el numero sea muy grande en un fututo
	
	cout << "soy a y valgo: " <<a << endl;
	
	a = 40; // le digo a la variante que ahora vale 40
	
	cin.ignore (2);
	cout << "soy a y valgo: " << a << endl; //la variable muestra su numero actual
	
	//decimales
	
	// variables flotantes y dobles
	
	float f = 13.4f;     //  +/- 7 cifras significativas -decimales
	double d = 1.23589; //   +/- 15 cifras significativas -decimales
	cin.ignore (2);
	cout <<"\n \n" ;
	cout << "soy f y valgo:" << endl;
	cout << f ;
	
	// caracteres
	char caract = 'a';
	
	//Boleanos, solo hay dos, t y f
	
	bool ok = true;
	bool nook = false ;
	
	cout << "\n \n Soy ok y valgo:" << ok;
	cout << "\n \n Soy ok y valgo:" << nook;
	
	return 0;
}

