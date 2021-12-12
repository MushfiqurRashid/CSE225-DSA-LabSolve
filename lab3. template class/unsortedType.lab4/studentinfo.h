#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
using namespace std;
class StudentInfo{
private:
    int id;
    string name;
    double cgpa;

public:
    StudentInfo();
    StudentInfo(int, string, double);
    StudentInfo(int);
    bool operator == (StudentInfo);
    bool operator !=(StudentInfo);
    friend ostream& operator<< (ostream&, StudentInfo&);
};

#endif // STUDENTINFO_H_INCLUDED
