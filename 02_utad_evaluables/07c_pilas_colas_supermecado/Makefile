.PHONY: main run run_test clean

# Compila el programa principal
main: mainSupermercado.cpp Supermercado.cpp Cola.cpp
	g++ mainSupermercado.cpp Supermercado.cpp Cola.cpp -o main

# Compilación con flags de depuración
flags: mainSupermercado.cpp Supermercado.cpp Cola.cpp
	g++ -Wall -Wextra -std=c++17 mainSupermercado.cpp Supermercado.cpp Cola.cpp -o main

run: main
	./main

run_test: main
	./main < 2.in

clean:
	rm -rf main