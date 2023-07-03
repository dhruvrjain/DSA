#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int i,letter_count=0,current_index=0,n=message.length();
    string ans="";
    char current_letter=message[0];
    while(current_index<n){
        if(current_letter==message[current_index]){
            current_index++;
            letter_count++;
        }
        else{
            ans+=current_letter;
            ans+=to_string(letter_count);
            current_letter=message[current_index];
            letter_count=0;
        }
    }
    ans+=current_letter;
    ans+=to_string(letter_count);
    return ans;
}