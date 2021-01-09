#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    char array[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int x, p;
    int count;
    int i=0;

    srand(time(NULL));

    for(count=0; count < 9; count++){
        array[count] = (char)rand() % 9 + 1;
    }

    while(i < 9){
        int r = rand()%9+1;

        for (x = 0; x < i; x++)
        {
            if(array[x] == r){
                break;
            }
        }
        if(x==i){
            array[i++]=r;
        }
    }
    for(p = 0; p < 9;p++){
        printf("%d ", array[p]);
    }
    return 0;
}