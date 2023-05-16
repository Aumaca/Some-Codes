#include <stdio.h>
#include <math.h>

const PI = 3.14;

void square();
void circle();

void main()
{
    int choice;

    do
    {
        printf("======== MENU ========\n");
        printf("[1] - Square\n");
        printf("[2] - Circle\n");
        printf("Choose a category: ");
        scanf("%i", &choice);
        if (choice < 1 || choice > 2) {
            printf("Invalid option. Try again.\n");
        }
    } while (choice < 1 || choice > 2);

    if (choice == 1)
    {
        square();
    }
    if (choice == 2)
    {
        circle();
    }
}

void square()
{
    float side, area, perimeter;
    printf("--------\n");
    printf("Side (in meters): ");
    scanf("%f", &side);
    area = pow(side, 2);
    perimeter = 4 * side;
    printf("Square's Area: %.2fm\n", area);
    printf("Square's Perimeter: %.2fm\n", perimeter);
}

void circle()
{
    float radius, area, circumference, diameter;
    printf("--------\n");
    printf("Radius (in meters): ");
    scanf("%f", &radius);
    area = PI * pow(radius, 2);
    circumference = 2 * PI * radius;
    diameter = 2 * radius;
    printf("Circle's Area: %.2fm\n", area);
    printf("Circle's Circumference: %.2fm\n", circumference);
    printf("Circle's Diameter: %.2fm\n", diameter);
}