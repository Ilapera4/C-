

main: main.o angle.o 
	g++ -o main main.o angle.o
	
angle.o: angle.cc	
	g++ -c -Werror angle.cc
	
main.o: main.cc
	g++ -c -Werror main.cc
	
clean:
	rm *.o main