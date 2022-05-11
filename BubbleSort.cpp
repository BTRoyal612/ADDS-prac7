#include "BubbleSort.h"
#include <vector>
#include <iostream>

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    for (int i = 0; i < list.size()-1; i++) {
        for (int j = 0; j < list.size()-1; j++) {
            if (list.at(j) > list.at(j+1)) {
                swap(&list.at(j), &list.at(j+1));
            } 
        }
    }
    return list;
}