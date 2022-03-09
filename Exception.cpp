#include <iostream>
#include <stdexcept>

using namespace std;

double check(double d) {
    return d > 1e7 ? throw overflow_error("too big") : d;
}

int main() {
    double d;

    cout << "Digite d: ";
    cin >> d;

    try {
        cout << check(d) << endl;
    }
    catch (overflow_error &e) {
        cout << "exception capturada::" << e.what() << '\n';
    }
}
