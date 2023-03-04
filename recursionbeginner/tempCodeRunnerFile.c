#include<stdio.h>
int main()
{
    int a[10];
    printf("enter chm112 grades "); // 10 for A OR A*, 9 for B* so on
    scanf("%d",&a[1]);
    printf("enter chm113 grades "); 
    scanf("%d",&a[2]);
    printf("enter elc grades "); 
    scanf("%d",&a[3]);
    printf("enter mth111 grades "); //quite painful
    scanf("%d",&a[4]);
    printf("enter mth 112 grades "); 
    scanf("%d",&a[5]);
    printf("enter PHY111 grades "); 
    scanf("%d",&a[8]);
    printf("enter phy11X grades (NOT PHY111) "); 
    scanf("%d",&a[9]);
    printf("enter TA111 grades "); 
    scanf("%d",&a[10]);
    int cpi = ((a[1]+a[2])*4+(a[3]+a[10])*9+(a[5]+a[4])*6+a[8]*3+a[9]*11)/52;
    printf("\nYour cpi is %d",cpi);
}