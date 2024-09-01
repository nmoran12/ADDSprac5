#include <iostream>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "Sort.h"
using namespace std;
#include <sstream>
#include <vector>

int main() {
  string intInput;
  getline(cin, intInput);

  istringstream stringObject(intInput);

  vector<int> orderNumbers;

  int numbers;

  while (stringObject >> numbers) {
    orderNumbers.push_back(numbers);
  }

  RecursiveBinarySearch binSearch;
  bool intFound = binSearch.search(orderNumbers, 1);

  QuickSort sortNums;
  sortNums.sort(orderNumbers);

  if (intFound) {
    cout << "Integer was found in list";
  } else {
    cout << "Integer was not found in list";
  }

  int length = orderNumbers.size();

  for (int i = 0; i < length; i++) {
    cout << " " << orderNumbers[i];
  }
}