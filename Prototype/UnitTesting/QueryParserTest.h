#pragma once

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/config/SourcePrefix.h>
#include "QueryParser.h"

class QueryParserTest : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(QueryParserTest);
	CPPUNIT_TEST(testParse);
	CPPUNIT_TEST_SUITE_END();
	
public:
	void setUp();

	void tearDown();

	void testParse();
};