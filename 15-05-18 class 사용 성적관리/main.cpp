#include <iostream>
using namespace std;

class Student
{
private:
	char name[20];
	int kor;
	int eng;
	int math;
	int nTotal;
	float fAvg;
public:
	Student();
	~Student();
	void Init();
	void Input(char name[20],int kor,int eng,int math);
	void Output(int size);
};

void main()
{
	Student cStudent;
	int nSize = 0;

	for (int i = 0; i < nSize; i++ )
	{

	}

}

Student::Student()
{
	kor = 0;
	eng = 0;
	math = 0;
	nTotal = 0;
	fAvg = 0;
}

Student::~Student()
{

}



void Student::Input(char name[20],int kor,int eng,int math )
{
	cout <<"이름 입력 : "<<name<<endl;
	cout <<"국어 점수 : "<<kor<<endl;
	cout <<"영어 점수 : "<<eng<<endl;
	cout <<"수학 점수 : "<<math<<endl;

	nTotal = kor+eng +math;
	fAvg = (float)nTotal/3;	
}


void Student::Output(int size)
{
	for (int i = 0; i<size; i++)
	{
		cout <<"이름	국어	영어	수학	총점	평균"<<endl;
		cout <<name<<"	"<<kor<<"	"<<eng<<"	"<<math<<"	"<<nTotal<<"	"<<fAvg<<endl;
	}
	
}



