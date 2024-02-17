//Write a program of to sort the array using templates
#include<iostream>
using namespace std;

//create template
template<typename T>
//create function
void sort(T array[],int size){
    for(int i = 0; i < size;i++){
        for(int j = i + 1;j < size; j++){
        	//check condition
            if(array[i] > array[j]){
            	//logic for sort the array
                array[i] = array[i] * array[j];
                array[j] = array[i] / array[j];
                array[i] = array[i] / array[j];
           }
        }
    }
}
int main(){
    int number;
    cout<<"Enter the size of array:";
    cin>>number;	//get value from user
    int array[number];	//create array
    for(int i = 0; i < number; i++){
        cout<<"Enter the array element:";
        cin>>array[i];	//get value from user
    }
    cout<<"Before sorting the array is:"<<endl;
    for(int i = 0; i < number; i++){
        cout<<array[i]<<" ";	//print before sorting value
    }
    sort(array,number);	//call function
    cout<<endl<<"After sorting the array is :"<<endl;
    for(int i = 0; i < number;i++){
        cout<<array[i]<<" ";	//print after sorting value
    }
    return 0;
}
