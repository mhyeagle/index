#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
    bitset<14> b1(string("1011"));
    cout << "b1: " << b1.to_string() << endl;

    bitset<14> b2(string("1101"));
    cout << "b2: " << b2.to_string() << endl;

    bitset<14> b3 = b1 & b2;
    cout << "b1 & b2: " << b3 << endl;

    b3 = b1 | b2;
    cout << "b1 | b2: " << b3 << endl;

    cout << "b1: " << b1.to_string() << endl;
    size_t set_size = b1.size();
    for(int i = 0; i < set_size; ++i) {
        if (b1.test(i)) {
            cout << "b1 position " << i << " value: " << b1[i] << endl;
        }
    }

    return 0;
}
