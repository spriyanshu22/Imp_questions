#include<stdio.h>
void roman(int n);
void prin(char c,int t);
int main()
{
  int N;
    scanf("%d",&N);
   // printf("<main>");                 //
    roman(N);
    return 0;
}


void roman(int n)
{
//printf("<roman>");                     //
int nM,nC,nX,nI;
nM=n/1000; 
prin('M',nM);

//printf("+n=%d+",n);                    //

n=n%1000;
nC=n/100; 

if(nC<=3)
prin('C',nC);
else if(nC==4)
printf("CD");
else if(nC<=8){
printf("D");
prin('C',nC-5);}
else
printf("CM");

//printf("+n=%d+",n);                 //

n=n%100;
nX=n/10;
//printf("+nX=%d+",nX);              //
if(nX<=3)
prin('X',nX);
else if(nX==4){
printf("XL");
   // printf("+nX=%d+",nX);                 // new
}
else if(nX<=8){
printf("L");
prin('X',nX-5);}
else
printf("XC");

//printf("+n=%d+",n);                //

n=n%10;
nI=n;
//printf("+nI=%d+",nI);             //
if(nI<=3)
prin('I',nI);
else if(nI==4)
printf("IV");
else if(nI<=8){
printf("V");
prin('I',nI-5);}
else
printf("IX");

//printf("+n=%d+",n);              //
}


void prin(char c,int t)
{
 // printf("<void>");
//  printf("t*%d* ",t);               //
    for(int i=0;i<t;i++){
   //     printf("*i%d* ",i);      //
    printf("%c",c);}
  //  printf("\n");
    
}