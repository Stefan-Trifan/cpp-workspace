TARGET = main
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

$(TARGET): main.cpp ListaContigua.cpp
	$(CXX) $(CXXFLAGS) main.cpp ListaContigua.cpp -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

run_test: $(TARGET)
	./$(TARGET) < 1.in

clean:
	rm -f $(TARGET)

.PHONY: run clean
