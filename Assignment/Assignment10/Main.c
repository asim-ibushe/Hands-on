#include<stdio.h>
float cal_AreaCircle(float r)
{
    return (3.141*r*r);
}
float cal_AreaRect(float l,float b)
{
    return l*b;
}
int KMtoM(int ino)
{
    return ino*1000;
}
//(1 celsius = (Fahrenheit -32) * (5/9))
double FhtoCs(float Ftemp)
{
    return ((Ftemp-32)*5)/9;
}
//(1 square feet = 0.0929 Square meter)
double sqFeet_Meter(int ino)
{
    return ino*0.0929;
}
int main()
{
    float radius;
    printf("Enter Radius of circle:");
    scanf("%f",&radius);
    printf("Area of circle is= %.4f\n",cal_AreaCircle(radius));
    float length,width;
    printf("Enter length & width of Rectangle:\n");
    scanf("%f%f",&length,&width);
    printf("Area of Rectangle is= %.3f\n",cal_AreaRect(length,width));
    int KM;
    printf("Enter Distance(KM):");
    scanf("%d",&KM);
    printf("Distance Travelled in meter:%d\n",KMtoM(KM));
    float temperature;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&temperature);
    printf("Temperature converted to celsius is %.2f",FhtoCs(temperature));
    int area;
    printf("\nEnter area in square feet:");
    scanf("%d",&area);
    printf("Area converted to square meter:%f",sqFeet_Meter(area));
    return 0;
}