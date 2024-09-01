#pragma once
#include "Sort.h"

class RecursiveBinarySearch {
 public:
  bool search(vector<int> list, int target);

  bool binarySearch(vector<int> list, int target, int start, int end);
};
