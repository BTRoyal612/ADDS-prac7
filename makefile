clean :
	rm *.o *.out

all : RecursiveBinarySearch.o QuickSort.o BubbleSort.o main.cpp
	g++ RecursiveBinarySearch.o QuickSort.o BubbleSort.o main.cpp

BubbleSort.o : BubbleSort.cpp BubbleSort.h Sort.h
	g++ -c BubbleSort.cpp -o BubbleSort.o

QuickSort.o : QuickSort.cpp QuickSort.h Sort.h
	g++ -c QuickSort.cpp -o QuickSort.o

RecursiveBinarySearch.o : RecursiveBinarySearch.cpp RecursiveBinarySearch.h
	g++ -c RecursiveBinarySearch.cpp -o RecursiveBinarySearch.o