OBJECT_FILES = ./build/one.o ./build/two.o ./build/dog.o

system: ${OBJECT_FILES}
./build/one.o:
	g++ one.cpp -o ./build/one.o -c
./build/two.o:
	g++ two.cpp -o ./build/two.o -c
./build/dog.o:
	g++ dog.cpp -o ./build/dog.o -c

all: system
	g++ main.cpp ${OBJECT_FILES} -o ./main

clean:
	rm ./main
	rm ${OBJECT_FILES}

