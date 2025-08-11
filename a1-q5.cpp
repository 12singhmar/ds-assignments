#include <iostream>
using namespace std;

int main() {
    int a[10][10], r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];
    for(int i = 0; i < r; i++) {
        int rowsum = 0;
        for(int j = 0; j < c; j++) {
            rowsum += a[i][j];
        }
        cout << "row " << i << " sum: " << rowsum << endl;
    }
    for(int j = 0; j < c; j++) {
        int colsum = 0;
        for(int i = 0; i < r; i++) {
            colsum += a[i][j];
        }
        cout << "column " << j << " sum: " << colsum << endl;
    }
    return 0;
}