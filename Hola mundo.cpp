#include <iostream>
#include <locale.h>  
using namespace std;

int main() {
	setlocale (LC_CTYPE, "spanish");
   cout << "Hola, Mundo!" <<endl;
   cout << "Los niños deben aprender programación a una temprana edad."; //Probando la letra Ñ y tildes
    return 0;  
}
