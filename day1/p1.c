//accept a number to find even or not
#include<stdio.h>
//copy .o files library saved in harddisk to  ram to complied the files
int main(){
    //the data type of value which is going to return is return type
    //puts("nameste world");//put a string in std out(consoule) already delcared
  int inutNum = 0;
  puts("Enter a numberto  check if it is Even");
  scanf("%d",&inutNum);
  if(inutNum % 2==0)
    printf("%d is Even",inutNum);
  else
    printf("%d is not Even",inutNum);
  return 0;
} //compiler converts it into .o files first .c then .o then .exe
