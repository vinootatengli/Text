#include <iostream>
using namespace std;

class Addition
{
    int a, b, sum;

public:
    void getdata()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void display()
    {
        sum = a + b;
        cout << "Sum = " << sum;
    }
};

int main()
{
    Addition obj;

    obj.getdata();
    obj.display();

    return 0;
}