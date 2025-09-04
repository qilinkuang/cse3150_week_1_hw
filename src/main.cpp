#include <iostream>
#include "AdvancedMath.h"
#include "MathUtils.h"

using namespace std;
using namespace MathUtils;
using namespace AdvancedMath;

int main()
{
    int a = 3;
    int b = 4;

    cout << "a + b = " << add(a,b) << endl;
    cout << "a * b = " << multiply(a,b) << endl;
    cout << "square(a) = " << square(a) << endl;
    
    return 0;
}

