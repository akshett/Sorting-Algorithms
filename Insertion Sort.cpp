// Example program
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    cout << "Enter array size:" << '\n';
    int array_size;
    cin >> array_size;
    int arr[array_size];
    cout << "Enter array elements" <<'\n';
    for (int i = 0; i < array_size; i++){
        cin >> arr[i];
        }
    
    for (int i = 0; i < array_size; i++){
        for (int k = i; k >0 ; k--){
            if (arr[k] < arr[k-1]){
                int temp = arr[k];
                arr[k] = arr[k-1];
                arr[k-1] = temp;
                }
            }
        }
    cout << "Here is the sorted array: " << '\n';
    for (int i=0; i < array_size; i++){
        cout << arr[i] << " " << '\n';
        }
    }