#include <iostream>
using namespace std;

void main()
{
	int target = 20;

	//����� ���ÿ� �ݵ�� �ʱ�ȭ 
	int &ref = target;

	//���۷����� �Բ� ���� Ȯ��
	cout <<"ref = " <<ref <<endl;
	cout <<"target = " <<target <<endl;
	cout <<"&ref = "<<&ref << endl;
	cout <<"&target = "<<&target <<"\n\n";

	//���۷����� ���� �� ����
	ref = 100;

	cout <<"ref = "<<ref<<endl;
	cout <<"target = "<<target<<"\n\n";

	//���ο� ������ �����ϵ��� ����]
	int target2 = 200;
	ref = target2;

	cout <<"ref = "<<ref << "\n\n";

	//�ٽ� ���۷����� ���� �� ����
	ref = 0;

	cout <<"ref = " <<ref <<endl;
	cout <<"target = " <<target <<endl;
	cout <<"target2 = "<<target2 <<endl;
	



}