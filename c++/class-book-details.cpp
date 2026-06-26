#include<iostream>
using namespace std;

class book {
    public:
        int bid;
        string bookname;
        string author;
        float price;

        void getbookdata() {
            cout << "\nEnter book id: ";
            cin >> bid;
            cout << "Enter book name: ";
            cin >> bookname;
            cout << "Enter author name: ";
            cin >> author;
            cout << "Enter price: ";
            cin >> price;
        }

        void showbookdata() {
            cout << "\nBook ID = " << bid;
            cout << "\t Book Name = " << bookname;
            cout << "\t Author = " << author;
            cout << "\t Price = " << price;
        }
};

main() {
    book b[3];
    int i;

    for(i=0; i<3; i++) {
        cout << "\n\nEnter details for Book " << i+1 << ":";
        b[i].getbookdata();
    }

    cout << "\n\n--- Book Details ---";
    for(i=0; i<3; i++) {
        cout << "\n\nBook " << i+1 << ":";
        b[i].showbookdata();
    }
}

