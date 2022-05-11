clean :
	rm *.o *.out

all : RecursiveBinarySearch.o BubbleSort.o Sort.o main.cpp
	g++ RecursiveBinarySearch.o BubbleSort.o Sort.o main.cpp

Sort.o : Sort.cpp Sort.h
	g++ -c Sort.cpp -o Sort.o

BubbleSort.o : BubbleSort.cpp BubbleSort.h
	g++ -c BubbleSort.cpp -o BubbleSort.o

QuickSort.o : QuickSort.cpp QuickSort.h
	g++ -c QuickSort.cpp -o QuickSort.o

RecursiveBinarySearch.o : RecursiveBinarySearch.cpp RecursiveBinarySearch.h
	g++ -c RecursiveBinarySearch.cpp -o RecursiveBinarySearch.o