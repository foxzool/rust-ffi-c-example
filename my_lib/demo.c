#include "source/wrapper.h"

int main() {
    getAvgHeight(30.0, 120.0, 1000.0f);

    struct Person person = {.id = 1, .name = "John Doe", .age = 20};

    growUp(&person);
    growUp(&person);
    growUp(&person);

    return 0;
}