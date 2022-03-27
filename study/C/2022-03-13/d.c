#include <stdio.h>
#include <stdlib.h>
#include <time.h>                  

int main(void)
{
    int random_variable;
    srand((unsigned int)time(NULL));    
    random_variable = rand()%100;       
    printf("%d\n", random_variable);
    return 0;
}