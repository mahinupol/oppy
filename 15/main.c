
#include <stdio.h>

int main()
{
    float cm, meter;

    printf("centimeter: ");
    scanf("%f", &cm);
    meter = cm / 100.0;
    printf("Length in Meter = %.2f m \n", meter);

    return 0;
}
