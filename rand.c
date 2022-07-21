#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
    int i, sayi;
    
    srand(time(NULL));
    
    for(i = 0 ; i < 8 ; i++)
    {
        sayi = rand() % 6 + 1;
        printf("%d\n",sayi);
    }
   
    return 0;
}
