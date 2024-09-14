#include<bits/stdc++.h>

using namespace std;

class TwitterProfile {
public:
    string name;
    int age;

    // Constructors
    TwitterProfile() {
        name = "";
        age = 0;
    }

    TwitterProfile(int x) {
        age = x;
    }

    TwitterProfile(string y) {
        name = y;
    }

    TwitterProfile(string x, int y) {
        name = x;
        age = y;
        cout << "Constructor created" << endl;
    }

    // Destructor
    ~TwitterProfile() {
        cout << name << " " << age << " Closed " << endl;
    }
};

int main() {
    TwitterProfile t1("Asif", 25);
    TwitterProfile t2(55);
    TwitterProfile t3("shakil");
    TwitterProfile t4;

    return 0;
}
/*Constructor created
 0 Closed
shakil 1906925552 Closed
 55 Closed
Asif 25 Closed
*/
