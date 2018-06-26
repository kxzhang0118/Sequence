#include"Sequence.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{  
    cout<<"Sum: ";
    string a="dna.txt";
    Sequence dna(a);
    cout<<dna.length()<<endl;
    cout<<"A: "<<dna.numberOf('A')<<endl;
    cout<<"T: "<<dna.numberOf('T')<<endl;
    cout<<"C: "<<dna.numberOf('C')<<endl;
    cout<<"G: "<<dna.numberOf('G')<<endl;
    cout<<dna.longestConsecutive()<<endl;
    cout<<dna.longestRepeated()<<endl;

    return 0;
}
