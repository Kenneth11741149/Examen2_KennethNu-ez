output:	main.o Escenario.o Jugador.o Bombas.o Espina.o V.o Item.o Obstaculo.o
	g++ main.o Escenario.o Jugador.o Bombas.o Espina.o V.o Item.o Obstaculo.o -o Output
main.o: main.cpp
	g++ -c main.cpp
Escenario.o: Escenario.h Escenario.cpp
	g++ -c Escenario.cpp
Jugador.o:	Jugador.h Jugador.cpp
	g++ -c Jugador.cpp
Bombas.o: Bombas.h Bombas.cpp
	g++ -c Bombas.cpp
Espina.o:	Espina.h Espina.cpp
	g++ -c Espina.cpp
V.o:	V.h V.cpp
	g++ -c V.cpp
Item.o: Item.h Item.cpp
	g++ -c Item.cpp
Obstaculo.o: Obstaculo.h Obstaculo.cpp
	g++ -c Obstaculo.cpp
