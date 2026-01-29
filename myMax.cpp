#include <iostream>
using namespace std;

// TODO: Write a function template myMax
template <typename t>
t myMax(t val1, t val2){
    if (val1 > val2){
        return val1;
    }
    if (val2 > val1){
        return val2;
    }
    return 0 // vals are equal
}

int main() {
    cout << myMax(3, 7) << endl;
    cout << myMax(3.5, 2.1) << endl;
    cout << myMax(string("apple"), string("banana")) << endl;
    return 0;
}
