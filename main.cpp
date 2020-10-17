#include"std_lib_facilities.h"

int main()
{
	cout << "Please enter expression (we can handle +, -, *, and /) : ";
	int lval = 0;
	int rval = 0;
	char op = '+';
	int res = 0;
	cin >> lval; // read leftmost operand
	if (!cin) error("no first operand");
	
	while (cin >> op) { // read operator and right-hand operand repeatedly 
		cin >> rval;
		if (!cin) error("no second operand");
		switch (op) {
		case '+':
			lval += rval; // add: lval = lval + rval
			break;
		case '-':
			lval -= rval; // subtract: lval = lval - rval
			break;
		case '*':
			lval *= rval; // multiply: lval = lval * rval
			break;
		case '/':
			lval /= rval; // divide: lval = lval / rval
			break;
		default:
			cout << "Result: " << lval << '\n'; // not another operator: print result
			keep_window_open();
			return 0;
		}
	}	
	error("bad operation");
}