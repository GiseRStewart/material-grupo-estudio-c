#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main()
{

    int fahr, celsius;
    float lower, upper, step;

    // float fahr, celsius;
    // float lower, upper, step;

    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%f\t%f\n", fahr, (5.0 / 9.0) * (fahr - 32)); 
        fahr = fahr + step;
        upper = 25;
    }
    // 
}
