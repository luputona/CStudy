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
//	strcpy(kim.name,"김철수");
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
//	cout << "학번 : "<<number<<endl;
//	cout <<"이름 : "<<name<<endl;
//	cout <<"국어 : "<<nKor<<endl;
//	cout <<"영어 : "<<nEng <<endl;
//	cout <<"수학 : "<<nMath<<endl;
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
//	strcpy(name,"김철수");
//	nKor = 100;
//	nEng = 90;
//	nMath = 95;
//}
//
//void Student::ShowData()
//{
//	cout << "학번 : "<<number<<endl;
//	cout <<"이름 : "<<name<<endl;
//	cout <<"국어 : "<<nKor<<endl;
//	cout <<"영어 : "<<nEng <<endl;
//	cout <<"수학 : "<<nMath<<endl;
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
//	Student kim = {1001,"김철수",100,90,05};
//
//	kim.ShowData();
//}
//void Student::init()
//{
//	number = 1001;
//	strcpy(name,"김철수");
//	nKor = 100;
//	nEng = 90;
//	nMath = 95;
//}
//
//void Student::ShowData()
//{
//	cout << "학번 : "<<number<<endl;
//	cout <<"이름 : "<<name<<endl;
//	cout <<"국어 : "<<nKor<<endl;
//	cout <<"영어 : "<<nEng <<endl;
//	cout <<"수학 : "<<nMath<<endl;
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
//	Student();//디폴트 생성자
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
//	strcpy(name,"김철수");
//	nKor = 100;
//	nEng = 80;
//	nMath = 95;
//	cout <<"생성자 호출 "<<endl;
//}
////void Student::init()
////{
////	number = 1001;
////	strcpy(name,"김철수");
////	nKor = 100;
////	nEng = 90;
////	nMath = 95;
////}
//
//void Student::ShowData()
//{
//	cout << "학번 : "<<number<<endl;
//	cout <<"이름 : "<<name<<endl;
//	cout <<"국어 : "<<nKor<<endl;
//	cout <<"영어 : "<<nEng <<endl;
//	cout <<"수학 : "<<nMath<<endl;
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
	Student park(1002,"박명환",100,85,90);
	Student choi(1003,"최대표",90);

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
	strcpy(name,"김철수");
	nKor = 100;
	nEng = 80;
	nMath = 95;
	cout <<"생성자 호출 "<<endl;
}
	
//void Student::init()
//{
//	number = 1001;
//	strcpy(name,"김철수");
//	nKor = 100;
//	nEng = 90;
//	nMath = 95;
//}

void Student::ShowData()
{
	cout<<endl;
	cout << "학번 : "<<number<<endl;
	cout <<"이름 : "<<name<<endl;
	cout <<"국어 : "<<nKor<<endl;
	cout <<"영어 : "<<nEng <<endl;
	cout <<"수학 : "<<nMath<<endl;
}

