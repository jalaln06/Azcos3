output: main.o solution.o
	 g++ main.o solution.o -o output
main.o: main.cpp
	g++ -c main.cpp
solution.o: solution.cpp solution.h
	g++ -c solution.cpp 
clean:
	rm *.o output
