#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <math.h>
using namespace std;

int WinMain()
{

    //promt user to enter coefficients
    puts("Please enter A, B and C for 'ax^2+bx+c=0':");
    float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f %f %f", &a, &b, &c);
    float D = pow(b, 2) - 4 * a * c;
    if (D < 0)
    {
        printf("Discriminant < 0");
    }
    else
    {
        float x1 = (-b + sqrt(D)) / 2 * a;
        float x2 = (-b - sqrt(D)) / 2 * a;

        printf("solution of an equation: x1= %f, x2= %f", x1, x2);
    }
}