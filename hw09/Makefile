all: main

main: main.o angle.o log.o fish.o population.o
	g++ -o main main.o angle.o log.o fish.o population.o
	
angle.o: angle.cc	
	g++ -c -Werror angle.cc
	
fish.o: fish.cc
	g++ -c -Werror fish.cc
	
population.o: population.cc
	g++ -c -Werror population.cc
	
log.o: log.cc
	g++ -c -Werror log.cc
	
main.o: main.cc
	g++ -c -Werror main.cc
	
clean:
	rm *.o main