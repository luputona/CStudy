//#include <iostream>
//using namespace std;
//
//
////Ŭ���� �ڱ� �ڽ��� pointer this 
//class Student
//{
//private:
//	int number;
//	char name[20];
//	int kor;
//	int eng;
//	int mat;
//	//static int stdCnt;
//public:
//	//Student();
//	~Student();
//	Student(int num, char n[20],int k,int e,int m);
//	void showData();
//	//static void showStdCnt();//��������� private �϶��� ���� �Լ��� ���ؼ� ȣ�� 
//
//};
//
//Student::~Student()
//{
//	cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�\n";
//}

//
//int Student::stdCnt = 0; //������� �ʱ�ȭ 
//
//Student::Student( int num, char n[20],int k,int e,int m )
//{
//	number = num;
//	strcpy(name,n);
//	kor = k;
//	eng = e;
//	mat = m;
//
//	stdCnt++;
//
//}
//
//Student::Student()
//{
//	number = 1001;
//	strcpy(name,"��ö��");
//	kor = 100;
//	eng = 90;
//	mat = 95;
//
//}
//
//
//Student::Student( int num, char n[20],int k,int e,int m )
//{
//	number = num;
//	strcpy(name,n);
//	kor = k;
//	eng = e;
//	mat = m;
//}
//
//
//void Student::showData()
//{
//	cout <<"�й� : "<<this->number<<endl;
//	cout <<"�̸� : "<<this->name<<endl;
//	cout <<"���� : "<<this->kor<<endl;
//	cout <<"���� : "<<this->eng<<endl;
//	cout <<"���� : "<<this->mat<<endl;
//
//
//}
//void main()
//{
//	Student *kim;
//	kim = new Student(1001,"��ö��",100,89,60);
//
//	kim->showData();
//	
//	delete kim;
//
//}


//
//void Student::showStdCnt()
//{
//	cout <<"��ü�� ���� : "<<stdCnt<<endl;
//}
//
//
//void main()
//{
//	Student kim(1001,"�躴ȣ",90,70,60);
//	kim.showData();
//	kim.showStdCnt();
//
//	Student park(1002,"�ڸ�ȯ",100,90,95);
//	park.showData();
//	park.showStdCnt();
//
//	Student choi(1003,"�ִ�ǥ",90,95,80);
//	choi.showData();
//	choi.showStdCnt();
//}
//
//

#include <iostream>
using namespace std;

class Position
{
private:
	int x;
	int y;
public:
	Position();
	Position(int a, int b);
	Position &xyModify();	// position Ŭ������ ������ (���۷���)
							//��ȯ�ϴ� �Լ� Position&
	void showData();


};

Position::Position()
{
	x = 0;
}

Position::Position( int a, int b )
{
	x = a;
	y = b;
}

Position & Position::xyModify()
{
	x += 10;
	y += 10;

	return *this;
}


void Position::showData()
{
	cout << "x��ǥ : " <<x<<endl;
	cout <<"y��ǥ : "<<y<<endl;
}

void main()
{
	Position curr(10,20);
	Position temp;

	curr.showData();
	temp = curr.xyModify();

	temp.showData();

}



