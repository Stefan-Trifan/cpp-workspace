TARGET = main
CXX = g++

CXXFLAGS = -Wall -std=c++17
CXXFLAGS_STRICT = -Wall -Wextra -std=c++17

$(TARGET): main.cpp ListaEnlazada.cpp
	$(CXX) $(CXXFLAGS) main.cpp ListaEnlazada.cpp -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

strict:
	$(CXX) $(CXXFLAGS_STRICT) main.cpp ListaEnlazada.cpp -o $(TARGET)

run_test: $(TARGET)
	./$(TARGET) < 1.in

clean:
	rm -f $(TARGET)

.PHONY: run clean
