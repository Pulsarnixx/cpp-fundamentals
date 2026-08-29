#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence > 0) {
        int n1{0};
        int n2{1};

        int result{0};

        do {
            result = n2 + n1;
            n1 = n2;
            n2 = result;

        } while (--sequence > 1);

        return result;
    }

    return 0;
}

int fibonacci_recursive(int sequence) {
    if (sequence >= 1) {
        if (sequence == 1) {
            return 1;
        }
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }

    return 0;
}
