#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
  int x,arr[10];
  srand(time(NULL));
  for(x=0;x<10;x++)
  {
    arr[x]=rand()%100;
    printf("%d ",arr[x]);
  }

  return 0;
}