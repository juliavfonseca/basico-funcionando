#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void MaxMin ( int aux[], int len , int *min , int *max){
  *min = * max = aux[0];
  int i;
  for (i=1 ; i<len; i++)
  {
    if(aux[i] > *max)
    *max = aux[i];
    if(aux[i] < *min)
    *min = aux[i];

  }
}

int main(){
  int a[] = {2 , 56 , 98 , 455};
  int min, max;
  int len = sizeof(a)/sizeof(a[0]);
  
  MaxMin(a, len, &min, &max);

   cout <<"Max :" << max <<endl;
   cout <<"Min :" << min <<endl;
  return 0;

}

