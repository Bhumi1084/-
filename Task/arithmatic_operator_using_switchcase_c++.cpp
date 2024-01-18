//WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)
#include<iostream>
int main(){
	int ch;
    float n1, n2, ans;
    std::cout<<"Enter a first number : ";
    std::cin>>n1;
    std::cout<<"Enter a second number : ";
    std::cin>>n2;
    std::cout<<"choice operation....";
    std::cout<<std::endl<<"1.Addition"<<std::endl<<
	"2.Subtraction"<<std::endl<<"3.Multiplication"<<std::endl<<"4.Division";
	std::cout<<std::endl<<"Enter your choice : ";
    std::cin>>ch;
    
    switch(ch){
    	case 1:
        	ans = n1 + n2;
            std::cout<<std::endl<<"Addition = "<<ans;
            break;
        case 2:
            ans = n1 - n2;
            std::cout<<std::endl<<"Subtraction = "<<ans;
            break;
        case 3:
            ans = n1 * n2;
            std::cout<<std::endl<<"Multiplication = "<<ans;
            break;
        case 4:
            if (n2 != 0) {
                ans = n1 / n2;
                std::cout<<std::endl<<"Division = "<<ans;
            }
			else {
                std::cout<<std::endl<<"Error! Division by zero is not allowed.";
            }
            break;
        default:
            std::cout<<std::endl<<"Invalid choice!";
    }
	return 0;
}
