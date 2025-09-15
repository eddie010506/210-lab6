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

    cout << "Outputting array elements: ";
    outputArrayData(arr, ARRAY_SIZE);

    double total = sumArray(arr, ARRAY_SIZE);
    cout << "Sum of values:  " << total << endl;

    delete[] arr;
    return 0;
}

void enterArrayData(double* arr, int size){
    cout << "Data entry for the array:"<<endl;
    for (int i =0; i<size; ++i){
        cout <<  "    > Element #"<<i<<": ";
        cin >> *(arr + i);
    }
    cout << "data entry complete." << endl;
}

void outputArrayData(double* arr, int size){
    for (int i =0; i<size; ++i){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

double sumArray(double* arr, int size){
    double sum = 0.0;
    for (int i =0; i<size; ++i){
        sum += *(arr +i);
    }
    return sum;
}