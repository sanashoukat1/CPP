#include<iostream>
using namespace std;
int main()
{
    string word;
    cout<< "Enter a word: ";
    cin>>word;
    for(int i=0;i<word.length();i++) 
    {
        if(word[i]>='a' && word[i]<= 'z') 
        {
            if(word[i] == 'z')
            word[i]= 'a';
            else
            word[i]= word[i]+1;
        }
        else if(word[i]>= 'A' && word[i]<= 'Z') 
        {
            if (word[i]== 'Z')
            word[i]= 'A'; 
            else
            word[i]= word[i]+ 1;
        }
    }
    cout << "Output: " <<word<< endl;
    return 0;
}
