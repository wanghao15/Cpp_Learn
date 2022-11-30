//
// Created by wh on 22-11-30.
//
#include <fstream>

void test01()
{
    std::ofstream ofs;
    ofs.open("test.txt",std::ios::out);

    ofs<<"1"<<std::endl;
    ofs<<"2"<<std::endl;
    ofs<<"3"<<std::endl;

    ofs.close();

}

