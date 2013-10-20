#include "QueryParserTest.h"

using namespace std;

// Register fixture into test registry
CPPUNIT_TEST_SUITE_REGISTRATION(QueryParserTest);

void QueryParserTest::setUp() 
{
	
}

void QueryParserTest::tearDown() 
{

}

void QueryParserTest::testParse()
{
	QueryParser parser;
	parser.parse("Select s such that Follows (5, s);");
	
}
