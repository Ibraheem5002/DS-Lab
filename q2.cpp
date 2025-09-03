#include <iostream>
#include <cstring>
using namespace std;

class Exam
{
private:
    string*stdName, *Data;
    float *score;
public:
    Exam()
    {
        stdName = new string;
        Data = new string;
        score = new float;
    }

    Exam(string N, string D, float S)
    {
        stdName = new string(N);
        Data = new string(D);
        score = new float(S);
        
    }

    Exam(const Exam &obj)
    {
        stdName = new string;
        Data = new string;
        score = new float;

        this->stdName = obj.stdName;
        this->Data = obj.Data;
        this->score = obj.score;
    }

    ~Exam()
    {
        delete stdName;
        delete Data;
        delete score;

        cout << "Destructor has ran" << endl;
    }

    void display()
    {
        cout << "Name: " << *stdName << endl;
        cout << "Date: " << *Data << endl;
        cout << "Score: " << *score << endl;
    }
};

int main()
{
    Exam exam1("Alice", "2025-09-03", 92.5);
    exam1.display();

    Exam exam2(exam1);
    exam2.display();
}