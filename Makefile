
run: main.cpp
	g++ main.cpp -o main `pkg-config --cflags opencv` `pkg-config --libs opencv`
