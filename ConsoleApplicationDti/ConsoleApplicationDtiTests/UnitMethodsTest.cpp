#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/Client.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace ConsoleApplicationDtiTests
{		
	TEST_CLASS(UnitMethodsTest)
	{
	public:
		
		TEST_METHOD(ClientConstructor)
		{
			string name = "Fabyo";
			string address = "Conceicao Mato Dentro";
			string phone = "997278141";
			string email = "silveira.fabyo@outlook.com";
			string birthDate = "11/02/1999";

			Client* clientObject = new Client("Fabyo", "Conceicao Mato Dentro", "997278141", "silveira.fabyo@outlook.com", "11/02/1999");
			
			Assert::AreEqual(name, clientObject->name);
			Assert::AreEqual(address, clientObject->address);
			Assert::AreEqual(phone, clientObject->phone);
			Assert::AreEqual(email, clientObject->email);
			Assert::AreEqual(birthDate, clientObject->birthDate);
		}

	};
}