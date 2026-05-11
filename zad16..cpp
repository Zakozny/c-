#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int w = 0;
    int d = 2;

    while (d < N) {
        if (N % d == 0) {
            w = w + 1;
        }
        d = d + 1;
    }

    cout << w << endl;

    return 0;
}
