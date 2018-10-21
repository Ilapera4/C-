

main: main.o isPPM.o readPPM.o
	g++ -o main main.o isPPM.o readPPM.o
	

	
readPPM.o: readPPM.cc
	g++ -c -Werror readPPM.cc
	
isPPM.o: isPPM.cc	
	g++ -c -Werror isPPM.cc
	
main.o: main.cc
	g++ -c -Werror main.cc
	
clean:
	rm *.o main