//standard template library
#include<iostream>
#include<vector>

using namespace std;
template <class t>

void display(vector<t> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    /*methods:-
    push_back()
    pop_back()
    size()*/
    int element,size;
    cout<<"enter the size of the vector: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element in the vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);

    return (0);
}