#include <iostream>
using namespace std;
void multidimensional(int r, int c, int arr[100][100]);
void result(int r, int c, int arr[100][100]);
int main(){
    
    int array[100][100], rows, columns;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> columns;
    multidimensional(rows, columns, array);
    result(rows, columns, array);
    
    return 0;
}
void multidimensional(int r, int c, int arr[100][100]){
    int *ptr = &arr[0][0];
    cout << "Enter elements: ";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> *(ptr + i * c + j);
        }
    }
}
void result(int r, int c, int arr[100][100]){
    int *ptr = &arr[0][0];
    cout << "Result:\n";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << *(ptr + i * c + j) << " ";
        }
        cout << endl;
    }
}