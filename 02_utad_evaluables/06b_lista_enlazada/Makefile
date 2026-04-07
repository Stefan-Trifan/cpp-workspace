TARGET = mainEnlazada
CXX = g++

CXXFLAGS = -Wall -std=c++17
CXXFLAGS_STRICT = -Wall -Wextra -std=c++17

$(TARGET): mainEnlazada.cpp ListaEnlazada.cpp
	$(CXX) $(CXXFLAGS) mainEnlazada.cpp ListaEnlazada.cpp -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

strict:
	$(CXX) $(CXXFLAGS_STRICT) mainEnlazada.cpp ListaEnlazada.cpp -o $(TARGET)

run_test: $(TARGET)
	./$(TARGET) < 1.in

clean:
	rm -f $(TARGET)

.PHONY: run clean
