#include <stdio.h>
#include <math.h>
typedef struct coordinates
{
    float x;
    float y;
} point;
float get_length(point, point);
int main()
{
    point a,b;
    printf("Enter the x and y coordinates of the first point\n");
    scanf("%f%f",&a.x,&a.y);
    printf("Enter the x and y coordinates of the second point\n");
    scanf("%f%f",&b.x,&b.y);
    printf("Displacement: %.3f",get_length(a,b));
}
float get_length(point a, point b)
{
    float disp;
    float term1 = b.x-a.x;
    float term2 = b.y-a.y;
    //printf("terms=%f%f",term1, term2);
    disp = sqrt(term1*term1+term2*term2);
    return disp;
}
