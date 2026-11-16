#include <iostream>
using namespace std;

bool binary_search(int* mas, int n, int el) {
    int mid = n/2;
    if (mas[mid] == el) {
        cout << mid << " - " << mas[mid];
        return true;
    }
    else if (mid == 0) {
        cout << "\nNot finded.\n";
        return false;
    }
    else if (el > mas[mid]) {
        cout << mid << " - " << mas[mid];
        binary_search(mas + mid, n-mid, el);
    }
    else if (el < mas[mid]) {
        cout << mid << " - " << mas[mid];
        binary_search(mas, mid, el);
    }
    return false;
}

int main() { 
    int mas[] = {1,2,3,4,5};
    int el;
    cin >> el;
    if (binary_search(mas, 5, el)) cout << "\nFinded\n";
    
    system("pause");
    return 0;
}
