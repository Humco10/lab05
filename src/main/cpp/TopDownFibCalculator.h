/**
 * CSC232 Data Structures with C++
 * Missouri State University, Fall 2017
 *
 * @file    TopDownFibCalculator.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Your Name <yname@missouristate.edu>
 * @brief   Specification of TopDownFibCalculator.
*/

#ifndef LAB05_TOP_DOWN_FIB_CALCULATOR_H__
#define LAB05_TOP_DOWN_FIB_CALCULATOR_H__

#include "FibCalculator.h"

/**
 * An implementation of the <code>FibCalculator</code> that uses top-down dynamic programming approaches where
 * appropriate.
 */
class TopDownFibCalculator : public FibCalculator {
public:
    /**
     * Calculates the nth Fibonacci number using a top-down, dynamic programming approach.
     *
     * @pre n >= 0
     * @param n an index into the Fibonaaci sequence beginning at 0.
     * @return The nth number in the Fibonacci sequence is returned.
     */
    int nthFibonacciNumber(int n) const override;
    virtual ~TopDownFibCalculator() {}
};

#endif //LAB05_TOP_DOWN_FIB_CALCULATOR_H__
