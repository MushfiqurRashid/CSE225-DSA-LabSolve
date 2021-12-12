#include<iostream>
#include"studentinfo.h"
#include"unsortedType.h"
#include"unsortedType.cpp"
#include<string.h>
#include<string>

using namespace std;

StudentInfo :: StudentInfo(){
    id = 0;
    name = "\0";
    cgpa =0;
}
StudentInfo:: StudentInfo(int id, string name, double cgpa){
    this->id = id;
    this-> name = name;
    this-> cgpa = cgpa;
}
StudentInfo :: StudentInfo(int id){
    this->id = id;
}
bool StudentInfo:: operator==(StudentInfo s){
    if(this->id == s.id){
        return true;
    }
    else
        return false;

}
bool StudentInfo:: operator != (StudentInfo s){
    if(this->id != s.id)
        return true;
    else
        return false;

}
ostream& operator << (ostream& os, StudentInfo& student){
    os<< student.id <<"," << student.name<< ","<< student.cgpa<<endl;
    return os;
}

