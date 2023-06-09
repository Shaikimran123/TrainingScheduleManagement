tsm: adminFuns.o facultyFuns.o main.o validateFunctions.o design.o ../include/tsm.h
	g++ -o tsm ../obj/adminFuns.o ../obj/facultyFuns.o ../obj/main.o ../obj/validateFunctions.o ../obj/design.o
adminFuns.o:../src/adminFuns.cpp
	g++  -o ../obj/adminFuns.o -c ../src/adminFuns.cpp
facultyFuns.o:../src/facultyFuns.cpp
	g++ -o ../obj/facultyFuns.o -c ../src/facultyFuns.cpp
main.o:../src/main.cpp
	g++ -o ../obj/main.o -c ../src/main.cpp
validateFunctions.o:../src/validateFunctions.cpp
	g++ -o ../obj/validateFunctions.o -c ../src/validateFunctions.cpp
design.o:../src/design.cpp
	g++ -o ../obj/design.o -c ../src/design.cpp

clean:	rm ../obj/*.o
