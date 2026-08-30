#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    if (vec.empty()) {
        return {};
    }

    int max{vec.front()};

    for (const int elem : vec) {
        if (max < elem) {
            max = elem;
        }
    }

    return max;
}
