#include"std_lib_facilities.h"

int main()
{
	cout << "Please enter expression (we can handle + and -) : ";
	int lval = 0;
	int rval = 0;
	char op = '+';
	int res = 0;
	cin >> lval >> op >> rval; // read something like 1 + 3
	if (op == '+')
		res = lval + rval; // addition
	else if (op == '-')
		res = lval - rval; // subtraction
	
	cout << "Result: " << res << '\n';
	keep_window_open();
	return 0;
}