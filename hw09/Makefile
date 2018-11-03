

main: main.o angle.o log.o fish.o
	g++ -o main main.o angle.o log.o fish.o
	
angle.o: angle.cc	
	g++ -c -Werror angle.cc
	
log.o: log.cc
	g++ -c -Werror log.cc
	
fish.o: fish.cc
	g++ -c -Werror fish.cc
	
main.o: main.cc
	g++ -c -Werror main.cc
	
clean:
	rm *.o main