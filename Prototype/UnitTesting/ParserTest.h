#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include "Parser.h"

class ParserTest : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(ParserTest);
	CPPUNIT_TEST(testParse);
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();

	void tearDown();

	void testParse();
};