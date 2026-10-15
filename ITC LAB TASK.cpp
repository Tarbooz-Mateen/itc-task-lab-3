// Task 01 – Welcome Banner (Hello World and cout)


// Name : Abdul Mateen
// roll no  : L1f26bscs0274
/*
#include <iostream>
using namespace std;
int main()
{
	// Printing hello world
	cout << "Hello world" << endl;

	// print university welcome banner
	cout << "University of Central Punjab\nFaculty of Information Technology\nOrientation Day 2026\n";

	// print welcome banner
	cout << "welcome" << endl;

	// print number
	cout << 2026 << endl;
	cout << 45 << endl;
	cout << 45 * 3 << endl;
	cout << 1000 + 500 - 250 << endl;

	// calculate
	cout << "Total fee:" << 45000 + 9000 << endl;

	return 0;
}
*/



//Task 02 – Debug the Code (Syntax Errors vs. Semantics)


/*
#include <iostream>
//name space missing
using namespace std;

int main()
{
	cout<< "Orientation Day" << endl;
	// " missing at end
		cout << "Total students"<< 450<<endl;
		// an additional :
	cout << "Seats left" << 500 - 450 << endl;
	//no "" and extra , at start
	cout << "Have a nice day"<< endl;
	cout << "Average: " << (60 + 70 + 80) / 3 << endl;
		return 0;
}
*/



//Task 03 – Expression Quiz (Precedence and Associativity)


/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Expression 1:" << 10 + 5 << endl; //output 20
	cout << "Expression 2:" << (10 + 5) * 2 << endl;// output 30
	cout << "Expression 3:" << 20 - 5 - 3 << endl;// output 12
	cout << "Expression 4:" << 100 / 7 << endl; // output 14
	cout << "Expression 5:" << 100 % 7 << endl;//output 2
	cout << "Expression 6:" << 2 * 3 + 8 / 4 - 1 << endl; // output7
	return 0;
}
*/



//Task 04 – Admission Form (Variables and Types)



/*
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize variables
    int rollNo = 1045;
    int semester = 1;
    char section = 'B';
    float cgpa = 3.5;
    int totalFee = 45000;
    int feePaid = 20000;

    // Display student information
    cout << "Roll No: " << rollNo << endl;
    cout << "Semester: " << semester << endl;
    cout << "Section: " << section << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Total Fee: " << totalFee << endl;
    cout << "Fee Paid: " << feePaid << endl;

    // Move to the next semester and add the second installment
    semester = semester + 1;
    feePaid = feePaid + 5000;

    cout << "Semester: " << semester << endl;
    cout << "Fee Paid: " << feePaid << endl;

    // Calculate remaining fee and percentage paid
    int remainingFee = totalFee - feePaid;
    float percentagePaid = feePaid * 100.0 / totalFee;

    cout << "Remaining Fee: " << remainingFee << endl;
    cout << "Percentage Paid: " << percentagePaid << endl;

    // Observation:
    // Declaring int x without initialization gives an indeterminate value
    // for a local variable. It is not safe to rely on that value.

    return 0;
}
*/



//Task 05 – Fee Calculator (cin and White Space)


/*
#include <iostream>
using namespace std;

int main() {
    int age, creditHours, feePerCreditHour;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter credit hours: ";
    cin >> creditHours;

    cout << "Enter fee per credit hour: ";
    cin >> feePerCreditHour;

    int totalFee = creditHours * feePerCreditHour;
    cout << "Total Fee: " << totalFee << endl;
    cout << "Fee after discount: " << totalFee - 2000 << endl;

    cout << "Year of birth: " << 2026 - age << endl;
    cout << "Year you will turn 25: " << 2026 + (25 - age) << endl;

    // Spaces, new lines and tabs work the same with cin.
    // If age is 19.8, age stores 19 and the next input may fail
    // because .8 remains in the input stream.

    return 0;
}
*/





//Task 06 – Bookshop Bill (Flowchart to Program)


/*
#include <iostream>
using namespace std;

int main() {
    int price, quantity, total, tax, grandTotal;

    cout << "Enter price: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    total = price * quantity;
    tax = total * 5 / 100;
    grandTotal = total + tax;

    cout << "Total: " << total << endl;
    cout << "Tax: " << tax << endl;
    cout << "Grand Total: " << grandTotal << endl;

    // int removes the decimal part of the tax calculation. int can only store digits / whole number


    return 0;
}
*/


