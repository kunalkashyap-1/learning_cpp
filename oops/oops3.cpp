#include <iostream>

using namespace std;
class multiply
{

int arr[3][3];
int arr1[3][3];
int arr3[3][3];

int a = 0;

public:

void get()
{
cout << "first matrix" << endl;

for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)

{

cout << "enter the element for row" << i + 1 << " and column " << j + 1 << ":";

cin >> arr[i][j];
}
}

cout << "second matrix" << endl;
for (int i = 0; i < 3; i++)
{

for (int j = 0; j < 3; j++)
{

cout << "enter the element for row" << i + 1 << " and column " << j + 1 << ":";

cin >> arr1[i][j];
}

}
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 3; j++)
{

for (int k = 0; k < 3; k++)
{
a += arr[i][k] * arr1[k][j];

}
arr3[i][j] = a;
a = 0;

}
}
}

void dis()
{

cout << "multiplication of first and second matrices is :" << endl;

for (int j = 0; j < 3; j++)
{
for (int i = 0; i < 3; i++)

{
cout << arr3[j][i] << " ";
}

cout << endl;
}
}

};
int main()
{

multiply matrix;
matrix.get();
matrix.dis();

return 0;
}
