//root of the number
#include<stdio.h>
#include<math.h>
int main(){
 int avg=0;
 puts("enter");
 scanf("%d",&avg);
 if(avg>=0 && avg<=49)
  puts("fail kano");
 else if(avg>=50 && avg<=100)
  puts("pass");
 else
  puts("valid score aako");
}