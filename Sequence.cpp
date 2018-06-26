#include"Sequence.h"
#include<string>
#include<fstream>
#include<iostream>
using namespace std;

Sequence::Sequence(string filename)
{
    string text;
    ifstream file(filename.c_str(),ios::in);
    if(!file)
       cout<<"Fail to open!"<<endl;
    while(getline(file,text))
       s+=text;
}

Sequence::~Sequence(){}

int Sequence::length()
{
    int length=s.length();
    return length;
}

int Sequence::numberOf(char base)
{
    int counter1=0;
    int counter2=0;
    int counter3=0;
    int counter4=0;

    for(int i=0;i<s.length();++i)  
    {
     n=s[i];

     switch(n)
     {
      case 'A':
        ++counter1;
        break;
      case 'T':
        ++counter2;
        break;
      case 'C':
        ++counter3;
        break;
      case 'G':
        ++counter4;
        break;

      default:
        break;
     }
    }
   
    switch(base)
    {
      case 'A' :
         return counter1;
         break;
      case 'T' :
         return counter2;
         break;
      case 'C' :
         return counter3;
         break;
      case 'G' :
         return counter4;
         break;
      
      default:
         cout<<"No such dna!"<<endl;
         break;
    }
}

string Sequence::longestConsecutive()
{
    char d=s[0];
    int pf=0;//当前位置
    int pb=0;//上次位置
    int c1=1;//计数器1
    int c2=1;//计数器2
    for(int j=1;j<s.length();++j)
    {
     if(d==s[j])
     {
      ++c1;
     }
     else
     {
      if(c1>c2)
      {
       c2=c1;
       pb=pf;
      }
      c1=1;
      
     }
     d=s[j];
     pf=j;
    }
    if(c1>c2)
    {
     c2=c1;
     pb=pf;
    }
    return s.substr(pb-c2+1,c2);
}

string Sequence::longestRepeated()
{

}
