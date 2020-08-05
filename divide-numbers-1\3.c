// converting Celsius to Farenheit

#include <stdio.h>

int main(void){
    
    double tempC;
    double tempF;
    
    // Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0
    
    scanf("%lf", &tempC);
    
    tempF = tempC*9.0/5.0 + 32.0;

    printf("%.1lf", tempF);
    
    return 0;
}
