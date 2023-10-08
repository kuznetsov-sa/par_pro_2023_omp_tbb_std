// Copyright 2023 Kuznetsov Sergey
#ifndef MODULES_TASK_2_KUSNETSOV_S_SHELL_SORT_ODD_EVEN_MERGE_OMP_SORT_H_
#define MODULES_TASK_2_KUSNETSOV_S_SHELL_SORT_ODD_EVEN_MERGE_OMP_SORT_H_

#include <omp.h>
#include <iostream>
#include <vector>

std::vector<int> getRandomVector(int size);
void ShellSortSequantial(std::vector<int>* vec);
void ShellSortParallel(std::vector<int>* vec);
bool checkSort(const std::vector<int>& vec);

#endif  // MODULES_TASK_2_KUSNETSOV_S_SHELL_SORT_ODD_EVEN_MERGE_OMP_SORT_H_
