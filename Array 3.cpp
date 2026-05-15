#include <stdio.h>
int main(){
	int marks[6];
	float sum=0, avarage;
		printf("Enter marks for six subjects:\n");
	for(int i=0;i<5;i++){
		printf("Subject %d",i + 1);
		scanf("%d",&marks[i]);
		sum+=marks[i];
	}
	avarage = sum / 6;
	printf("Avarage marks = %f\n",avarage);
	return 0;
}
