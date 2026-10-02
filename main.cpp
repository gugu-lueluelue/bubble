#include <iostream>
using namespace std;
int main() {

    int a[8] = {0};
    cout << "Enter 8 numbers:" ;
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < 8; i++) {
        cout << a[i] << " ";
    }

    return 0;
}