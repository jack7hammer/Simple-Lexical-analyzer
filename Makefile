./a.out: helper.o main.o
	g++ -Wall helper.o main.o
main.o : mainHeader.h main.c++
	g++ -Wno-all -c  main.c++
helper.o: mainHeader.h helper.c++
	g++ -Wno-all -c  helper.c++
