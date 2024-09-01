#pragma once
#include "Sort.h"

class QuickSort : public Sort {
 public:
  vector<int> sort(vector<int> list) override;

  void quickSort(vector<int> list, int low, int high);
  int partition(vector<int> list, int low, int high);
};