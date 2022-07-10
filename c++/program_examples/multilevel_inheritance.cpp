#include<bits/stdc++.h>
using namespace std;

class Student{
    protected:
    int roll_no;
    private:
    public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Student::set_roll_no(int r){
    roll_no=r;
}

void Student::get_roll_no(){
    cout<<"the roll number is "<<roll_no<<endl;
}

class Exam:public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float m2){
    maths=m1;
    physics=m2;
}
void Exam::get_marks(){
    cout<<"the marks obtained in maths are "<<maths<<endl;
    cout<<"the marks obtained in physics are "<<physics<<endl;
}

class Result:public Exam{
    float percentage;
    public:
    void display(){
        get_roll_no();
        get_marks();
        cout<<"your percentage is "<<(maths+physics)/2<<endl;
    }
};

int main(){
    /*if we are inheriting class b from a and c from b 
    1.a is the base class for b and b is the base class for c
    2.a-->b-->c is called inheritance path 
     */
    Result h1;
    h1.set_roll_no(69);
    h1.set_marks(95.4,94);
    h1.display();
return (0);
}