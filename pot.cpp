#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    long sum = 0;

    cin >> n;

    while(n--) {
        int p;
        cin >> p;
        sum += pow(p/10, p%10);
    }

    cout << sum;

    return 0;


}
