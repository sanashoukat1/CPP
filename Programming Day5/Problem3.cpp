#include<iostream>
using namespace std;
int main()
{
    string name;
    int s1,s2,s3,s4,s5,marks;
    float per;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter marks of English: ";
    cin>>s1;
    cout<<"Enter marks of Maths: ";
    cin>>s2;
    cout<<"Enter marks of Chemistry: ";
    cin>>s3;
    cout<<"Enter marks of Social Science: ";
    cin>>s4;
    cout<<"Enter marks of Biology: ";
    cin>>s5;
    marks=s1+s2+s3+s4+s5;
    cout<<"Total marks= "<<marks<<endl;
    per=(marks/500.0)*100;
    if(per>=90 || per==100)
    cout<<"Your grade is A+";
    else if(per>=80 || per<90)
    cout<<"Your grade is A";
    else if(per>=70 || per<80)
    cout<<"Your grade is B+";
    else if(per>=60 || per<70)
    cout<<"Your grade is B";
    else if(per>=50 || per<60)
    cout<<"Your grade is C"; 
    else if(per>=40 || per<50)
    cout<<"Your grade is D"; 
    else if(per<40)
    cout<<"Your grade is F";
    return 0;
}