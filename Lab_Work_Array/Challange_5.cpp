#include<iostream>
using namespace std;
int main()
{
    string word;
    char ch;
    int count=0;
    cout<<"Enter a word: ";
    cin>>word;
    for(int i=0;i<word.length();i++)
      {
        ch=tolower(word[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            count++;
      }
    cout<<"Total vowels in the word are: "<<count;
}