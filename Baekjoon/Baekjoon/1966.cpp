#include<stdio.h>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
using namespace std;

int main(){

	queue<pair<int,int>> imp[100]; //�߿䵵
	int num;
	int i;
	int j;
	int n[100];
	int m[100];
	int inputimp;
	int value;
	int idx;
	priority_queue<int> pq;
	

	cin >> num;
	for (i = 0; i < num; i++) {
		cin >> n[i];	
		cin >> m[i];
		for (j = 0; j < n[i]; j++) {
			cin >> inputimp;
			imp[i].push({ inputimp,j });
		}
	}

	for (i = 0; i < num; i++) {
		while (imp[i].empty() == false) {
			if (pq.top > imp[i].front()) {
				value= imp[i].front().first;
				idx = imp[i].front().second;
				imp[i].pop();
				imp[i].push({ value,idx });
			}
			else if(pq.top==imp[i].front()) {
				pq.pop();
				imp[i].pop();
			}
		}
	
	}

	//for (i = 0; i < num; i++) {
	//	cout << imp[i].front();
	//}

}

/*
�����е� �˴ٽ��� �������� ������ ���� �������� �μ��ϰ��� �ϴ� ������ �μ� ����� ���� ��������Ρ�, 
�� ���� ��û�� ���� ���� �μ��Ѵ�. ���� ���� ������ ���δٸ� Queue �ڷᱸ���� �׿��� FIFO - First In First Out - 
�� ���� �μⰡ �ǰ� �ȴ�. ������ ����̴� ���ο� �����ͱ� ���� ����Ʈ��� �����Ͽ��µ�, �� �����ͱ�� ������ ���� ���ǿ� ���� �μ⸦ �ϰ� �ȴ�.

���� Queue�� ���� �տ� �ִ� ������ ���߿䵵���� Ȯ���Ѵ�.
������ ������ �� ���� �������� �߿䵵�� ���� ������ �ϳ��� �ִٸ�, �� ������ �μ����� �ʰ� Queue�� ���� �ڿ� ���ġ �Ѵ�. �׷��� �ʴٸ� �ٷ� �μ⸦ �Ѵ�.
���� ��� Queue�� 4���� ����(A B C D)�� �ְ�, �߿䵵�� 2 1 4 3 ��� C�� �μ��ϰ�, �������� D�� �μ��ϰ� A, B�� �μ��ϰ� �ȴ�.

�������� �� ����, ���� Queue�� �ִ� ������ ���� �߿䵵�� �־����� ��, � �� ������ �� ��°�� �μ�Ǵ��� �˾Ƴ��� ���̴�. ���� ��� ���� ������ C������ 1��°��, A������ 3��°�� �μ�ǰ� �ȴ�.
*/