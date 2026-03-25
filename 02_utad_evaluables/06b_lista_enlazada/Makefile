TARGET = main
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

$(TARGET): main.cpp ListaEnlazada.cpp
	$(CXX) $(CXXFLAGS) main.cpp ListaEnlazada.cpp -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run clean
