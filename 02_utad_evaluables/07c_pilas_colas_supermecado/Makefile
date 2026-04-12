.PHONY: main run run_test clean

main: main.cpp Supermercado.cpp Cola.cpp
	g++ main.cpp Supermercado.cpp Cola.cpp -o main

run: main
	./main

run_test: main
	./main < 1.in

clean:
	rm -rf main