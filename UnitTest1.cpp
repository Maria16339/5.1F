#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/5.1F/5.1F/MyDerivedException.cpp"
#include "C://Users/User/source/repos/5.1F/5.1F/MyException.cpp"
#include "C://Users/User/source/repos/5.1F/5.1F/Pair.cpp"
#include "C://Users/User/source/repos/5.1F/5.1F/Rectangle_Private.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle_Private T(3, 4);
			Assert::AreEqual(T.Square(), 12.0);
		}
	};
}
