#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
using namespace std;


int main() {

	vector <int> v;//������
	int x;
	int sum;
	int count;
	int size;

	x = 0;
	scanf_s("%d", &x);
	v.push_back(64);
	sum = 0;
	count = 0;
	
	//sort(v.begin(), v.end());
	while (1) {
		
		size = v.size();
		for (int i = 0; i < size; i++) {
			sum += v[i];
		}

	
		if (sum > x) {
			v[0]=v[0]/2;
			v.insert(v.begin()+1, v[0] / 2);

			int ifsum=0;
			size = v.size();
			for (int j = 1; j < size; j++) {
				ifsum += v[j];
			}
			if (ifsum >= x) {
				v.erase(v.begin());
			}
		}
		size = v.size();
		for (int i = 0; i < size; i++) {
			sum += v[i];
		}

		++count;

		if (count>5) {
			break;
		}
		cout << sum <<endl;
		cout << count <<endl;
	}

	


}

/*
�����̴� ���̰� 64cm�� ���븦 ������ �ִ�. ��� ��, �״� ���̰� Xcm�� ���밡 ������ �;�����.
�����̴� ���� ������ �ִ� ���븦 �� ���� ����� �ڸ�������, Ǯ�� �ٿ��� ���̰� Xcm�� ���븦 ������� �Ѵ�.

���븦 �ڸ��� ���� ���� ����� �������� �ڸ��� ���̴�. �����̴� �Ʒ��� ���� ������ ���ļ� ���븦 �ڸ����� �Ѵ�.

1. �����̰� ������ �ִ� ������ ���̸� ��� ���Ѵ�. ó������ 64cm ���� �ϳ��� ������ �ִ�. �̶�, ���� X���� ũ�ٸ�, �Ʒ��� ���� ������ �ݺ��Ѵ�.

`1.������ �ִ� ���� �� ���̰� ���� ª�� ���� �������� �ڸ���.
 2.����, ������ �ڸ� ������ ���� �� �ϳ��� ������ �����ִ� ������ ������ ���� X���� ũ�ų� ���ٸ�, ������ �ڸ� ������ ���� �� �ϳ��� ������.

2. ����, �����ִ� ��� ���븦 Ǯ�� �ٿ��� Xcm�� �����.
X�� �־����� ��, ���� ������ ��ģ�ٸ�, �� ���� ���븦 Ǯ�� �ٿ��� Xcm�� ���� �� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/