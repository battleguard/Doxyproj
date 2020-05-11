#pragma once

#include <iostream>

/// This is the brief description of this class. 
///
/// This is the detailed description. More stuff here
/// # Markdown is supported directly in comment blocks also
/// * This will create a list
/// * As you can see here
///
/// This will be **bolded**
/// ### You can even add code blocks!
/// ```cpp
///		MyClass1 myClass;
///		auto result = myClass.Add(10,20);
///		MyClass1::HelloWorld();
/// ```
class MyClass1
{
public:

	/// Basic Member Function
	///
	/// This member function does nothing and is used for demonstration purposes
	/// This will link to MyClass1 this will link to Add()
	/// Overloads can both be linked to also TestLinking() and TestLinking(int)
	/// You can link to other class with class name then method MyClass2::HelloClass2()
	void MemberFunction();

	void TestLinking() {}
	void TestLinking(int x) {}
	
	
	/// Adds 2 numbers together
	/// @param x first number to add
	/// @param y second number to add
	/// @return result of the add
	int Add(int x, int y);

	/// Prints \"HelloWorld\" to the standard console window
	/// @see PrintTextToScreen()
	/// @note A little side note
	/// @attention This is a big deal!
	/// @warning This must be cleaned up at the end of you run!
	static void HelloWorld() { PrintTextToScreen("HelloWorld"); }

	
	/// Prints text to the console using std::cout
	/// @param text The text to print
	static void PrintTextToScreen(const std::string& text)
	{
		std::cout << text << std::endl;
	}
};

