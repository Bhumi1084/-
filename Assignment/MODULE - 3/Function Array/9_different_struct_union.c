//WAP to show difference between Structure and Union
#include<stdio.h>
//member of a structure can be accessed simultaneously.
//in a structure each member has its own memmory space and the total size of 
//the structure is the sum of the size of its member.

//create structure
struct demo{
	int number1;	//declare variable
	float number2;
};

//only one member of a union can be accessed at a time.
//in a union all members share the same memory space. the size of the union is
//equal to the size of its largest member.

//create union
union demo1{
	int number_1;	//declare variable
	float number_2;
}un1;	//create object

int main(){
	
	//structure
	struct demo d1;	//create object
	d1.number1 = 5;
	d1.number2 = 10.5;
	printf("\nstructure x and y : %d  %.2f", d1.number1, d1.number2);	//display value
	
	//union
	un1.number_1 = 5;
	un1.number_2 = 10.4;
	//printf("\nnumber x and y : %d %.2f", un1.number_1, un1.number_2);
	printf("\nno of intiger : %d",un1.number_1);	//display value
	printf("\nno of float : %.2f",un1.number_2);	//display value
	return 0;
}
