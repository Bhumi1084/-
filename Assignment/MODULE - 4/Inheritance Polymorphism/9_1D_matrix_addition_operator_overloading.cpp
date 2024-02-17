//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;

//Class representing a 1D matrix
class Matrix{
	//private data member
private:
    int size;
    int *data;

public:
	//create constructor
    Matrix(int size1) : size(size1){
        data = new int[size];
    }
	
	//overloaded + operator
    Matrix operator +(Matrix obj){
    	//check condition
        //check if both matrices have the same size
        if(this->size != obj.size){
            cout<<"Matrices have different sizes. Addition not possible."<<endl;
            //Return an empty matrix
            return Matrix(0);
        }

        //Create a new matrix to store the result
        Matrix result(size);

        //Perform addition
        for(int i = 0; i < size; i++){
            result.data[i] = this->data[i] + obj.data[i];	//calculate addition
        }
        return result;
    }

    //Function to input matrix elements
    void inputMatrix(){
        cout<<"Enter "<<size<<" elements : ";
        for(int i = 0; i < size; ++i){
            cin>>data[i];	//get value from user and store in array
        }
    }

    //Function to display matrix elements
    void displayMatrix(){
        cout<<"Matrix : ";
        for(int i = 0; i < size; ++i){
            cout<<data[i]<<" ";	//display value
        }
        cout<<endl;	//print next line
    }
};

int main() {
    //Input size of matrices
    int size;
    cout<<"Enter size of matrices : ";
    cin>>size;	//get value from user

    //Create object
    Matrix matrix1(size), matrix2(size);

    //Input elements for both matrices
    cout<<"Enter elements for first matrix"<<endl;
    matrix1.inputMatrix();	//call function and display first matrix
    cout<<"Enter elements for second matrix"<<endl;
    matrix2.inputMatrix();	//call function and display second matrix

    //Perform matrix addition using overloaded '+' operator
    Matrix result = matrix1 + matrix2;	//calculate addition

    // Display the result matrix
    result.displayMatrix();	//display addition
    return 0;
}
