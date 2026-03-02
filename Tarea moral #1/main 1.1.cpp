#include <iostream>
#include <string>
using namespace std;

int main (int argc, char *argv[]) {
	
	// Cajas de bienvenida!
	
	cout << string(19, '*') ;
	cout << "\t "<<string(19, '=') ;
	cout << "\t "<< "+"<< string (9, '-') <<"+"<<endl;
	
	cout << "*" << string(17, ' ') << "*" ;
	cout << "\t " << "||" << string(15, ' ') << "||" ;
	cout << "\t " << "|"<< string(9, ' ') << "|" << endl;
	
	cout << "*" << string(3, ' ') <<"Bienvenido!" << string(3, ' ') << "*" ;
	cout << "\t " << "||" << string(2, ' ') << "Bienvenido!" << string(2, ' ') <<"||";
	cout << "\t" << " |" << "  Hola!  "<< "|"<<endl;
	
	cout << "*" << string(17, ' ') << "*";
	cout << "\t "<<"||" << string(15, ' ') << "||";
	cout << "\t " << "|"<< string(9, ' ') << "|" << endl;
	
	cout << string(19, '*') ;
	cout << "\t " <<string (19, '='); 
	cout << "\t " <<"+"<<string (9, '-') <<"+"<< endl;
	
	cout <<"\n \n";
		
	// Figuras
	cout <<"   *"<< "\t  " << "****" << "\t  " << "****" << endl;
	cout <<"  **"<< "\t  " << "*** " << "\t  " << "****" << endl;
	cout <<" ***"<< "\t  " << "**  " << "\t  " << "****" << endl;
	cout <<"****"<< "\t  "<<  "*   " << "\t  " << "****" << endl;
	return 0;
}
