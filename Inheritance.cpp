#include <iostream>
#include <string>
using namespace std;

class publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata() {
        cout << "\nTitle: " << title;
        cout << "\nPrice: $" << price << endl;
    }
};

class book : public publication {
private:
    int pages;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void putdata() {
        publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class tape : public publication {
private:
    float playtime;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playtime;
    }

    void putdata() {
        publication::putdata();
        cout << "Playing time: " << playtime << " minutes" << endl;
    }
};

int main() {
    book b1;
    tape t1;

    cout << "Enter data for a book:\n";
    b1.getdata();

    cout << "\nEnter data for a tape:\n";
    t1.getdata();

    cout << "\n--- Book Data ---";
    b1.putdata();

    cout << "\n--- Tape Data ---";
    t1.putdata();

    return 0;
}
