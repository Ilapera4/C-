

main: main.o angle.o 
	g++ -o main main.o angle.o log.o
	
angle.o: angle.cc	
	g++ -c -Werror angle.cc
	
log.o: log.cc
	g++ -c -Werror log.cc
	
main.o: main.cc
	g++ -c -Werror main.cc
	
clean:
	rm *.o main