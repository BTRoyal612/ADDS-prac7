#include "QuickSort.h"
#include <vector>
#include <iostream>

std::vector<int> QuickSort::partition(std::vector<int> list, int low, int high) {
    int p = list.at(high);
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (list.at(j) < p) {
            i++;
            swap(list.at(i), list.at(j));
        }
    }
    swap(list.at(i+1), list.at(high));
    this->pivot = i+1;
    
    return list;
}

std::vector<int> QuickSort::helper(std::vector<int> list, int low, int high) {
    if (low >= high) return list;

    list = partition(list, low, high);
    list = helper(list, low, this->pivot-1);
    list = helper(list, this->pivot+1, high);
    
    return list;
}

std::vector<int> QuickSort::sort(std::vector<int> list) {
    return helper(list, 0, list.size()-1);
}

