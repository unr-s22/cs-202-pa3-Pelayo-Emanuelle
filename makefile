man: main.cpp Account.o Money.o
	g++ main.cpp -o man Account.o Money.o

Account.o: Account.cpp
	g++ Account.cpp -c

Money.o: Money.cpp
	g++ Money.cpp -c

clean:
	rm man *.o
