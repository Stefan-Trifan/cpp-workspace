TARGET = main
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SRCS = main.cpp Matriz.cpp

all:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
