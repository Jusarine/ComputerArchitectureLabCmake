CXX=g++
CFLAGS=-c -Wall
SOURCE_DIR=../../

all: main

main: main.o calculator.o
	$(CXX) main.o calculator.o -o main

main.o: $(SOURCE_DIR)main.cpp
	$(CXX) $(CFLAGS) $(SOURCE_DIR)main.cpp

calculator.o: $(SOURCE_DIR)calculator.cpp
	$(CXX) $(CFLAGS) $(SOURCE_DIR)calculator.cpp

clean:
	rm -rf *.o main mainshared *.so

libshared: libshared.so main.o
	$(CXX) -o mainshared  main.o -L. -lshared

libshared.so: $(SOURCE_DIR)calculator.cpp
	$(CXX) -fPIC -c  $(SOURCE_DIR)calculator.cpp -o calculator.o
	$(CXX) -shared  -Wl,-install_name,libshared.so -o libshared.so calculator.o
