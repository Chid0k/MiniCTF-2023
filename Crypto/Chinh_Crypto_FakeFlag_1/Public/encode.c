#include <stdio.h>
#include <string.h>

int main()
{
    char flag[] = "m i n i C T F { T h i S _ i 5 _ Y 0 u r _ F a K E _ f L a G } ";
    int len = strlen(flag) / 2;
    printf("%d\n", len);

    char secret = '?'; // fake secret char
    for (int i = 0; i < strlen(flag); i++)
        printf("%d, ", flag[i] - (secret * 4) / len);
}

