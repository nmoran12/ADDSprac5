#include "BubbleSort.h"

vector<int> BubbleSort::sort(vector<int> list) {
  int length = list.size();

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - 1; j++) {
      if (list[j] > list[j + 1]) {
        int temp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = temp;
      }
    }
  }
  return list;
}