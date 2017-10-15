#include <iostream>
using namespace std;


int main() {

    int num, denom, rest, div;

    while(cin >> num) {

        cin >> denom;

        if(num == 0 && denom == 0) {
            return 0;
        }

        rest = num % denom;
        div = num / denom;
        cout << div << " " << rest << " / " << denom << endl;


    }


}
