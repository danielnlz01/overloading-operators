#include <vector>

class Personaje
{
  private:
   int stamina;
   double level;
  
  public:
  	Personaje(int stamina = 0, double level = 0)
		{
    	this-> stamina = stamina;
    	this->level  = level;
  	}

  	virtual void print() 
		{
    	cout << "st: " << this->stamina << endl;
    	cout << "lv: " << this->level << endl;
  	}

		Personaje operator++() //incrementa solo al nivel / Unario
		{
			level += 1.0;
			return Personaje(stamina, level);
		} 

		Personaje operator+(const Personaje & personaje_02) //binario, const hace inmutable al objeto que recibe, & referencia de acceso al objeto original
		{
			return Personaje(stamina + personaje_02.stamina, level + personaje_02.level);
		} 

		bool operator==(const Personaje & personaje_02)
		{
			return level == personaje_02.level && stamina == personaje_02.stamina;
		}

		friend ostream& operator<<(ostream& salida, const Personaje & personaje); //salida es como una palabra a la que hace referencia el output, friend le da acesso a privado, publico y protegido
		
};

ostream& operator<<(ostream& salida, const Personaje & personaje)
{
	salida << personaje.level << ", " << personaje.stamina;
	return salida;
}