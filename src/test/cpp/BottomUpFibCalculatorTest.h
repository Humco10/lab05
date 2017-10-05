/**
 * CSC232 Data Structures with C++
 * Missouri State University, Fall 2017.
 *
 * @file    BottomUpFibCalculatorTest.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * @brief   BottomUpFibCalculator CPPUNIT test specification. DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * @see     http://sourceforge.net/projects/cppunit/files
 */

#ifndef LAB05_BOTTOMUP_FIB_CALCULATOR_TEST_H__
#define LAB05_BOTTOMUP_FIB_CALCULATOR_TEST_H__

#include <cppunit/extensions/HelperMacros.h>
#include "../../main/cpp/BottomUpFibCalculator.h"

class BottomUpFibCalculatorTest : public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE(BottomUpFibCalculatorTest);
        CPPUNIT_TEST(testBaseCase);
        CPPUNIT_TEST(testBorderCase);
        CPPUNIT_TEST(testBiggerValue);
    CPPUNIT_TEST_SUITE_END();

public:
    BottomUpFibCalculatorTest();
    virtual ~BottomUpFibCalculatorTest();
    void setUp();
    void tearDown();
    void testBaseCase();
    void testBorderCase();
    void testBiggerValue();

private:
    BottomUpFibCalculator calculator;
};

#endif //LAB05_BOTTOMUP_FIB_CALCULATOR_TEST_H__
