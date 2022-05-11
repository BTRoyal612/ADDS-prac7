#include "Sort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    Sort* bubbleSort = new BubbleSort();
    // Sort* quickSort = new QuickSort();
    RecursiveBinarySearch* binarySearch = new RecursiveBinarySearch();

    vector<int> num;

    string str;
    getline(cin, str);

    stringstream ss(str);
    for (int i; ss >> i;) {
        num.push_back(i);
    }

    num = bubbleSort->sort(num);
    if (binarySearch->search(num, 1)) cout << "true ";
    else cout << "false ";
    
    for (int i = 0; i < num.size(); i++) {
        cout << num.at(i) << " ";
    }
    cout << endl;
}