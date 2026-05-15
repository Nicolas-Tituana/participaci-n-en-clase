#include <stdio.h>

int main (int argc, char *argv[]){
    char vocales[6]={'a','e','i','o','u'};
    char *ptr;
    ptr = &vocales[3]; *ptr = 'x';
    int i;
    for (  i = 0; i < 5; i++);
    {
        printf("%c", *(ptr+i));

    }
    return 0;
    

}
    
