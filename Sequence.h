#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<cstdlib>
#include<string>
#include<cstring>
#include<fstream>
#include<iostream>
using namespace std;

class Sequence
{
public:
    Sequence(string);
    ~Sequence();
    int length();
    int numberOf(char);
    string longestConsecutive();
    string longestRepeated();
private:
    string s;
    char n;
};

#endif
