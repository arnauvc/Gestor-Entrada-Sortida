all: compilar

compilar: test.cc Inout.hh
	g++ -o Inout.exe test.cc Inout.hh -std=c++11

clean:
	rm *.o
