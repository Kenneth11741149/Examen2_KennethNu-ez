#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <sstream>
using std::stringstream;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Escenario.h"
#include "Item.h"
#include "Bombas.h"
#include "V.h"
#include "Espina.h"
#include "Normal.h"
#include "Jugador.h"
#include "Obstaculo.h"

int intEntry(){
	int numero = 0;
	string input = "";
	stringstream stream;
	stringstream().swap(stream);
	cin >> input;
	stream << input;
	stream >> numero;
	return numero;

}

int main(){
	char resp = 'S';
	string input = "";

	//
	int option = 0;

	Escenario* Invisible = new Escenario("Invisible");
	


	cout << "Ingrese su nombre" << endl;
	cin >> input;
	Invisible -> CreatePlayer(input);
	Invisible -> Print();
	while(resp == 'S' || resp == 's'){
		cout << endl;
		cout << "1. Mover." << endl;
		cout << "Ingrese su accion:" << endl;
		option = intEntry();

		switch(option){
			case 1:
				{ // Inicio del scope case 1 switch(option)
					cout << "Ingrese sus movimientos" << endl;
					input = "";
					cin >> input;
					cout << "Input size" << input.size() << endl;
					for(int i = 0; i < input.size();i++){
						string W = "W";
						string w = "w";
						string S = "S";
						string s = "s";
						string A = "A";
						string a = "a";
						string D = "D";
						string d = "d";

						if(input.substr(i,1).compare(W) == 0||  input.substr(i,1).compare(w) == 0){
							cout << "Ingreso una W" << endl;
							Invisible->Move("W");		
						} else if(input.substr(i,1).compare(S)== 0|| input.substr(i,1).compare(s) == 0){
							cout << "Ingreso S" << endl;
							Invisible->Move("S");		
						} else if(input.substr(i,1).compare(A) == 0|| input.substr(i,1).compare(a) == 0){
							cout <<  "Ingreso una A" << endl;
							Invisible->Move("A");
						} else if(input.substr(i,1).compare(D) == 0|| input.substr(i,1).compare(d) == 0){
							cout << "Ingreso una D" << endl;
							Invisible->Move("D");
						}
					}

					Invisible -> Print();
				}// Fin del scope case 1 switch(option))
				break;
			default:
				cout << "Opcion Invalida " << endl;
				break;


		}  //Fin de switch option.

	

		cout << "Desea volver al menu? [S/N]" << endl;
		cin >> resp;
	} // fin del while de respuesta de usuario.



	return 0;
} // Fin de la funcion main.