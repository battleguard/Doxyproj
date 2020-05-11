#include <string>

#include "MyClass1.h"

/// Example usage of the MyClass1 class
/// \example main.cpp
int main(int argc, char* argv[])
{
	//! [MyClass1ExampleSnippet]
	MyClass1 myClass;
	const auto result = myClass.Add(10, 20);
	MyClass1::PrintTextToScreen(std::to_string(result));
	MyClass1::HelloWorld();
	//! [MyClass1ExampleSnippet]
}