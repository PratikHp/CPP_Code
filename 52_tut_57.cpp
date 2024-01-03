#include<iostream>
#include<cstring>
using namespace std;

class PGH{
    protected:
        string title;
         float rating;
    public:
         PGH(string s,float r){
            title = s;
            rating = r;
         }
        virtual void display(){}
};

class PGHVideo : public PGH{
    int VideoLength;
    public:
       PGHVideo(string s,float r, int vl): PGH(s,r){
        VideoLength = vl;
       }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<"out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<VideoLength<<"Minutes"<<endl;
       }
       
};
class PGHText : public PGH{
    int words;
    public:
       PGHText(string s,float r, int wc): PGH(s,r){
        words = wc; 
       }
       void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<"  out of 5 stars "<<endl;
            cout<<"No. of word int this tutorial is: "<<words<<" words"<<endl;

       }
};
int main(){
    string title;
    float rating, vlen;
    int words;
    
    //For PGH video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    PGHVideo djVideo(title,rating,vlen);
    //djVideo.display();

    //For PGH text
    title = "Django tutorial text";
    words = 433;
    rating = 4.10;
    PGHText djText(title,rating,words);
    //djText.display();

    PGH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;
    
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

//Rules for virtual functions 
//1.They cannot be static
//2.they are accessed by object pointers
//3.Virtual functions can be a friend of another class
//4.A virtual function in base class might not be used,
//5.if virtual function is defined in a base class, there is no necessity of redefining it in the derived class