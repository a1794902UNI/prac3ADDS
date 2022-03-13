all:run

run: Main.cpp Computer.o Avalanche.o Human.o Referee.o Player.o
	g++ Main.cpp Computer.cpp Avalanche.cpp Human.cpp Referee.cpp Player.cpp -o run

Player.o: Player.cpp
	g++ -c Player.cpp

Human.o: Player.o Human.cpp
	g++ -c Human.cpp Player.cpp


Computer.o: Player.o Computer.cpp
	g++ -c Computer.cpp Player.cpp

RandomComputer.o: Player.o Computer.o RandomComputer.cpp
	g++ -c Player.cpp Computer.cpp RandomComputer.cpp

Avalanche.o: Player.o Computer.o Avalanche.cpp
	g++ -c Computer.cpp Avalanche.cpp Player.cpp



Referee.o: Referee.cpp
	g++ -c Referee.cpp



