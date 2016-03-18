#include <iostream>
using namespace std;

class StringArray
{
public:
	StringArray(const char *cStr)
	{
		str = new char[strlen(cStr)+1];
		strcpy(str,cStr);
	}
	StringArray(const StringArray &ref)  /*깊은 복사로 문제 해결, 복사생성자 자체를 직접 만들어서 할당과 정확히 문자열을 넣어준다 */
	{
		str = new char[strlen(ref.str)+1];
		strcpy(str,ref.str);
	}
	~StringArray()
	{
		delete []str;
		cout <<"소멸자 ~StringArray() 호출! \n" ;
	}
	void Showdata()
	{
		cout<<"str : " << str <<endl;
	}
private:
	char *str;
};


void main()
{
	StringArray sa1("StringClass");
	StringArray sa2 = sa1;

	sa1.Showdata();
	sa2.Showdata();
}

/*sa1의 객체 소멸자가 호출되면 주소를 공유한 sa2 소멸자에서 오류 
위쪽 디폴트 복사생성자 참조 
예시 sa2.str = sa1.str;
얕은 복사 문제 발생 */