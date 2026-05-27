.PHONY: main run clean run_test

main:
	g++ app/test.cpp app/ListaEnlazada.cpp -o main
# 	g++ app/test.cpp app/ListaEnlazada.cpp app/impresionListasEnlazadas.cpp app/Agenda.cpp -o main

run:
	g++ app/test.cpp app/ListaEnlazada.cpp -o main
# 	g++ app/test.cpp app/ListaEnlazada.cpp app/impresionListasEnlazadas.cpp app/Agenda.cpp -o main
	./main

run_test:
	g++ app/test.cpp app/ListaEnlazada.cpp -o main
# 	g++ app/test.cpp app/ListaEnlazada.cpp app/impresionListasEnlazadas.cpp app/Agenda.cpp -o main
	./main < 4.in

clean:
	rm -f main