#ifndef RECURSIVE_BINARY_SEARCH
#define RECURSIVE_BINARY_SEARCH

#include <vector>

class RecursiveBinarySearch {
    public:
        bool search(std::vector<int> list, int target);
        bool helper(std::vector<int> list, int target, int start, int end);
};

#endif 