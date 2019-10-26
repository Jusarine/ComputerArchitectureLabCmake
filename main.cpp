#include <iostream>
#include "calculator.h"

using namespace std;

int main(){
    Calculator cal;

    cout << "Sum of 3 and 5 is " << cal.Add(3, 5) << endl;
    return 0;
}