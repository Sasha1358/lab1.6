#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.6/Student.h"
#include "../lab1.6/Student.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
    TEST_CLASS(UnitTest16)
    {
    public:

        TEST_METHOD(TestChangeAgeMethod)
        {
            Student::Man man;
            man.Init("John", 25, "Male", 70.5);
            man.changeAge(30);
            Assert::AreEqual(30, man.getAge());
        }
    };
}
