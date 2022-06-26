#include<bits/stdc++.h>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display()=0;//do nothing function -->pure virtual function
};

class CWHVideos:public CWH{
    protected:
    float videolength;
    public:
    CWHVideos(string s,float r,float vl):CWH(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"this is and video of "<<title<<endl;
        cout<<"this video has ratings "<<rating<<"out of 5 stars"<<endl;
        cout<<"legth of this video is "<<videolength<<endl;
    }
};

class CWHtext:public CWH{
    protected:
    int words;
    public:
    CWHtext(string s,float r,float wc):CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"this is a text tutorial with title "<<title<<endl;
        cout<<"rating of this text tutorial: "<<rating<<"out of 5 stars"<<endl;
        cout<<"no of words in this text tutorial is: "<<words<<endl;
    }
};

int main(){
    string title;
    float rating,vlen;
    int words;

    //for video section
    title="something tutorial";
    vlen=4.56;
    rating=4.89;
    CWHVideos something(title,rating,vlen);
    //something.display();

    //for text section
    title="something text ";
    words=562;
    rating=4.18;
    CWHtext somethingText(title,rating,words);
    //somethingText.display();

    CWH*tut[2];
    tut[0]=&something;
    tut[1]=&somethingText;
    tut[0]->display();
    tut[1]->display();
return (0);
}

/*rules for virtual functions
1.they cannot be static
2.they are accessed by object pointer
3.vitual function can be a friend of another class
4.a virtual function in base class might not be used 
5.if a virtual function defined in the base class it is not necessary to redefine in the derived class
*/