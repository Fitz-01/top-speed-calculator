#include <stdio.h>

#define CONVERSION_DIAMETER 25.4
#define CONVERSION_SPEED 1056
#define PI 3.14159265359

int main() {

  printf("Tire Info\n"); 
  printf("---------\n"); 
  double width, ratio, diameter;
  double tire_diameter;

  printf("Enter tire width (mm): ");
  int retval = scanf("%lf", &width);

  printf("Enter aspect ratio: ");
  retval = scanf("%lf", &ratio);

  printf("Enter rim diameter (in): ");
  retval = scanf("%lf", &diameter);

  tire_diameter = (((width / CONVERSION_DIAMETER) * (ratio / 100) * 2)) + diameter;

  printf("\nGear Info\n");
  printf("---------\n"); 
  
  double rpm, gear_ratio, final_drive; 
  double top_speed; 

  printf("Enter engine RPM: ");
  retval = scanf("%lf", &rpm);

  printf("Enter gear ratio: ");
  retval = scanf("%lf", &gear_ratio);

  printf("Enter final drive: ");
  retval = scanf("%lf", &final_drive); 

  top_speed = (rpm * tire_diameter * PI) / (final_drive * gear_ratio * CONVERSION_SPEED); 

  printf("\nTop speed: ~%.0lf mph\n", top_speed);
  
  return 0; 
}