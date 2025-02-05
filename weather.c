#include"weather.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int tmax=30;

static void display(const struct Weather* pw) {
  printf("%d, %s, %lf, %lf, %lf\n", pw->cityCode, pw->cityName,
                        pw->temperature, pw->humidity, pw->pressure);
}              
int wlen=10;
//void readRecords(struct weather parr[],int n)
void readRecords(struct Weather *parr,int n) {
  int i;
  for(i=0;i<n;i++) {
    scanf("%d %s", &parr[i].cityCode, parr[i].cityName);
    parr[i].temperature = 16 + rand()%24;
    parr[i].humidity = 50 + rand()%50; 
    parr[i].pressure = 900 + rand()%100; 
  }
}
//void displayAll(const struct weather parr[],int n) {
void displayAll(const struct Weather *parr,int n) {
  int i;
  /*for(i=0;i<n;i++) {
    printf("%d, %s, %lf, %lf, %lf\n", parr[i].cityCode, parr[i].cityName,
             parr[i].temperature,parr[i].humidity,parr[i].pressure);
    // (parr+i)->cityCode, (parr+i)->cityName, (parr+i)->temperature
  */
  const struct Weather *ptr=parr;             
  for(i=0;i<n;i++) {
    printf("%d, %s, %lf, %lf, %lf\n", ptr->cityCode, ptr->cityName,
             ptr->temperature,ptr->humidity,ptr->pressure);
    ptr++;
  }    
}                    
void findByCityCode(const struct Weather *ptr,int n, int keyCode) {
  int i=0;
  /*for(i=0;i<n;i++)
    if(ptr[i].cityCode==keyCode)        //(ptr+i)->cityCode==keyCode
        display(&ptr[i]); */
  for(i=0;i<n;i++) {
    if(ptr->cityCode==keyCode)        
        display(ptr);                   //display(ptr++)
    ptr++;        
  }    
}        
void findByCityName(const struct Weather *ptr,int n, const char* keyCityName) { 
  int i=0;
  for(i=0;i<n;i++)
    if(strcmp(ptr[i].cityName,keyCityName)==0)
        display(&ptr[i]);
}
double findAverageTemperature(const struct Weather *ptr,int n) {
  int i;
  double sum=0;
  for(i=0;i<n;i++) {
    sum += ptr->temperature;    //ptr[i].temperature, (ptr+i)->temperature
    ptr++;
  }
  return sum/n;
}
double findMinimumHumidity(const struct Weather *ptr,int n) {
  //TODO
}
double findMaximumPressure(const struct Weather *ptr,int n) {
  //TODO
}
