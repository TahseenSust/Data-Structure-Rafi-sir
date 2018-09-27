#include<bits/stdc++.h>
using namespace std;

void Insert(string *str,char ch,int pos)
{
    char tmp;
    for(int i=0;i<=(*str).size();i++){
        if(i==pos){
            tmp=(*str)[i];
            (*str)[i]=ch;
        }else if(i>pos){
            ch=(*str)[i];
            (*str)[i]=tmp;
            tmp=ch;
        }
    }
}

void Delete(string *str,int pos)
{
    for(int i=0;i<(*str).size();i++){
        if(i>pos){
            (*str)[i-1]=(*str)[i];
        }
    }
}

void Replace(string *str,char ch,int pos)
{
    for(int i=0;i<=(*str).size();i++){
        if(i==pos){
            (*str)[i]=ch;
            return;
        }
    }
}

int main()
{
    string str="deptofswe";
    Insert(&str,'.',3);
    cout<<str<<endl;
    Delete(&str,3);
    cout<<str<<endl;
    Replace(&str,'c',0);
    cout<<str<<endl;

}
