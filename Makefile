all: compilar

compilar: test.cc Inout.cc
	g++ -o Inout.exe test.cc Inout.cc -std=c++11

clean:
	rm *.o
