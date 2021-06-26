// C++ Primer Exercise 1.7
// By Blaine McKeever
// 26/06/2021

// Incorrectly nested comments

/* an incorrectly /* */ nested comment */

int main()
{
	return 0;
}

/*
 Compiler output

 1_7.cpp
1_7.cpp(7): warning C4138: '*/' found outside of comment
1_7.cpp(7): error C4430: missing type specifier - int assumed. Note: C++ does not support default-int
1_7.cpp(7): error C2146: syntax error: missing ';' before identifier 'comment'
1_7.cpp(10): error C2143: syntax error: missing ';' before '{'
1_7.cpp(10): error C2447: '{': missing function header (old-style formal list?)

*/