#include <iostream>
#include <valarray>
#include <vector>

using namespace std;

int main() {
    // 2^n/8 < n
    int n = 2;
    while (pow(2,n / 8) < n) {
        n++;
    }
    cout << n << endl;

    cout << "------------------" << endl;

    // the smallest value of n for which 100n^2 computes faster than 2^n
    n = 2;

    while (100 * pow(n, 2) > pow(2,n)) {
        n++;
    }

    cout << n << endl;

    cout << "------------------" << endl;

    // Insertion - Sort
    // 5 2 4 6 1 3 to 1 2 3 4 5 6


    vector<int> v = {5,2,4,6,1,3};
    for (int i = 1; i < v.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (v[i] < v[j]) {
                int tmp = v[i];
                v.erase(v.begin() + i);
                v.insert(v.begin() + j, tmp);
            }
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }


    return 0;
}
