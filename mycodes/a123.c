#include <stdio.h>
int main() {
    int a ;
    printf(" Enter how many subjects you have passed \n");
    printf(" Enter 1 if you passes maths \n");
    printf(" enter 2 if you passes science \n");
    printf(" enter 3 if you have passes both \n");
    scanf( "%d",&a);
    if ( a=0){
        printf(" congrats you have won prize 15 Rs ");

    }
    else if(a=2 ){
    printf(" congrats you have won prize 150 Rs ");
    }
    else  {
    printf(" congrats you have won the prize of 45 Rs \n");
    }
    
    printf("%d",a);

    return 0 ;

    
    
    
    }