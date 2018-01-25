//
//  main.cpp
//  CPP-CLASS-01-01-Unequal-Floats
//
//  Created by Keith Smith on 1/25/18.
//  Copyright © 2018 Keith Smith. All rights reserved.
//

double generateFloatValue();

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    
    // Floats for storing three values and two for storing the
    // (a+b)+c a+(b+c) arithmetic values
    float
        a,
        b,
        c,
        d,
        e;
    
    // Vanity counter to keep track and display number of
    // times the loop has run to the user
    int counter = 1;
    
    // Seed the random number generator with time value
    srand (time(NULL));
    
    // Main program loop, will continue to run until d-e != 0
    do {
        a = generateFloatValue();
        b = generateFloatValue();
        c = generateFloatValue();
        
        cout << "\nAttempt number " << counter << endl;
        cout << "Value 1: " << a << endl;
        cout << "Value 2: " << b << endl;
        cout << "Value 3: " << c << endl;
        
        d = (a+b) + c;
        e = a + (b+c);
        
        counter += 1;
    } while(d-e == 0.0);
    
    // Another redundant check to make sure that d-e != 0.0
    if(d-e == 0.0) {
        cout << "\nValue summation is equal to zero\n\n";
    }
    else if(d-e != 0.0) {
        cout << "\nValue summation is not equal to zero\n\n";
    }
    else {
        cout << "\nERROR WITH VALUE SUMMATION COMPARISON\n\n";
    }
    
    return 0;
}

// Function used to generate the floating point values for mathematical
// operations in main
double generateFloatValue() {
    double value = 0.0;
    // Arbitrary number to increment by
    static double INCREMENT = 0.0001010109;
    
    for(int i = 0 ; i < rand() % 99999999 ; i++) {
        value += INCREMENT;
    }
    
    return value;
}
