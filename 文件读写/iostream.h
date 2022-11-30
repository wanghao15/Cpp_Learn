//
// Created by wh on 22-11-30.
//
#include <fstream>
#include <string>
#include <iostream>
using namespace std;



void test02()
{
    ifstream ifs;
    ifs.open("../build/test.txt",ios::in);


    if (!ifs.is_open())
    {
        cout<<"fail"<<endl;
    }
    cout<<"方式一结果"<<endl;
    char buf1[100] = {0};
    while (ifs>>buf1)
    {
        cout<<buf1<<endl;
    }
}
void test03()
{
    ifstream ifs;
    ifs.open("../build/test.txt",ios::in);
    string buf3;
    while (getline(ifs,buf3))
    {
        cout<<buf3<<endl;
    }
}
