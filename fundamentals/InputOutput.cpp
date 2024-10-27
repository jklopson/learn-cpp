//user input and output for values in c++ program
#include <iostream>
using namespace std;

int main(){
    int a, b;
    string x;
    cin >> a >> b >> x;
    cout << a << " " << b << " " << x << endl;
}
//cin stream takes inputs from user, all values must be separated by at least
//one space.

//cout in this case will print all of the variable values that the user
//gives it, assuming that they are the correct datatype.

// cin, cout : "character in, character out"

// "\n" will create a new line, as will endl
// "\n" works faster because endl always causes a flush operation

//we can also use scanf, printf as such:

//int a, b;
//scanf("%d %d", a, b);
//printf("%d %d\n", a, b);

//this will have the same effect as cin, cout, but is more efficient
