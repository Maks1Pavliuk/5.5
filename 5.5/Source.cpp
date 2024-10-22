#include <iostream>
using namespace std;


double power(double x, int n) {
    if (n == 0) {
        return 1; 
    }
    else if (n < 0) {
        return 1 / power(x, -n); 
    }
    else {
        return x * power(x, n - 1); 
    }
}

int main() {
    double x;
    int n;

    
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;

    
    cout << x << " degree " " = " << power(x, n) << endl;

    return 0;
}
