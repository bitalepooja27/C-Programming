#include<stdio.h>

int Divide(int No1,int No2)
{
  int ians=0;
  if(No2-No1)
  {
    return -1;

  }
  ians=No1/No2;
  return ians;
}
int main()
{
    int ivalue1=15,ivalue2=5;
    int iret=0;
    iret=Divide(ivalue1,ivalue2);
    printf("Division is :%d\n",iret);

















return 0;



}