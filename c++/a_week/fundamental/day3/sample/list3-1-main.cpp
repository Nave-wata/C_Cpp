#include <iostream>
#include "sample.h"

using namespace std;

int main() {
    Sample s;

    s.a = 1;
    //s.b = 2; privateなので無理

    s.func1();
    //s.func2(); privateなので無理

    return 0;
}
