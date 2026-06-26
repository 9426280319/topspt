#include<iostream>
using namespace std;

template <typename T>
class test {
    T a[5], temp;
public:
    test() {
        for(int i = 0; i < 5; i++) {
            cout << "\nEnter element at index " << i << ": ";
            cin >> a[i];
        }
    }

    void sortArray() {
        for(int i = 0; i < 5; i++) {
            for(int j = 1; j < 5; j++) {
                if(a[j-1] > a[j]) {
                    temp = a[j-1];
                    a[j-1] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    void display() {
        for(int i = 0; i < 5; i++) {
            cout << "\n" << i << " = " << a[i];
        }
    }
};

int main() {
    test<int> t1;
    t1.sortArray();
    t1.display();

    test<char> t2;
    t2.sortArray();
    t2.display();

    return 0;
}

