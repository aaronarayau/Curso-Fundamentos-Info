#include<iostream>
#include<math.h>
using namespace std;

int main (int argc, char *argv[]) {
	
	cout<< "1. Suma " <<endl;
	cout<< "2. Resta " <<endl;
	cout<< "3. Multiplicacion " <<endl;
	cout<< "4. Division " <<endl;
	cout<< "5. Division euclidea " <<endl;
	cout<< "6. log " <<endl;
	cout<< "7. raiz " <<endl;
	cout<< "8. Sen " <<endl;
	cout<< "9. Cos " <<endl;
	cout<< "10. Tan " <<endl;
	
	int opcion;
	cout << "\n \n Digite una opcion"<< endl;
	cin>>opcion;
	
		if(opcion <1 || opcion >10){
		
		cout<<"Numero no valido, intente de nuevo";
		
		};
	
	cout <<"\n Opcion seleccionada, presione 'enter' para continuar";
	cin.ignore();
	cin.get();
	system ("cls");

	
	int  a;
	int	b;
	float afloat = float(a);
	float bfloat = float(b);
	
	
	 if (opcion == 1){
		 cout<<"Digite el valor de a""\n";
		 cin >> a;
		 cout<<"Digite el valor de b""\n";
		 cin >> b;
		 cout <<"suma = "<< a+b;
	 };
	
	 if (opcion == 2){
		 cout<<"Digite el valor de a""\n";
		 cin >> a;
		 cout<<"Digite el valor de b""\n";
		 cin >> b;
		 cout<<"resta = "<< a-b;
	 };
	 
	 if (opcion == 3){
		 cout<<"Digite el valor de a""\n";
		 cin >> a;
		 cout<<"Digite el valor de b""\n";
		 cin >> b;
		 cout<<"multiplicacion = "<< a*b;
	 };
	 
	 if (opcion == 4){
		 cout<<"Digite el valor de a""\n";
		 cin >> a;
		 cout<<"Digite el valor de b""\n";
		 cin >> b;
		 if (b == 0){
			 cout<<"Operacion no disponible, intente nuevamente";
			 return 0;
		 };
		 cout<<"division = "<< a/b;

	 };

	 if (opcion == 5){
		 cout<<"Digite el valor de a""\n";
		 cin >> a;
		 cout<<"Digite el valor de b""\n";
		 cin >> b;
			 cout<<"division euclidea = "<< a;
		 };
	 
	 if (opcion == 6){
		 cout<<"Digite el valor de a""\n";
		 cin >> afloat;
		 cout<<"Digite el valor de b""\n";
		 cin >> bfloat;
		 if(bfloat <=0 || afloat<=0 || afloat==1){
			 cout <<"Datos no validos, intene nuevamente";
			 return 0;
			};
		 cout<<"\n log_"<<afloat<<"("<<bfloat<<") = "<< (float(log(afloat)))/(float(log(bfloat)));
	 };
		 
	 if (opcion == 8){
		 cout<<"Digite el valor de a""\n";
		 cin >> afloat;

		 const double Pi = 3.141592;
		 float rad = (a* Pi)/(180);
		 cout<< "Sen("<<a<<") = " << sin(a);
	 };

return 0;
}
