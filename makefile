main: main.o Account.o Money.o
	g++ -std=c++11  -o main main.o Account.o Money.o

main.o: main.cpp
	g++ -std=c++11 main.cpp -c main.cpp

Account.o: Account.cpp
	g++ -std=c++11 Account.cpp -c Account.cpp

Money.o: Money.cpp
	g++ -std=c++11 Money.cpp -c Money.cpp

clean:
	rm main *.o
