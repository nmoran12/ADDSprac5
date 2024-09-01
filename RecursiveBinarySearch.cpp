#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(vector<int> list, int target) {
  int vectorSize = list.size() - 1;
  return binarySearch(list, target, 0, vectorSize);
}

bool RecursiveBinarySearch::binarySearch(vector<int> list, int target,
                                         int start, int end) {
  if (start <= end) {
    int midpoint = start + (end - start) / 2;
    if (list[midpoint] == target) {
      return true;
    }
    if (list[midpoint] > target) {
      return binarySearch(list, target, start, midpoint - 1);
    }
    if (list[midpoint] < target) {
      return binarySearch(list, target, midpoint + 1, end);
    }
  }
  return false;
}