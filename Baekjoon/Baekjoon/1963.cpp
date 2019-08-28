#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
#include<queue>
using namespace std;


int chk(int a) {
	for (int i = 2; i < a; i++) {
		if (a%i == 0) return 0;
	}
	return 1;
}

int main(){

	int tc;
	int start;
	int end;
	int count;
	
	queue <pair<int,int>> q;
	int visited[10001] = {0,};
	cin >> start;
	cin >> end;
	

	q.push(make_pair(start,0));
	while(!q.empty()) {

		int now_num = q.front().first;
		int now_count = q.front().second;

		cout << "now_num: " << now_num << "now_count: " << now_count << endl;
		q.pop();


		
	

		for (int i = 0; i < 4; i++) {
			int can;
			if (i == 0) {
				for (int j = 1; j <= 9; j++) {
					can = now_num + j * 1000;
				
					if (can < 10000 && can>=1000) {
						
						if (chk(can) == 1&&visited[can]==0) {
							//cout <<can << now_count<<endl;
							int nxt_count = now_count + 1;
							q.push(make_pair(can, nxt_count));
							visited[can]=1;
						}
					}
				}
			}
			if (i == 1) {
				for (int j = 1; j < 9; j++) {
					can = now_num + j * 100;
					if (can < 10000 && can >= 1000) {
						//cout << can <<" " <<now_count << " " << chk(can) << endl;
						if (chk(can) == 1 && visited[can] == 0) {
							//cout << can << now_count << endl;
							int nxt_count = now_count + 1;
							q.push(make_pair(can, nxt_count));
							visited[can] = 1;
						}
					}
				}
			}

			if (i == 2) {
				for (int j = 1; j < 9; j++) {
					can = now_num + j * 10;
					if (can < 10000 && can >= 1000) {
						if (chk(can) == 1 && visited[can] == 0) {
							//cout << can << now_count << endl;
							int nxt_count = now_count + 1;
							q.push(make_pair(can, nxt_count));
							visited[can] = 1;
						}
					}
				}
			}
			if (i == 3) {
				for (int j = 1; j < 9; j++) {
					can = now_num + j * 1;
					if (can < 10000 && can >= 1000) {
						if (chk(can) == 1 && visited[can] == 0) {
							//cout << can << now_count << endl;
							int nxt_count = now_count + 1;
							q.push(make_pair(can, nxt_count));
							visited[can] = 1;
						}
					}
				}
			}

		}




	}

	
}

/*

�Ҽ��� �������� �����ϴ� â���̴� ���� ���̵� ��й�ȣ�� 4�ڸ� ���Ҽ����� ���س��Ҵ�. ��� �� â���̴� ģ�� ģ���� ��ȭ�� �������µ�:

������ ���� ��� �ٲ� ���� ���ݾơ�
���� ������ 1033���� �س��µ�... ���� �Ҽ��� �������� ���� ������̾�"
���׷� 8179�� �ء�
����... ���� �� �غ���. �� ������ �� �̻��ؼ� ��й�ȣ�� �� ���� �� �ڸ� �ۿ� �� �ٲ۴� ���̾�.
���� ��� ���� ù �ڸ��� �ٲٸ� 8033�� �Ǵϱ� �Ҽ��� �ƴ��ݾ�. ���� �ܰ踦 ���ľ� ���� �� ���� �� ������... 
���� ���... 1033 1733 3733 3739 3779 8779 8179ó�� ���̾�.��
����...���� �Ҽ��� ���Ʊ�. �׷� �ƿ� ���α׷��� ¥�� �׷�. �� �ڸ� �Ҽ� �� ���� �Է¹޾Ƽ� �ٲٴµ� �� �ܰ質 �ʿ����� ����ϰ� ����.��
�������ơ�
�׷���. �׷��� �������� �� ������ Ǯ�� �Ǿ���. �Է��� �׻� �� �ڸ� �Ҽ���(1000 �̻�) �־����ٰ� ��������. 
�־��� �� �Ҽ� A���� B�� �ٲٴ� ���������� �׻� �� �ڸ� �Ҽ����� �����ؾ� �ϰ�, 
���� �ڸ� ������ �Ͽ��� ������ 0039 �� ���� 1000 �̸��� ��й�ȣ�� ������ �ʴ´�.
*/