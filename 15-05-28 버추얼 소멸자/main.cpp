#include <iostream>
using namespace std;


class CObj
{
private:
	int *m_pObj;

public:
	CObj()
	{
		m_pObj = new int;
	}
	virtual ~CObj()
	{
		cout <<"ºÎ¸ð ¼Ò¸êÀÚ"<<endl;
		delete m_pObj;
	}
};

class CPlayer : public CObj
{
private:
	int *m_pPlayer;
public:
	CPlayer()
	{
		m_pPlayer = new int;
	}
	~CPlayer()
	{
		cout <<"ÀÚ½Ä ¼Ò¸êÀÚ\n";
		delete m_pPlayer;		
	}

};

void main()
{
	/*CObj *pObj = new CObj;

	delete pObj;*/


	CObj *pObj2 = new CPlayer;
	delete pObj2;
}