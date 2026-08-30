#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    if (count <= 0) {
        return {};
    }

    std::vector<int> result;
    result.reserve(count);

    for (int i = 0; i < count; ++i) {
        result.push_back(step * (i + 1));
    }

    return result;
}
