#include <stdio.h>

void go_south_east(int lat, int lon) {
  lat = lat - 1;
  lon = lon + 1;
}
/*
void go_north_west(int lat, int lon) {
  lat = go_north(int lat);
  lon = go_west(int lon);
  
  lat = lat + 1;
  lon = lon - 1;
}

void go_south_west(int lat, int lon) {
  lat = lat - 1;
  lon = lon + 1;
}

void go_south(int lat) {
  lat = lat - 1;
}

void go_north(int lat) {
  lat = lat + 1;
}

void go_east(int lon) {
  lon = lon + 1;
}

void go_west(int lon) {
  lon = lon - 1;
}
*/
int main() {
  int latitude = 32;
  int longitude = -64;

  go_south_east(longitude, latitude);
  printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
  return 0;
}
