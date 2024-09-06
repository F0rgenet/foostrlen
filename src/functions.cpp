#include "functions.h"

int fooStrLen(const char* targetString) {
    if (targetString == nullptr) {
        return 0;
    }

    int length = 0;
    for (int i = 0; targetString[i] != '\0'; i++) {
        length++;
    }

    return length;
}