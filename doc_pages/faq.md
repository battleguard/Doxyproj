@page faq FAQ
***How do I make doxygen not require the \@brief tag?***  
Enable the property *JAVADOC_AUTOBRIEF* in your Doxyfile

***Sections are not being created properly using markdown \# symbols?***  
Doxygen is better supported to use there custom doxygen \@section and \@subsection keywords
```
# Main Section 

## Sub Section

change to

@section page1S1 Main Section

@subsection page1S1S1 Sub Section 
```

***How do I link to Pages, Sections, SubSections?***

The \@ref and the page,section,or subsection id  
Example link to [Installation Guide Page](@ref installation_guide).  
Example link to section [Layout Section](@ref installation_guidesection1).  
Example link to subsection [CMAKE_PATH_PREFIX Page](@ref installation_guidesubsection2sub1).  

```
Example link to [Installation Guide Page](@ref installation_guide).  
Example link to section [Layout Section](@ref installation_guidesection1).  
Example link to subsection [CMAKE_PATH_PREFIX Page](@ref installation_guidesubsection2sub1).  
```


***How do I link to a function from a markdown file?***  

Its the exact same way as you would in the code as seen here MyClass1::MemberFunction()

```
MyClass1::MemberFunction()
```

***How do I link to a function from a markdown file but change the link name?***  

Its the exact same way as you would in the code as seen here [This Function](@ref MyClass1::MemberFunction())

```
[This Function](@ref MyClass1::MemberFunction())
```

***How do I link to a markdown file from a cpp doxyfile?***  

You use the \@ref keyword just as you would in a these markdown files.

```
	/// This description links to the [Developer Guide](@ref developer_guide)
	class MyClass2 {}
```

***How do I insert a code snippet into a markdown file?***  

***What does the examples section of doxygen do?***

You use the [\\include doxygen command](http://www.doxygen.nl/manual/commands.html#cmdinclude)

Example including main.cpp contents: 
```
\include main.cpp
```

\include main.cpp

```
This example will include just the contents of the main function.
\snippet main.cpp MyClass1ExampleSnippet


note the snippet requires special commands in the main.cpp file
//! [MyClass1ExampleSnippet]
code goes here
//! [MyClass1ExampleSnippet]
```

\snippet main.cpp MyClass1ExampleSnippet

***How do I add an image?***  

Sintax for including an image is "![Alt Text Here](exampleImage.png)"

Note: to do this you will need to set your IMAGE_PATH in doxygen  

![Alt Text Here](exampleImage.png)


@subpage subsystem_faq 