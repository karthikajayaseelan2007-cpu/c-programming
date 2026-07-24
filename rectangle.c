#include<stdio.h>
int main(){
int length,breadth;
printf("Length of the rectangle");
scanf("%d",&length);
printf("Breadth of the rectangle");
scanf("%d",&breadth);
int area = length*breadth;
printf("Area of perimeter : %d",area);
int perimeter = 2*(length +breadth);
printf("Perimeter of rectangle : %d",perimeter);
return 0;
}
