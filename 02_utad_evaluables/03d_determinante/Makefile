TARGET = main
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

$(TARGET): main.cpp Matriz.cpp
	$(CXX) $(CXXFLAGS) main.cpp Matriz.cpp -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run clean