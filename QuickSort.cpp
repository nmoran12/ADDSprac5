#include "QuickSort.h"

vector<int> QuickSort::sort(vector<int> list) {
  if (list.size() > 1) {
    quickSort(list, 0, list.size() - 1);
  }
  return list;
}

void QuickSort::quickSort(vector<int> list, int low, int high) {
  if (low < high) {
    int part2 = partition(list, low, high);
    quickSort(list, low, part2 - 1);
    quickSort(list, part2 + 1, high);
  }
}

int QuickSort::partition(vector<int> list, int low, int high) {
  int index;
  if (low + 2 < high) {
    index = low + 2;
  } else {
    index = low;
  }
  int element = list[index];
  swap(list[index], list[high]);
  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (list[j] < element) {
      i++;
      swap(list[i], list[j]);
    }
  }
  swap(list[i + 1], list[high]);
  return i + 1;
}