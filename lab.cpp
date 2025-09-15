#include <iostream>
using namespace std;
//function prototypes
void enterArrayData(double* arr, int size);
void outputArrayData(double* arr, int size);
double sumArray(double* arr, int size);

int main(){
    const int ARRAY_SIZE = 5;
    double* arr;

    arr = new double[ARRAY_SIZE];

    enterArrayData(arr, ARRAY_SIZE);

    cout << "Array data: ";
    outputArrayData(arr, ARRAY_SIZE);

    double total = sumArray(arr, ARRAY_SIZE);
    cout << "Sum: " << total << endl;

    delete[] arr;
    return 0;
}

void enterArrayData(double* arr, int size){
    cout << "Enter "<<size<<" double values"<<endl;
    for (int i =0; i<size; ++i){
        cout <<  "Enter number "<<(i+1)<<": ";
        cin >> *(arr + i);
    } 
}

void outputArrayData(double* arr, int size){
    for (int i =0; i<size; ++i){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

