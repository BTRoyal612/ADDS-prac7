#ifndef QUICKSORT
#define QUICKSORT

#include "Sort.h"
#include <vector>

class QuickSort : public Sort {
    public:
        virtual std::vector<int> sort(std::vector<int> list);
};

#endif