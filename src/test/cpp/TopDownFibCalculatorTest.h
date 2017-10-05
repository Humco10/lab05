/**
 * CSC232 Data Structures with C++
 * Missouri State University, Fall 2017.
 *
 * @file    TopDownFibCalculatorTest.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * @brief   TopDownFibCalculator CPPUNIT test specification. DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * @see     http://sourceforge.net/projects/cppunit/files
 */

#ifndef LAB09_TOP_DOWN_FIB_CALCULATOR_TEST_H__
#define LAB09_TOP_DOWN_FIB_CALCULATOR_TEST_H__

#include <cppunit/extensions/HelperMacros.h>
#include "../../main/cpp/TopDownFibCalculator.h"

class TopDownFibCalculatorTest : public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE(TopDownFibCalculatorTest);
        CPPUNIT_TEST(testBaseCase);
        CPPUNIT_TEST(testBorderCase);
        CPPUNIT_TEST(testBiggerValue);
    CPPUNIT_TEST_SUITE_END();

public:
    TopDownFibCalculatorTest();
    virtual ~TopDownFibCalculatorTest();
    void setUp();
    void tearDown();
    void testBaseCase();
    void testBorderCase();
    void testBiggerValue();
};

#endif //LAB09_TOP_DOWN_FIB_CALCULATOR_TEST_H__
