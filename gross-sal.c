#include <stdio.h>

float calculateGrossSalary(float baseSalary, float hraPercent, float daPercent, float taPercent)
{
    float hra = (hraPercent / 100) * baseSalary;
    float da = (daPercent / 100) * baseSalary;
    float ta = (taPercent / 100) * baseSalary;
    return baseSalary + hra + da + ta;}

    int main()
    {
        float baseSalary, hraPercent, daPercent, taPercent, grossSalary;

        printf("Enter Base Salary: ");
        scanf("%f", &baseSalary);
        printf("Enter HRA percentage: ");
        scanf("%f", &hraPercent);
        printf("Enter DA percentage: ");
        scanf("%f", &daPercent);
        printf("Enter TA percentage: ");
        scanf("%f", &taPercent);

        grossSalary = calculateGrossSalary(baseSalary, hraPercent, daPercent, taPercent);

        printf("Gross Salary: Rs. %.2f\n", grossSalary);

        return 0;
    }
