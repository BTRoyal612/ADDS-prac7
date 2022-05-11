#ifndef SORT
#define SORT

#include <vector>

class Sort {
    public:
        virtual std::vector<int> sort(std::vector<int> list)=0;
        void swap(int &a, int &b);
};

#endif