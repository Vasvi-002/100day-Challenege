//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {

    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };

    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", roleNames[i - 1], i);
    }

    return 0;
}
