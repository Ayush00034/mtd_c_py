#include<stdio.h>
int main(){
int k;
puts("enter");
scanf("%d",&k);
  for(int i=1;i<=10;i++){
    printf("%02d x %02d = %02d\n",i,k,k*i);
}
return 0;
}