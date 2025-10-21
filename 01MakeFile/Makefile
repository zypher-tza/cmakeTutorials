
achay: main.o message.o
	g++ main.o message.o -o achay

main.o: main.cpp
	g++ -c $^ -o $@

message.o: message.cpp message.hpp
	g++ -c message.cpp
clean:
	rm *.o achay

install:
	sudo cp achay /usr/bin

uninstall:
	sudo rm -rf /usr/bin/achay

