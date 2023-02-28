    /*
      Volume of a Sphere:
    The volume of a sphere is calculated by:
    V = 4/3. π .r 3
    where r is the radius of the sphere.
    Write a C program that computes the volume of a sphere with a
    20-meter diameter.Use π = 3.14159.
    */

#include<stdio.h>
    int main(){

        // Declar variable type ;

       int radius;
        float  result, pi,volume, r3;

        // Declar variable;

         volume = 4/3;
         pi = 3.1416;
         radius = 20;
         r3 = radius * radius * radius;

        // result
         result = volume * pi * r3;

        printf("%f",result);
        return 0;

    }
