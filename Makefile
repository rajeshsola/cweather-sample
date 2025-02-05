all : weatherdemo
weatherdemo: weather.o test.o
  gcc weather.o test.o -o weatherdemo
weather.o: weather.c weather.h
  gcc weather.c -c
test.o: test.c weather.h
  gcc test.c -c
clean:
  rm -rf *.o weatherdemo
