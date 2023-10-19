#include <stdio.h>
#include <string.h>

int main()
{
    char s[10] ;
    char flag[100];
    strcpy(flag, "miniCTF{c0nqr4tul4tj0ns_0n_kn0wjnq_h0w_t0_0p3n_tk3_d00r}");
    gets(s);
    if (strcmp(flag, "miniCTF"))
    {
        printf("Congratulations! Flag here: %s", flag);
    }
    else
        printf("Sorry, try again!");
    return 0;
}