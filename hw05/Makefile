

main: main.o isPPM.o 
	g++ -o main main.o isPPM.o
	
isPPM.o: isPPM.cc	
	g++ -c -Werror isPPM.cc
	
main.o: main.cc
	g++ -c -Werror main.cc
	
clean:
	rm *.o main