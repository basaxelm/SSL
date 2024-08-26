CC = gcc

all: TablaDeConversion ConversionTest run clean  

run: TablaDeConversion ConversionTest
	./TablaDeConversion
	./ConversionTest

TablaDeConversion: TablaDeConversion.o Conversion.o
	$(CC) TablaDeConversion.o Conversion.o -o TablaDeConversion

ConversionTest: ConversionTest.o Conversion.o
	$(CC) ConversionTest.o Conversion.o -o ConversionTest

TablaDeConversion.o: TablaDeConversion.c Conversion.h
	$(CC) -c TablaDeConversion.c

ConversionTest.o: ConversionTest.c Conversion.h
	$(CC) -c ConversionTest.c

Conversion.o: Conversion.c Conversion.h
	$(CC) -c Conversion.c

clean:
	rm -f *.o TablaDeConversion ConversionTest