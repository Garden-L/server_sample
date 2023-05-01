all: app test

app: ./testC/src/app.c
	gcc -o app ./testC/src/app.c 

test: ./testC/src/test.cpp
	g++ -std=c++17 -I ./include -L ./lib -lgtest_main -lgtest $^ -o $@ 