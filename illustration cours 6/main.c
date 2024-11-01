#include <stdio.h>
#include <string.h>

int main(void) {
    char chaine[100];

    printf("une chaine ? ");
//    scanf("%s", chaine);
    fgets(chaine, 100, stdin);

    printf("chaine lue : %s", chaine);

    return 0;
}
