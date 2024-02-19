#include <stdio.h>
#include <stdlib.h>

int main()
{

    float pounds, kilograms;
    int start, end, increment;

    printf("Enter starting pounds value: ");
    scanf("%d", &start);
    printf("Enter ending pounds value: ");
    scanf("%d", &end);
    printf("Enter increment value: ");
    scanf("%d", &increment);

    printf("Pounds\tKilograms\n");

    for (pounds = start; pounds <= end; pounds += increment) {
        kilograms = pounds * 0.453592;
        printf("%6.2f\t%9.2f\n", pounds, kilograms);
    }

    return 0;
}
