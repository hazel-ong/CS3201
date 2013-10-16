#include "ParserTest.h"

using std::cout;

// Register fixture into test registry
CPPUNIT_TEST_SUITE_REGISTRATION(ParserTest);

void ParserTest::setUp() 
{
	
}

void ParserTest::tearDown() 
{

}

void ParserTest::testParse()
{
	Parser parser;
	parser.parse("filename");
}
