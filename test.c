#include "weather.h"
#include <stdio.h>

extern int wlen;
extern int tmax;

int main() {
  int n=10;
  struct Weather warr[n];
  readRecords(warr, n);
  displayAll(warr,n);
  findByCityName(warr, n, "Pune");
  findByCityCode(warr, n, 105);
  double res;
  res=findAverageTemperature(warr,n);
  res=findMinimumHumidity(warr,n);
  res=findMaximumPressure(warr,n); 
  printf("wlen=%d\n",wlen);

  //tmax++;  
  //struct Weather w1;
  //display(&w1);
  return 0;
}
