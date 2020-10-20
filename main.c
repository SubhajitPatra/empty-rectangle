#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for( i=1;i<=9;i++){
        for( j=1;j<=9;j++){


        if(i==1||i==9){
            printf("*");
        }
        else if (j==1||j==9){
            printf("*");
        }
        else if (i==j){
            printf("*");
        }
        else if (i+j==10){
            printf("*");
        }
        else{
            printf(" ");
        }
        }

        printf("\n");


    }





    return 0;
}
