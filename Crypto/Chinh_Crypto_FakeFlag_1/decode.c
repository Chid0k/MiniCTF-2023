#include <stdio.h>
#include <string.h>

int main()
{
    int flag[] = {102, 25, 98, 25, 103, 25, 98, 25, 60, 25, 77, 25, 63, 25, 116, 25, 109, 25, 65, 25, 44, 25, 88, 25, 76, 25, 44, 25, 92, 25, 107, 25, 44, 25, 109, 25, 88, 25, 97, 25, 58, 25, 29, 25, 88, 25, 49, 25, 103, 25, 88, 25, 76, 25, 41, 25, 101, 25, 111, 25, 44, 25, 93, 25, 118, 25};
    int len = 33;
    for (int secret = 0; secret <= 255; secret++)
    {
        for (int i =0; i < len*2; i++)
            if(flag[i] != 16)
                printf("%c", flag[i] + (secret * 4) / len);
        printf("\n");
    }
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char flag[] = "m C T F { T h i S _ i 5 _ Y 0 u r _ F a K E _ f L a G } ";
//     int len = strlen(flag) / 2;
//     printf("%d\n", len);
//     char secret = 'x';
//     printf("a = ");
//     for (int i = 0; i < strlen(flag); i++)
//         printf("%d, ", flag[i] - (secret * 4) / len);
// }