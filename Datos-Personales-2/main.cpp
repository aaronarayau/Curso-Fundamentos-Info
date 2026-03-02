#include<iostream>
#include <thread>
#include <chrono>

using namespace std;

int main (int argc, char *argv[]) {
	
	int edad;
	string nombre;
	string apellido1;
	string apellido2;
	
	
	cout << "\t" "Cu" <<char(160)<< "l es su nombre?: " ;
	getline (cin, nombre) ;
	
	cout << "Cu"  <<char(160)<< "l es su primer apellido?: " ;
	getline (cin, apellido1) ;
	
	cout << "Cu"  <<char(160)<< "l es su segundo apellido?: " ;
	cin.ignore (3) ;
	getline (cin, apellido2) ;
	
	cout << "Cu"  <<char(160)<< "l es su edad?: " ;
	cin >> edad ;
	
	cout << "\n" ;
	
	system("cls");
	
	cout << "Usted es " << nombre << " "<< apellido1 << " " << apellido2 << " "<< " y tiene " <<edad << " a"  <<char(164)<< "os" ;
	
	cout << "\n \n \n" ;
	
		cout << "-------------------------------------- \n" ;
		cout << "-                                    - \n";
		cout << "- Muchas gracias por usar el sistema - \n";
		cout << "-                                    - \n";
		cout << "-------------------------------------- \n";
		
	return 0;
}

