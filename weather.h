#ifndef __WEATHER_H
#define __WEATHER_H

struct Weather {
  int cityCode;
  char cityName[20];
  double temperature;
  double humidity;
  double pressure;
};

typedef struct Weather weather_t;

static void display(const struct Weather*);
void readRecords(struct Weather*,int);
void displayAll(const struct Weather*,int);
void findByCityCode(const struct Weather*,int, int);
void findByCityName(const struct Weather*,int, const char*);
double findAverageTemperature(const struct Weather*,int);
double findMinimumHumidity(const struct Weather*,int);
double findMaximumPressure(const struct Weather*,int);

#endif
