#include <iostream>
using namespace std;

class OverloadExample {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded function to concatenate two strings
    string add(string s1, string s2) {
        return s1 + s2;
    }
};

int main() {
    OverloadExample obj;

    // Calling the add function with two integers
    cout << "Sum of 3 and 5 is: " << obj.add(3, 5) << endl;

    // Calling the add function with three integers
    cout << "Sum of 3, 5, and 7 is: " << obj.add(3, 5, 7) << endl;

    // Calling the add function with two strings
    cout << "Concatenated string is: " << obj.add("Hello", " World") << endl;

    return 0;
}
/*Sum of 3 and 5 is: 8
Sum of 3, 5, and 7 is: 15
Concatenated string is: Hello World
*/
