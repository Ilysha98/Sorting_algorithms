#include <iostream>

using namespace std;


int main() {
    int* arr;
    int size;
    cout << " n = " << endl;
    cin >> size;
    if (size <= 0){
        cerr << "Invalid size " << endl;
        return 1;
    };
    arr = new int [size];
    for (int i = 0; i < size; i++){
        cout << "arr[" << arr[i] << "] = ";
        cin >> arr[i];
        
    };
    int temp;
    for (int i = 0; i < size - 1; i++){
        
        for (int j = 0; j < size - i - 1 ; j--){
            
            if ( arr[j] > arr[j + 1]){
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j] = temp;
            };
        };
    };
    for (int i = 0; i < size; i++){
        cout << arr[i] << "";
    }
    delete[] arr;
    
    return 0;
}
