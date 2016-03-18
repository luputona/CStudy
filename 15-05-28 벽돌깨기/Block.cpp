#include "StdAfx.h"
#include "Block.h"


CBlock::CBlock(void)
{
	memset(tBlock,0,sizeof(tBlock));
}


CBlock::~CBlock(void)
{
	Release();
}

void CBlock::Initialize()
{
	SetBlock(10);
}

void CBlock::Progress()
{
	
}

void CBlock::Render()
{
	for (int i = 0; i<10; i++)
	{
		gotoxy(tBlock[i].nX,tBlock[i].nY);
		cout <<"��";
	}
}

void CBlock::Release()
{

}
//Search �Լ��� �־�����ǥ�� ���� ������ ��� �迭 �߿� �ߺ��� ���� �ִ����� 
//�˻����ִ� �Լ� 
//���� �ִ� ��� 50�� ���� ���� 
//�Ź� 50���� ����� ���� �˻��� �ʿ���� ������������ �Ҵ�� ���
//�ȿ����� �˻�
//Search�Լ��� ù��° ������ nEnd������ ����� ������ �ȴ�.
//�� �Լ��� SetBlock�Լ����� ȣ��ȴ�.

int CBlock::Search( int nEnd,int nX,int nY )
{
	for (int i =0; i<nEnd; i++)
	{
		if (tBlock[i].nY == nY)
		{
			if (tBlock[i].nX == nX || (tBlock[i].nX + 1) == nX)
			{
				return 1; // �������� ������ 1
			}
		}
	}
	//�������� ����.
	return 0;
}

void CBlock::SetBlock( int nBlockCount )
{
	int nX;
	int nY;
	srand((unsigned(time(NULL))));

	for (int i = 0 ; i < nBlockCount; i++)
	{
		tBlock[i].nLife = 1;

		while(1) //�ߺ�ã�� 
		{
			nX = rand() % 57 + 2; // 2~58���� �ȿ��� 
			nY = rand() % 14 + 2; //2~15���� ����

			if (Search(i,nX,nY) == 0)
			{
				tBlock[i].nX = nX;
				tBlock[i].nY = nY;
				break;
			}
		}
	}
}
