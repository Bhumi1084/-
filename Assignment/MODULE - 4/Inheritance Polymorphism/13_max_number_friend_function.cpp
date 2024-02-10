//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;
class MaxFinder{
private:
    int num1, num2;
public:
    MaxFinder(int a, int b) : num1(a), num2(b){}
    friend int findMax(MaxFinder obj);
};

int findMax(MaxFinder obj){
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main(){
    int a, b;
    cout<<endl<<"Enter two numbers : ";
    cin>>a>>b;

    MaxFinder numbers(a, b);
    int result = findMax(numbers);

    cout<<endl<<"Maximum number is : "<<result;
    return 0;
}
