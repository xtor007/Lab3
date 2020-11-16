//
//  main.cpp
//  lab3
//
//  Created by Anatoliy Khramchenko on 11/10/20.
//  Copyright © 2020 Anatoliy Khramchenko. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    float x;
    cout << "enter x from 0 to 2 ";
    cin >> x;
    float const Eps = 1E-6;
    float f1 = x-1;
    float b = x-1;
    int i = 2;
    int z = -1;
    float f2;
    float res;
    do {
        f2 = f1 + b*z*(x-1)/i;
        res = f2 - f1;
        f1 = f2;
        i++;
        z=z*(-1);
        b=b*(x-1);
        cout << "f=" << setw(9) << fixed << f1 << endl;
    } while (abs(res)>=Eps);
    return 0;
}
