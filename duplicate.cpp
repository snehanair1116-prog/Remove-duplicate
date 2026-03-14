#include <iostream>
using namespace std;

int main() {
    // Array must be sorted: {1, 2, 2, 3, 4, 4, 4, 5}
    int arr[] = {1, 1, 2, 2, 3, 4, 5, 5};
    int n = 8;

    
    if (n == 0 || n == 1) {
        
    } else {
        int index = 1; 
        for (int i = 1; i < n; i++) {
            
            if (arr[i] != arr[i - 1]) {
                arr[index] = arr[i]; 
                index++;             
            }
        }
        n = index; 
    }

    // Result: {1, 2, 3, 4, 5}
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}