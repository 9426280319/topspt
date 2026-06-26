#include <iostream>
using namespace std;

class maths {
public:
    int a, b;

    maths(int a = 0, int b = 0) {
        this->a = a;
        this->b = b;
    }

    
    maths operator +(maths &m2) {
        maths m3;
        m3.a = a + m2.a;
        m3.b = b + m2.b;
        return m3;
    }

    void display() {
        cout << "\na = " << a << "\tb = " << b;
    }
};

int main() {
    maths m1(2, 3);
    m1.display();

    maths m2(4, 5);
    m2.display();

    maths m3 = m1 + m2;
    m3.display();

}

