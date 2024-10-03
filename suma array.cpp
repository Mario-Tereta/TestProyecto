#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int numeros []={1,2,3,4,5,6,7,8,9,10};
	int suma = 0;
	int e = 0;
	
	while (e <= 10){
		suma = suma + numeros[e];
		e++;
	}
	
	cout <<"la suma es: " <<suma <<endl;
	
	getch ();
	return 0;
}
