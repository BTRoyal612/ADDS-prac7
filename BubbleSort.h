#ifndef BUBBLESORT
#define BUBBLESORT

#include "Sort.h"
#include <vector>

class BubbleSort : public Sort {
    public:
        virtual std::vector<int> sort(std::vector<int> list);
};

#endif