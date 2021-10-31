CXX = g++

.PHONY: all clean

cadena: cadena.o
	$(CXX) -g conjuntos_main.cpp cadena.cpp alphabet.cpp -o cadena.o

clean :
	rm -f cadena *.o
	rm -rf *~ basura b i