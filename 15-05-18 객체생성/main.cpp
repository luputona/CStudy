#include <iostream>
using namespace std;
//
//class Student
//{
//public:
//	int number;
//	char name[20];
//	int nKor;
//	int nEng;
//	int nMath;
//
//	void ShowData();
//
//};
//
//
//
//void main()
//{
//	Student kim;
//
//	kim.number = 1001;
//	strcpy(kim.name,"��ö��");
//	kim.nKor = 100;
//	kim.nEng = 90;
//	kim.nMath = 95;
//
//	kim.ShowData();
//
//
//}
//
//void Student::ShowData()
//{
//	cout << "�й� : "<<number<<endl;
//	cout <<"�̸� : "<<name<<endl;
//	cout <<"���� : "<<nKor<<endl;
//	cout <<"���� : "<<nEng <<endl;
//	cout <<"���� : "<<nMath<<endl;
//
//}

//#include <iostream>
//using namespace std;
//
//class Student
//{
//private:
//	int number;
//	char name[20];
//	int nKor;
//	int nEng;
//	int nMath;
//public:
//	void init();
//	void ShowData();
//
//};
//
//void main()
//{	
//	Student kim;
//	kim.init();
//	kim.ShowData();
//}
//void Student::init()
//{
//	number = 1001;
//	strcpy(name,"��ö��");
//	nKor = 100;
//	nEng = 90;
//	nMath = 95;
//}
//
//void Student::ShowData()
//{
//	cout << "�й� : "<<number<<endl;
//	cout <<"�̸� : "<<name<<endl;
//	cout <<"���� : "<<nKor<<endl;
//	cout <<"���� : "<<nEng <<endl;
//	cout <<"���� : "<<nMath<<endl;
//}
//

//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	int number;
//	char name[20];
//	int nKor;
//	int nEng;
//	int nMath;
//public:
//	void init();
//	void ShowData();
//
//};
//
//void main()
//{	
//	Student kim = {1001,"��ö��",100,90,05};
//
//	kim.ShowData();
//}
//void Student::init()
//{
//	number = 1001;
//	strcpy(name,"��ö��");
//	nKor = 100;
//	nEng = 90;
//	nMath = 95;
//}
//
//void Student::ShowData()
//{
//	cout << "�й� : "<<number<<endl;
//	cout <<"�̸� : "<<name<<endl;
//	cout <<"���� : "<<nKor<<endl;
//	cout <<"���� : "<<nEng <<endl;
//	cout <<"���� : "<<nMath<<endl;
//}

//
//
//#include <iostream>
//using namespace std;
//
//class Student
//{
//private:
//	int number;
//	char name[20];
//	int nKor;
//	int nEng;
//	int nMath;
//public:
//	Student();//����Ʈ ������
//	void ShowData();
//
//};
//
//void main()
//{	
//	Student kim;
//
//	kim.ShowData();
//}
//Student::Student()
//{
//	number = 1001;
//	strcpy(name,"��ö��");
//	nKor = 100;
//	nEng = 80;
//	nMath = 95;
//	cout <<"������ ȣ�� "<<endl;
//}
////void Student::init()
////{
////	number = 1001;
////	strcpy(name,"��ö��");
////	nKor = 100;
////	nEng = 90;
////	nMath = 95;
////}
//
//void Student::ShowData()
//{
//	cout << "�й� : "<<number<<endl;
//	cout <<"�̸� : "<<name<<endl;
//	cout <<"���� : "<<nKor<<endl;
//	cout <<"���� : "<<nEng <<endl;
//	cout <<"���� : "<<nMath<<endl;
//}
//



#include <iostream>
using namespace std;

class Student
{
private:
	int number;
	char name[20];
	int nKor;
	int nEng;
	int nMath;
public:
	Student();
	Student(int num,char n[20],int k = 100 , int e =100 ,int m = 100 ); 
	void ShowData();

};

void main()
{	
	Student kim;
	Student park(1002,"�ڸ�ȯ",100,85,90);
	Student choi(1003,"�ִ�ǥ",90);

	kim.ShowData();
	park.ShowData();
	choi.ShowData();
}
Student::Student(int num,char n[20],int k, int e ,int m )
{	
	number = num;
	strcpy(name,n);
	nKor = k;
	nEng = e;
	nMath = m;	
}
Student::Student()
{
	number = 1001;
	strcpy(name,"��ö��");
	nKor = 100;
	nEng = 80;
	nMath = 95;
	cout <<"������ ȣ�� "<<endl;
}
	
//void Student::init()
//{
//	number = 1001;
//	strcpy(name,"��ö��");
//	nKor = 100;
//	nEng = 90;
//	nMath = 95;
//}

void Student::ShowData()
{
	cout<<endl;
	cout << "�й� : "<<number<<endl;
	cout <<"�̸� : "<<name<<endl;
	cout <<"���� : "<<nKor<<endl;
	cout <<"���� : "<<nEng <<endl;
	cout <<"���� : "<<nMath<<endl;
}

