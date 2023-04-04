//tdisho22
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void areaAndPerimeterofEllipse();
void areaAndPerimeterofHexagon();
void areaAndPerimeterofTrapezoid();
int main()
{
   int n,shape;
   printf("Enter the number of shapes you will input:\n");
   scanf("%d",&n);
   for (int i=0;i<n;i++)
   {
       printf("Press 1 for ellipse , 2 for trapezoid and 3 for hexagon:\n");
       scanf("%d",&shape);
       if (shape==1)
       {
        areaAndPerimeterofEllipse();
       }
       else if (shape==2)
       {
          areaAndPerimeterofTrapezoid();
       }
       else if (shape==3)
        {
       areaAndPerimeterofHexagon();
       }
       else
       {
           printf("Error\n");

        }


   }

    return 0;
}
void areaAndPerimeterofEllipse ()
{
    printf("Enter two values for axis a and axis b : \n");
    int a,b;
    double ans,l,perimeter,area;
    scanf("%d%d",&a,&b);
        area=3.14159*a*b;
        l=(3*a+b)*(a+3*b);
        ans=sqrt(l);
        perimeter=3.14159*(3*(a+b)-ans);
        printf("The area of the ellipse is: %.3lf and the perimeter is %.3lf\n",area , perimeter );
}
void areaAndPerimeterofTrapezoid ()
{
    int a,b,h;
    double area,perimeter;
    printf("Enter values for the two bases and the height:\n");
    scanf("%d%d%d",&a,&b,&h);
         area=(((a+b)/2.0)*h);
           perimeter=2*a+2*b;
        printf("The area of the trapezoid is: %.3lf and the perimeter is %.3lf\n",area,perimeter);
}

void areaAndPerimeterofHexagon()
{
    int a;
    double perimeter,area;
    printf("Enter the length of the side:\n");
     scanf("%d",&a);
       area=((3*1.732)/2.0)*(a*a);
       perimeter=6*a;
        printf("The area of the hexagon is: %.3lf and the perimeter is %.3lf\n",area,perimeter );
}
