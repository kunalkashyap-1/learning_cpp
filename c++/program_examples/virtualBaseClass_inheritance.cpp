#include<bits/stdc++.h>
using namespace std;

//student-->test;student-->sport;test&sport-->result

class Student{
    protected:
    int roll_no;
    public:
    void set_roll_no(int a){
        roll_no=a;
    }
    void print_no(){
        cout<<"your roll no is "<<roll_no<<endl;
    }
};

class Test:virtual public Student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"you have obtained marks in maths "<<maths<<"and physics"<<physics<<endl;
    }
};
class Sports: virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(){
        cout<<"your PT score is "<<score<<endl;
    }
};
class Result: public Test,public Sports{
    private:
    float total;
    public:
    void display(){
        total=maths+physics+score;
        print_no();
        print_marks();
        print_score();
        cout<<"your total score is"<<total<<endl;
    }
};
int main(){
    Result someone;
    someone.set_roll_no(010);
    someone.set_marks(85,91.10);
    someone.set_score(8);
    someone.display();
return (0);
}