#include <stdio.h>

void go_south_east(int lat, int lon) {
  lat = lat - 1;
  lon = lon + 1;
}

int main() {
  int latitude = 32;
  int longitude = -63;

  go_south_east(longitude, latitude);
  printf("Avast! Now at: [%i, %i]\n", longitude, longitude);
  return 0;
}
