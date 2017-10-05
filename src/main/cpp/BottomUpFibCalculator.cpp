/**
* CSC232 Data Structures with C++
* Missouri State University, Fall 2017
*
* @file    BottomUpFibCalculator.cpp
* @authors Jim Daehn <jdaehn@missouristate.edu>
*          Humberto Colin <colin010@live.missouristate.edu>
* @brief   Definition of BottomUpFibCalculator.
*/

#include "BottomUpFibCalculator.h"

int BottomUpFibCalculator::nthFibonacciNumber(int n) {
    if (n==0)
        return 1;
    else{
        int previousFib=1,currentFib=1,newFib=1;
        for (int i=2;i<=n;++i){
            newFib=previousFib+currentFib;
            previousFib=currentFib;
            currentFib=newFib;
        }
        return (newFib);
    }
}
