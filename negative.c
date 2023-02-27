#include  <stdio.h>

int main (void)
{
   //declare variables
   int length, width, perimeter, area;
   //validate user input
   do{
    printf("Enter the length of the rectangle:");
    scanf("%d", &length);
    printf("Enter the width of the rectangle:");
    scanf("%d", &width);
   }while (length <0 || width <0);
   //compute perimeter and area
   perimeter = 2*(length + width );
   area = length*width;

   //display results
   printf("\n The perimeter of the rectangle is %d units and its area is %d units squared \n\n,", perimeter, area);
    return 0;

}
