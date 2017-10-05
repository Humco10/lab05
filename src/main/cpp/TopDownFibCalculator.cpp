/**
 * CSC232 Data Structures with C++
 * Missouri State University, Fall 2017
 *
 * @file    TopDownFibCalculator.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Humberto Colin <colin010@live.missouristate.edu>
 * @brief   Definition of TopDownFibCalculator.
 */

#include "TopDownFibCalculator.h"
#include "map"

int TopDownFibCalculator::nthFibonacciNumber(int n)  {
    m[0]=1;
    m[1]=1;

    if(m.find(n) == m.end()){
        m[n] = nthFibonacciNumber(n -1 )+nthFibonacciNumber(n-2);
    }
    return m[n];
}
