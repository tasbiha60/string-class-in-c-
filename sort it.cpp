#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;

    };
    bool cmp(student l,student r){
       if(l.eng_marks>r.eng_marks){
        return true;
       }
       else if(l.eng_marks == r.eng_marks && l.math_marks>r.math_marks){
        return true;
       }
       else if(l.eng_marks == r.eng_marks && l.math_marks == r.math_marks && l.id<r.id){
        return true;
       }
       else{
        return false;
       }
    }
    int main(){
        int n;
        cin>>n;
        student a[n];
        for(int i=0;i<n;i++){


             cin>>a[i].nm >>a[i].cls>> a[i].s>> a[i].id>>a[i].math_marks>>a[i].eng_marks;
        }
     sort(a,a+n,cmp);
        for(int i=0;i<n;i++){


            cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<"\n";

        }
        return 0;
}
