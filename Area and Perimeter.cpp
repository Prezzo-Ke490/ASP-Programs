#include <stdio.h>
int main() {
	float Length, width, area, perimeter;
	
	printf("Enter the value Length");
	scanf("%f",&Length);
	
	printf("\nEnter the value of width");
	scanf("%f",&width);
	
	area= Length*width;
	printf("\n%f",area);
	
	perimeter= 2*Length+2*width;
	printf("\n%f",perimeter);
	return 0;
}
