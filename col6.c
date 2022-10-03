#include<stdio.h>
#include<math.h>

int main(){
    float a;
    printf("Enter radius of circle:");
    scanf("%f",&a);

    printf("Diameter of circle is %f\n",2*a);
    printf("Area of circle is %f\n",3.14159*a*a);
    printf("Circumfrence of circle is %f\n",2*3.14159*a);
    return 0;
}