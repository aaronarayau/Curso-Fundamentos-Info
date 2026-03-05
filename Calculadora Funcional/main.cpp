#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	
	//Codigo base 1-10 de la disfuncional
	
	switch (opcion){
		
	case 1:
		//haga la suma
		break;
	case 2:
		//haga la resta
		cout << "resta =" << a-b;
		break;  //Break sale del switch
		default :
			// cout << "Intente de nuevo" << endl;
			
	case 4:
		
		if(b == 0){
			cout << "Intente de nuevo" << endl;
			return 0;
		}else{
			cout<<"division =" << float(a)/b;
		};
	}
	
	return 0;
}

