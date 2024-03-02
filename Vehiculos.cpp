
//estructura de como se realiza una clase
#include <iostream>
#include <string>

using namespace std;

//declaramos la clase vehículo
class vehiculo{
	public:
		//atributos de la clase
		string marca;
		string color;
		float modelo;
		string tipo_de_combustible;
		
		//constructor para linicializar atributos
		vehiculo(string _marca, string _color, float _modelo,string _tipo_de_combustible) {//valor del parametro cada uno
			marca= _marca;
			color= _color;
			modelo= _modelo;
			tipo_de_combustible= _tipo_de_combustible;
			
			
			//imprimimos mensaje para indicar que el objeto se creo
			cout<<"Se creo el objeto vehiculo"<<endl;
			}
			
			//destructor se ejecuta cuando se destruye un objeto de la clase
			
			~vehiculo(){
				//imprimimos un mensaje
				cout<<"se destruyo el objeto vehiculo"<<endl;
			}
			
			//agragamos metodos y acciones del objeto
			//metodo qye representa la accion de encender vehiculo
			void encender(){
				cout<<"el vehiculo esta encendido. "<<endl;
			}
			
				//metodo qye representa la accion de apagar vehiculo
			void apagar(){
				cout<<"El vehiculo esta apagado. "<<endl;
			}
	
			
};

//funcion principal Main
int main(){
	//creamos un objeto
	 vehiculo tractor("verde","Jhondere",2000,"Diesel");
	tractor.encender();
	tractor.apagar();
	
		//creamos un objeto
	 vehiculo mulita ("Azul","rzr",2023,"gasolina");
	 mulita.encender();
	mulita.apagar();
	
  return 0;
}

