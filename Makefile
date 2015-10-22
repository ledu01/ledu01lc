all: mainlower.o makelower.o
	cc -o mlower mainlower.o makelower.o

mainlower.o: mainlower.c makelower.h
	cc -c mainlower.c

makelower.o: makelower.c makelower.h
	cc -c makelower.c

clean:
	rm *.o
	rm mlower
