#include <iostream>
using namespace  std;
#include "characters.h"

int main() 
{
	cout << "Personaje: " << endl;
  Personaje personaje = Personaje(100, 0.5);
  personaje.print();

	cout << "\nWizard: " << endl;
	Personaje wizard = ++personaje;
	wizard.print();
	
	cout << "\nGandalf: " << endl;
	Personaje gandalf = personaje + wizard;
	gandalf.print();

	cout << "\nResumen: " << endl;
	cout << "G: " << gandalf << " P: " << personaje << endl;

	if (gandalf == Personaje(200, 3.0)) //o == personaje
	{
		cout << "\nson iguales " << endl;
	}
	else
	{
		cout << "\nno son iguales " << endl;
	}

  return 0;
}