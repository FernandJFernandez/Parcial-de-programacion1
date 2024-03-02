
//estructura de como se realiza una clase
#include <iostream>
#include <string>

using namespace std;

//declaramos la clase vehículo
class animal{
	public:
		//atributos de la clase
		string raza;
		string color;
		float edad;
		float peso;
		
		//constructor para linicializar atributos
		animal(string _raza, string _color, float _edad,float _peso) {//valor del parametro cada uno
			raza= _raza;
			color= _color;
			edad= _edad;
			peso= _peso;
			
			
			//imprimimos mensaje para indicar que el objeto se creo
			cout<<"Se creo el objeto animal"<<endl;
			}
			
			//destructor se ejecuta cuando se destruye un objeto de la clase
			
			~animal(){
				//imprimimos un mensaje
				cout<<"se destruyo el objeto animal"<<endl;
			}
			
			//agragamos metodos y acciones del objeto
			//metodo qye representa la accion de encender vehiculo
			void pastando(){
				cout<<"el animal esta pastando "<<endl;
			}
			
				//metodo qye representa la accion de apagar vehiculo
			void durmiendo(){
				cout<<"El animal esta durmiendo "<<endl;
			}
	
			
};

//funcion principal Main
int main(){
	//creamos un objeto
	 animal oveja("yersey","negra",23,300);
	oveja.pastando();
	oveja.durmiendo();
	
		//creamos un objeto
	 animal vaca ("montañes","blanca",24,30);
	vaca.pastando();
	vaca.durmiendo();
	
	animal gallina ("peluca","blanca",33,20);
	 gallina.pastando();
	gallina.durmiendo();
  return 0;
}

