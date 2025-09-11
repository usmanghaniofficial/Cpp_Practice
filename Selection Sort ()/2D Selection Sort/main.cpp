#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int arr[100][100]; // 2D array

    // Input
    for(int row = 0; row < m; row++) {
        for(int col = 0; col < n; col++) {
            cout << "Enter element [" << row << "][" << col << "]: ";
            cin >> arr[row][col];
        }
    }

    // Row-wise Selection Sort
    for(int row = 0; row < m; row++) {
        for(int i = 0; i < n-1; i++) {
            int minValue = i;
            for(int k = i+1; k < n; k++) {
                if(arr[row][minValue] > arr[row][k]) {
                    minValue = k;
                }
            }
            // Swap
            int temp = arr[row][i];
            arr[row][i] = arr[row][minValue];
            arr[row][minValue] = temp;
        }
    }

    // Output
    cout << "\nSorted Row-wise Array:\n";
    for(int row = 0; row < m; row++) {
        for(int col = 0; col < n; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
