// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double sum = 1;
    for (uint16_t i = 0; i < n; ++i) {
        sum *= value;
    }
    return sum;
}

uint64_t fact(uint16_t n) {
    if (n <= 1)
        return 1;
    else
        return fact(n - 1) * n;
}

double calcItem(double x, uint16_t n) {
    double num = 1, denom = 1;
    for (uint16_t i = 1; i <= n; ++i) {
        num *= x;
        denom *= i;
    }
    return num / denom;
}

double expn(double x, uint16_t count) {
    double sum = 1, c = 1;
    for (uint16_t i = 1; i <= count; ++i) {
        c *= x / i;
        sum += c;
    }
    return sum;
}

double sinn(double x, uint16_t count) {
    double sum = x, c = x;
    for (uint16_t i = 1; i <= count; ++i) {
        c *= -1 * x * x / (2 * i) / (2 * i + 1);
        sum += c;
    }
    return sum;
}

double cosn(double x, uint16_t count) {
    double result = 1, znak = -1, c = 1;
    for (int i = 1; i <= count; ++i) {
        c *= x * x / ((2 * i - 1) * (2 * i));
        result += znak * c;
        znak = -znak;
    }
    return result;
}
