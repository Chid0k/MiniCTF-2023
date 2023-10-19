#include<stdio.h>
#include<stdlib.h>

int add_number(int a){
    a += 1;
}
int get_flag(int a){
    if(a == 0x1337){
        system("/bin/sh");
    }else{
        puts("No");
    }
}
int get_choice(int a){
    puts("1.Add Number");
    puts("2.Get Flag");
    puts("3.Quit");
    int c = getchar();
    getchar();
    return c;
}
void init(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

}
int main(){
    init();
    int a=0,c=0;
    while (1)
    {
        c = get_choice(a);
        if(c == '1'){
           add_number(a);
        }else if (c == '2'){
            get_flag(a);
        }else {
            printf("Good Bye!!!\n");
            return 1;
        }

    }
 

}