#include <iostream>

using namespace std;

int main() {

    int n, r, e, c;

    cin >> n;

    for(int i = 0; i<n; ++i) {

        cin >> r;
        cin >> e;
        cin >> c;

        if(e-c < r)
            cout << "do not advertise" << endl;
        if(e-c > r)
            cout << "advertise" << endl;
        if(e-c == r)
            cout << "does not matter" << endl;
    }

    return 0;

}
