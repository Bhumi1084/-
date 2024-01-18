//Write a C program to determine eligibility for admission to a professional
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and
//Physics >=140----------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
//188 Total marks of Maths and Physics : 137 The candidate is not eligible
#include<stdio.h>
int main() {
    int physics, chemistry, mathematics, total, totalMathsPhysics;
    printf("Enter the marks in Physics : ");
    scanf("%d", &physics);
    printf("\nEnter the marks in Chemistry : ");
    scanf("%d", &chemistry);
    printf("\nEnter the marks in Mathematics : ");
    scanf("%d", &mathematics);
    
    total = physics + chemistry + mathematics;
    totalMathsPhysics = mathematics + physics;

    if (physics >= 55 && chemistry >= 50 && mathematics >= 65 && (total >= 190 || totalMathsPhysics >= 140)) {
        printf("\nEligible Admission");
    } 
	else {
        printf("\nNot eligible Admission.\n");
    }
    return 0;
}

