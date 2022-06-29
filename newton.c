
#include <stdio.h>
#include <math.h>
#define epsilon 0.00001
int i = 0;

float f(float x)
{
    return (x*x*x*x)+(2*(x*x*x))-(4*x*x)-(x)+1; 
}

float df(float x)
{
    return (4*x*x*x)+(6*x*x)-(8*x)-1;
}

void newtonRaphson(float x)
{

    float h = f(x) / df(x);
    while (fabs(h) >= epsilon)
    { 
        
        h = f(x)/df(x);
  
        // x(i+1) = x(i) - f(x) / f'(x) 
        x = x - h;
    }
 
    printf("%0.4-f",  x);
}
 
// Driver program to test above
int main()
{
   float x0;
   scanf("%f", &x0);
    newtonRaphson(x0);
    return 0;
}
