main: main.o Sup1.o Sub1.o
	g++ -o main main.o Sup1.o Sub1.o

.cpp.o:
	g++ -c $<

main.o: Sup1.h Sub1.h
Sup1.o: Sup1.h
Sub1.o: Sub1.h

clean:
	rm *.o

fclean:
	rm ./main
