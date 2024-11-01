#include <stdio.h>
#include <time.h>

#define nb 10

void f() {
    clock_t start = clock();


    clock_t end = clock();

    printf("%ld\n", end - start);
}

int main(void) {
    f();

    return 0;
    char n1[] = "1234567890";
    char n2[] = "2346652146";
    char somme[] = "0000000000";
    short retenue = 0;

    for (short i = nb - 1; i >= 0; i--) {
        short s = (n1[i] - '0') + (n2[i] - '0') + retenue;

        if (s > 9) {
            retenue = 1;
            s -= 10;
        } else {
            retenue = 0;
        }

        somme[i] = s + '0';
    }

    return 0;
}
