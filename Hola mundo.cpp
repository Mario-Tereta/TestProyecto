#include <iostream>
#include <locale.h>  
using namespace std;

int main() {
	setlocale (LC_CTYPE, "spanish");
   cout << "Hola, Mundo!" <<endl;
   cout << "Los ni�os deben aprender programaci�n a una temprana edad."; //Probando la letra � y tildes
    return 0;  
}
