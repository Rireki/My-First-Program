#include <stdio.h>
/*doing this shit because im curious, making a fahrenheit table*/
main()
{
    float celcius, fahr;
    int lower, upper, step;

    lower = 0; /* lower limit of temp table*/
    upper = 300; /* upper limit */
    step = 20;

    celcius = lower;
    while (celcius <= upper) {
        fahr = (1.8 * celcius) + 32;
        printf("%3.0f %6.1f\n", celcius, fahr);
        celcius = celcius + step;
        }
    }
