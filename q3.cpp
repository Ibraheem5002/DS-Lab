#include <iostream>
#include <cstring>
using namespace std;

class Box
{
private:    
    int *len, *wid;
public:
    Box(int l, int w)
    {
        len = new int;
        wid = new int;

        *len = l;
        *wid = w;
    }

    ~Box()
    {
        delete len;
        delete wid;

        cout << "Destructor has ran" << endl;
    }

    Box(const Box &obj)
    {
        len = new int (*(obj.len));
        wid = new int (*(obj.wid));
    }

    Box& operator = (const Box &obj)
    {
        this->len = obj.len;
        this->wid = obj.wid;

        return *this;
    }

    void display()
    {
        cout << "Length: " << *len << ", Width: " << *wid << endl;
    }
};

int main()
{
    cout << "b1" << endl;
    Box b1(10, 20);
    b1.display();

    cout << "b2" << endl;
    Box b2(b1);
    b2.display();

    cout << "b3" << endl;
    Box b3 = b1;
    b3.display();
}