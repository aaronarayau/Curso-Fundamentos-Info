
#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	
	int cantDias = 9999;
	string dia = "";
	
	
	cout << "Si hoy es jueves, dentro de ___ dias sera? \n" << dia;
	cout << "\n";
	cin >> cantDias ;
	cout << "\n";
	
	if(cantDias%7 == 0) {
	cout << "Es jueves" << endl;
	}
	
	if(cantDias%7 == 1) {
		cout << "Es viernes" << endl;
	}
	
	if(cantDias%7 == 2) {
		cout << "Es sabado" << endl;
	}
	
	if(cantDias%7 == 3) {
		cout << "Es domingo" << endl;
	}
	
	if(cantDias%7 == 4) {
		cout << "Es lunes" << endl;
	}
	
	if(cantDias%7 == 5) {
		cout << "Es martes" << endl;
	}
	
	if(cantDias%7 == 6) {
		cout << "Es miercoles" << endl;
	}
	
	cout << "\n \n";
	cout << "\t ***********************" << endl ;
	cout << "\t **                   **" << endl ;
	cout << "\t *   DISFRUTA TU DIA   *" << endl ;
	cout << "\t **                   **" << endl ;
	cout << "\t ***********************" << endl ;
	
	

	
	 int numDado1 = 421;
	 int unidades, decenas, centenas;
	 
	centenas = numDado1/100 ;
	
	decenas = (numDado1 - centenas*100)/10;
	
	unidades = (numDado1- centenas*100 - decenas*10);
	
	cout << "\n \n \n";
	cout << "centenas \t \t" << centenas << endl;
	cout << "decenas \t \t" << decenas << endl;
	cout << "unidades \t \t" << unidades << endl;
	

	
	// Forma numero 2

	int numDado2 = 568;
		
		centenas = numDado2/100 ;
		decenas = (numDado2/10)%10 ; //La parte entre parentesis es el cociente
		unidades = numDado2%10; //Lo que queda por fuera es para sacar el residuo
		
		cout << "\n" ;
		cout << "centenas \t \t" << centenas << endl;
		cout << "decenas \t \t" << decenas << endl;
		cout << "unidades \t \t" << unidades << endl;
		
		cout << "\n \n \n";
		
		int  x, y;
		
		x = 5;
		y = 6;
		
		x = 5 + 10;
		y = 6- 4;
		
		y = x + 7;
		
		
		// escritura abreviada
		x += 10;
		x -= 10;
		x *= 10;
		x /= 10;
		x %= 10;
		
		//preincrementos
		++x;
		
		//posincremento
		x++;
		
		x = 5; // x=5
		y = x++; // y = x (osea5) y despues aumento x (osea x = 6)
		y = ++x; // aumento x (osea x =6) y despues asigno el valor a y (osesa y = 6)
		
		cout << "Soy x y valgo: " <<x << endl;
		cout << "Soy y y valgo: " <<y << endl;
	return 0;
}
