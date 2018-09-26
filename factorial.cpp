#include <iostream>

using namespace std;

int fact (int x) {
    int f = 1;
    while (x>0) {
        f *= x--;
    }
    return f;
}
int recursiveFact(int x) {
    if (x > 1) {
        return  x*recursiveFact(x-1);
    } else {
        return 1;
    }
}
int main() {
    int input = 0;
    cin >> input;
    cout << fact(input) << endl;
    cout << recursiveFact(input) << endl;
}