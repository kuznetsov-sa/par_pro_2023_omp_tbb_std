// Copyright 2023 Kuznetsov Sergey
#ifndef MODULES_TASK_1_KUSNETSOV_S_SHELL_SORT_ODD_EVEN_MERGE_SORT_SORT_H_
#define MODULES_TASK_1_KUSNETSOV_S_SHELL_SORT_ODD_EVEN_MERGE_SORT_SORT_H_

#include <vector>

std::vector<int> getRandomVector(int size);
void ShellSort(std::vector<int>* vec);
bool checkSort(const std::vector<int>& vec);

#endif  // MODULES_TASK_1_KUSNETSOV_S_SHELL_SORT_ODD_EVEN_MERGE_SORT_SORT_H_
