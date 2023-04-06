#include <stdio.h>
#include <math.h>

double calcSum(double n1, double n2);
double calcSub(double n1, double n2);
double calcMulti(double n1, double n2);
double calcDiv(double n1, double n2);
double calcSqrt(double n);
double calcPower(double n);

void areaAndPerimeterofEllipse();
void areaAndPerimeterofHexagon();
void areaAndPerimeterofTrapezoid();
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
double calcSum(double n1, double n2){
    return n1+n2;
}

double calcSub(double n1, double n2){
    return n1-n2;
}

double calcMulti(double n1, double n2){
    return n1*n2;
}

double calcDiv(double n1, double n2){
    return n1/n2;
}

double calcSqrt(double n){
    return sqrt(n);
}

double calcPower(double n){
    int m;
    printf("\n");
    printf("Give a number to raise to the square root of: ");
    scanf("%d", &m);
    return pow(n,m);
}

int main() {
    while(1){
        printf("\n");
        printf("What operation do you want to do: \n"
               "1-Sum \n"
               "2-Subtraction \n"
               "3-Multiplication \n"
               "4-Division \n"
               "5-Square Root \n"
               "6-Power\n"
               "7-Ellipse\n"
               "8-Trapezoid\n"
               "9-Hexagon");
        int choice;
        scanf("%d", &choice);
        printf("\n");
        double n1,n2;



        switch (choice) {
            case 1:
                printf("Enter 2 numbers: ");
        scanf("%lf %lf", &n1, &n2);
                printf("\n");
                printf("Sum: %lf", calcSum(n1,n2));
                break;
            case 2:
                printf("Enter 2 numbers: ");
        scanf("%lf %lf", &n1, &n2);
                printf("\n");
                printf("Subtraction: %lf", calcSub(n1,n2));
                break;
            case 3:
                printf("Enter 2 numbers: ");
        scanf("%lf %lf", &n1, &n2);
                printf("\n");
                printf("Multiplication: %lf", calcMulti(n1,n2));
                break;
            case 4:
                printf("Enter 2 numbers: ");
        scanf("%lf %lf", &n1, &n2);
                printf("\n");
                printf("Division: %lf", calcDiv(n1,n2));
                break;
            case 5:
                printf("\n");
                int n;
                printf("Give a number: ");
                scanf("%d", &n);
                printf("Square Root: %lf", calcSqrt(n));
                break;
            case 6:
                printf("\n");
                int num;
                printf("Give a number: ");
                scanf("%d", &num);
                printf("\n");
                printf("Power: %lf", calcPower(num));
                break;

 case 7:
          areaAndPerimeterofEllipse ();

        break;

          case 8:
           areaAndPerimeterofTrapezoid ();

        break;


         case 9:
         areaAndPerimeterofHexagon();

        break;
        }
        printf("\n");
        printf("Do you want to continue using the calculator?(1-Yes | 0-No): ");
        int continueChoice;
        scanf("%d", &continueChoice);
        if(continueChoice == 0){
            break;
        }

   }
}


