#include <bits/stdc++.h>
using namespace std;

class student
{
    int id;
	char name[20];
	public: 

	void getstu(){
		cout << "Enter stuid, name \t";
		cin >> id >> name;
	}
};

class marks : public student
{
    protected: 
	int m, p, c;
	public:
	void getmarks(){
		cout << "Enter 3 subject marks:";
		cin >> m >> p >> c;
	}
};
class sports
{
    protected:
	int spmarks;
	public:
	void getsports(){
		cout << "Enter sports marks:";
		cin >> spmarks;
	}
};
class result : public marks, public sports
{
    int total;
	float avg;
	public :
	void show(){
		total=m+p+c;
		avg=total/3.0;
		cout << "Total=" << total << endl;
		cout << "Average=" << avg << endl;
		cout << "Average + Sports marks =" << avg+spmarks;
	}
};

int main()
{
    result r;
	r.getstu();
	r.getmarks();
	r.getsports();
	r.show();
    return 0;
}