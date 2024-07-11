#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("%.2f Celsius is equivalent to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}