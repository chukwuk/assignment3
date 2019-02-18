CC=g++
EXE_F=zoogame


all: $(EXE_F)

$(EXE_F):animal.o animal.hpp playzoo.cpp monkey.o monkey.hpp sea_otters.o sea_otters.hpp sloths.o sloths.hpp zoo.o zoo.hpp
	$(CC) zoo.o playzoo.cpp animal.o monkey.o sloths.o sea_otters.o -o $(EXE_F)

zoo.o:zoo.cpp zoo.hpp
	$(CC) -c zoo.cpp -o zoo.o

animal.o:animal.cpp animal.hpp
	$(CC) -c animal.cpp -o animal.o

monkey.o:monkey.cpp monkey.hpp
	$(CC) -c monkey.cpp -o monkey.o

sea_otters.o:sea_otters.cpp sea_otters.hpp 
	$(CC) -c sea_otters.cpp -o sea_otters.o

sloths.o:sloths.cpp sloths.hpp
	$(CC) -c sloths.cpp -o sloths.o


clean:
	rm -rf o*
