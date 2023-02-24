

/*4. WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/


#include<stdio.h>
int main()
{
    double R;
    printf("Enter the value of radius - ");
    scanf("%lf",&R);
    printf("Area of circle is %lf having the radius %lf",3.18*R*R,R);
    return 0;
}
