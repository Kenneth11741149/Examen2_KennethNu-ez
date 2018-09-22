#ifndef ESCENARIO_H
#define ESCENARIO_H

#include "Item.h"
#include "Bombas.h"
#include "Obstaculo.h"
#include "Jugador.h"


class Escenario
{
private:
	string nombre;
	Item*** matriz;
	vector<Bombas*> bombs;
public:
	Escenario();
	Escenario(string pnombre){
		nombre = pnombre;
		bombs.clear();
		matriz = new Item**[11];

		for(int i = 0; i < 11; i++){
			matriz[i] = new Item*[13];
		}
		for(int i = 0; i < 11; i++){
			for(int j = 0; j < 13; j++){
				matriz[i][j] = NULL;
			}
		}

		matriz[0][12]= new Jugador ("Robot",true,false,"B",0,12);
		matriz[10][12]= new Jugador ("Robot",true,false,"B",10,12);
		matriz[10][0]= new Jugador ("Robot",true,false,"B",10,0);
		//Aqui meto los obstaculos
		for(int i = 0; i < 11; i++){
			for(int j = 0; j < 13; j++){
				if( i % 2 == 0){

				} else {
					if(j % 2 == 0){

					} else {
						matriz[i][j] = new Obstaculo("O");
					}
				}
			}
		} 
		//FIN DE LA CREACION DE OBSTACULOS
	}

	void setMatriz(Item*** pmatriz){
		matriz = pmatriz;
	}

	Item*** getMatriz(){
		return matriz;
	}

	void CreatePlayer(string pnombre){
		matriz[0][0]= new Jugador (pnombre,true,true,"J",0,0);
	}

	void setBombs(vector<Bombas*> pbombs){
		bombs = pbombs;
	}

	vector<Bombas*> getBombs(){
		return bombs;
	}

	void setNombre(string pnombre){
		nombre = pnombre;
	}

	string getNombre(){
		return nombre;
	}

	void Move(string movement){
		int veces = 1;
		int tempfila = 0;
		int tempcolumna = 0;
		string fakemarca;
		if(movement.compare("W") == 0){
			
			for(int i = 0; i < 11; i++){
				for(int j = 0; j < 13; j++){
					if(dynamic_cast<Jugador*>(matriz[i][j])){
							fakemarca = matriz[i][j]->toString();
							tempfila = i;
							tempfila--;
							if(tempfila < 0 && fakemarca.compare("J") == 0){
								cout << "Movimiento Invalido" << endl;
							} else if(fakemarca.compare("J") == 0 && veces == 1 && matriz[tempfila][j] == NULL ) {
								matriz[tempfila][j] = matriz[i][j];
								matriz[i][j] = NULL;
								veces--;
							}
					}
				}
			}
		} else if(movement.compare("S") == 0){
			
			for(int i = 0; i < 11; i++){
				for(int j = 0; j < 13; j++){
					if(dynamic_cast<Jugador*>(matriz[i][j])){
							fakemarca = matriz[i][j]->toString();
							tempfila = i;
							tempfila++;
							if(tempfila > 12 && fakemarca.compare("J") == 0){
									cout << "Movimiento invalido." << endl;
							} else if(fakemarca.compare("J") == 0 && veces == 1 && matriz[tempfila][j] == NULL){
								//cout << "Done. " << endl;
								matriz[tempfila][j] = matriz[i][j];
								matriz[i][j] = NULL;
								veces--;
							}
					}
				}
			}
		} else if(movement.compare("A") == 0){

		
			for(int i = 0; i < 11; i++){
				for(int j = 0; j < 13; j++){
					if(dynamic_cast<Jugador*>(matriz[i][j])){
							fakemarca = matriz[i][j]->toString();
							tempcolumna = j;
							tempcolumna--;
							if(tempcolumna < 0 && fakemarca.compare("J") == 0){
									cout << "Movimiento invalido." << endl;
							} else if(fakemarca.compare("J") == 0 && veces == 1 && matriz[i][tempcolumna] == NULL){
								//cout << "Done. " << endl;
								matriz[i][tempcolumna] = matriz[i][j];
								matriz[i][j] = NULL;
								veces--;
							}
					}
				}
			}



		} else if(movement.compare("D") == 0){


			
			for(int i = 0; i < 11; i++){
				for(int j = 0; j < 13; j++){
					if(dynamic_cast<Jugador*>(matriz[i][j])){
							fakemarca = matriz[i][j]->toString();
							tempcolumna = j;
							tempcolumna++;
							if(tempcolumna > 12 && fakemarca.compare("J") == 0){
									cout << "Movimiento invalido." << endl;
							} else if(fakemarca.compare("J") == 0 && veces == 1 && matriz[i][tempcolumna] == NULL){
								//cout << "Done. " << endl;
								matriz[i][tempcolumna] = matriz[i][j];
								matriz[i][j] = NULL;
								veces--;
							}
					}
				}
			}



		}



	}
	void Print(){
		for(int i = 0; i < 11; i++){
			for(int j = 0; j < 13; j++){
				if(matriz[i][j] == NULL){
					cout << "[ ]";
				} else{
					cout << "[" << matriz[i][j] -> toString() << "]";
				}
			}
			cout << endl;
		}
	}
	~Escenario(){

	}
	
};
#endif