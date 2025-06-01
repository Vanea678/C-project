#include <stdio.h>

int main() {
    int age = 16;
    int canDrive = (18 <= age);
    printf("Age: %d\n", age);
    printf("Can drive? %d\n", canDrive);
    return 0;
}
