#include<stdio.h>
#include <stdlib.h>
#include <string.h>

// read only, no need to run

long long random_number();
    //????

int main()
{
    char flag[] = "miniCTF{tk3_s3cr3t_numb3r_js_xxxxxx}";
    int x[] = {};
    long long num_flag[] = { ?, ?, ?};

    for (int i = 0; i < num_flag.size(); i++)
    {
        long long y = 0;
        for (int j = 0; j < num_flag.size(); j++)
        {
            x[j] = random_number();
            y += x[j] * num_flag[j];
        }
        printf("(%lld, %lld, %lld, %lld)\n", x[0], x[1], x[2], y);
    }
}