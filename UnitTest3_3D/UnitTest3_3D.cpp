#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop3.3D\oop3.3D\Long_public.cpp"
#include "D:\Student\oop3.3D\oop3.3D\Long_private.cpp"
#include "D:\Student\oop3.3D\oop3.3D\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a(1, 1);
			bool t;
			t = a.Init(1000, 7);
			Assert::AreEqual(t, true);
		}
	};
}
