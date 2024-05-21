#include <iostream>
#include <tuple>

using namespace std;

tuple<int, float, string> foo()
{
    int a;
    cin >> a;
    return {a, 3.142, "Hello"};
}

int main()
{
    auto [value1, value2, value3] = foo();
    cout << value1 << ", " << value2 << ", " << value3 << endl;
}