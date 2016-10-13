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
		
    while(true){
		bool is_sorted = true;
		for (int i = 0; i < array_size-1; i++){
			if (arr[i] > arr[i + 1]){
				int temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
				is_sorted = false;
			}
		}
		if (is_sorted){
			break;
		}
	}
	
	cout << "Here is the sorted array: " << '\n';
    for (int i=0; i < array_size; i++){
        cout << arr[i] << " " << '\n';
        }
}