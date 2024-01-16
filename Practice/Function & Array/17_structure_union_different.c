//WAP to show difference between Structure and Union
#include<stdio.h>
//member of a structure can be accessed simultaneously.
//in a structure each member has its own memmory space and the total size of 
//the structure is the sum of the size of its member.
struct demo{
	int x;
	float y;
};

//only one member of a union can be accessed at a time.
//in a union all members share the same memory space. the size of the union is
//equal to the size of its largest member.
union demo1{
	int num;
	float num1;
}un1;

int main(){
	
	//structure
	struct demo d1;
	d1.x = 5;
	d1.y = 10.5;
	printf("\nstructure x and y : %d  %.2f", d1.x, d1.y);
	
	//union
	un1.num = 5;
	un1.num1 = 10.4;
	//printf("\nnumber x and y : %d %.2f", un1.num, un1.num1);
	printf("\nno of intiger : %d",un1.num);
	printf("\nno of float : %.2f",un1.num1);
	return 0;
}
