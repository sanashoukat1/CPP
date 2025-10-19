#include<iostream>
using namespace std;
int main()
{
    int n,i,number,count1,count2,count3,count4,count5;
    float p1,p2,p3,p4,p5;
    count1=0;
    count2=0;
    count3=0;
    count4=0;
    count5=0;
    cout<<"How many numbers you want to enter:";
    cin>>n;
    cout<<"Enter all numbers seperated by a space or a new line:"<<endl;
    for(i=1;i<=n;i++){
        cin>>number;
    if(number<200)
        count1++;
    else if(number >= 200 && number < 400)
        count2++;
    else if(number >= 400 && number < 600)
        count3++;
    else if(number >= 600 && number < 800)
        count4++;
    else if(number >= 800 && number < 1000)
        count5++;
    }
    p1=count1*100.0/n;
    cout<<p1<<" % "<<endl;
    p2=count2*100.0/n;
    cout<<p2<<" % "<<endl;
    p3=count3*100.0/n;
    cout<<p3<<" % "<<endl;
    p4=count4*100.0/n;
    cout<<p4<<" % "<<endl;
    p5=count5*100.0/n;
    cout<<p5<<" % "<<endl;
    return 0;
}