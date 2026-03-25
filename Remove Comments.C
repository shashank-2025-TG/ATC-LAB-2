#include <stdio.h>

int main() {
    char ch, prev = 0;

    printf("Enter C code (Ctrl+D to end):\n");

    while((ch = getchar()) != EOF) {
        if(prev=='/' && ch=='/') {
            while(ch!='\n') ch=getchar();
        }
        else if(prev=='/' && ch=='*') {
            while(!(prev=='*' && ch=='/')) {
                prev=ch;
                ch=getchar();
            }
            ch=getchar();
        }
        else {
            if(prev!='/' && prev!=0)
                putchar(prev);
        }
        prev = ch;
    }
}