#pragma once

int NWD(int lhs, int rhs) {
    lhs = abs(lhs);
    rhs = abs(rhs);

    if (rhs == 0) {
        return lhs;
    }

    return NWD(rhs, lhs % rhs);
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    }

    lhs = abs(lhs);
    rhs = abs(rhs);

    int lhs2 = lhs;
    int rhs2 = rhs;

    while (lhs2 != rhs2) {
        if (lhs2 < rhs2) {
            lhs2 += lhs;
        } else {
            rhs2 += rhs;
        }
    }

    return lhs2;
}
