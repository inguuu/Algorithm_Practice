#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
using namespace std;
/*

int main() {

	vector <double> v;//������
	int x;
	double sum;
	int size;
	int i = 0;

	x = 0;
	cin >> x;
	v.push_back(64);
	sum = 0;

	//sort(v.begin(), v.end());
	while (sum != x) {
		
		sum = 0;
		size = v.size();
		for (i = 0; i < size; i++) {
			sum += v[i];
			//cout << v[i] << endl;
		}
		//cout << "1�� sum" << sum << endl;

		if (sum > x) {
			v.insert(v.begin() + 1, v[0] / 2);
			v[0] = v[0] / 2;
			
			double ifsum=0;
			size = v.size();
			for (int j = 1; j < size; j++) {
				ifsum += v[j];
			}
			//cout << " ifsum " << ifsum << endl;
			if (ifsum >= x) {
				v.erase(v.begin());
			}
		}

		sum = 0;
		size = v.size();
		for (i = 0; i < size; i++) {
			sum += v[i];
		}
	
		//cout << "���� sum " << sum << endl;
		
	}

	
	
	cout <<v.size() << endl;

}
/*

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