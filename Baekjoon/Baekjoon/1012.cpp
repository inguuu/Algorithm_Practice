#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
#include<queue>
using namespace std;

int main() {

	queue <pair <int, int>> q;
	int map[51][51];
	int visited[51][51];
	int t, m, n, k;

	int dr[] = { 0,1,0,-1 };
	int dc[] = { 1,0,-1,0 };

		cin >> m;
		cin >> n;
		cin >> k;

		//�ʱ�ȭ
		for (int j = 0; j < n; j++) {
			for (int s = 0; s < m; s++) {
				map[j][s] = 0;
				visited[j][s] = 0;
			}
		}

		while (!q.empty()) {
			q.pop();
		}

		 //�ֱ�
		for (int j = 0; j < k; j++) {
			
			int br;
			int bc;
			cin >> br;
			cin >> bc;
			map[bc][br] = 1;

		}

		for (int j = 0; j < n; j++) {//��Ȯ��
			for (int s = 0; s < m; s++) {
				cout << map[j][s] << " ";
			}
			cout << " " << endl;
		}


		//����

		int num = 0;

		for (int j = 0; j < n; j++) {
			for (int s = 0; s < m; s++) {
				if (map[j][s] == 1&&visited[j][s]==0) {
					q.push(make_pair(s, j));

					//bfs
					while (!q.empty()) {
						
						int now_row = q.front().second;
						int now_col = q.front().first;
						visited[now_row][now_col] = 1;
						

						
						cout << "now " << now_row << "," << now_col  << endl;
						q.pop();

						for (int j = 0; j < 4; j++) {
							int nxt_row = now_row + dr[j];
							int nxt_col = now_col + dc[j];

							if (nxt_col >= 0 && nxt_row >= 0 && nxt_row < n && nxt_col < m) {

								if (map[nxt_row][nxt_col] == 1 && visited[nxt_row][nxt_col] == 0) {
								
									q.push(make_pair(nxt_col, nxt_row));
									visited[nxt_row][nxt_col] = 1;

								}
							}

						}


					}
					num++;


				}
				
			}
		}


	cout << "num:" << num << endl;
	cout << "Rmx:"<< endl;
}

/*
������ ������ �ѳ��� ������ �������� ����� ���߸� ����ϱ�� �Ͽ���.

����� ���� �ʰ� ���߸� ����Ϸ��� ���߸� �������κ��� ��ȣ�ϴ� ���� �߿��ϱ� ������, �ѳ��� ���� ������ ȿ������ �����������̸� �����ϱ�� ����Ѵ�.

�� �����̴� ���߱�ó�� �����ϸ� ������ ��� �������ν� ���߸� ��ȣ�Ѵ�. 

Ư��, � ���߿� �����������̰� �� ������ ��� ������ �� �����̴� ������ �ٸ� ���߷� �̵��� �� �־�, �� ���ߵ� ���� �������κ��� ��ȣ���� �� �ִ�.

(�� ������ �����¿� �� ���⿡ �ٸ� ���߰� ��ġ�� ��쿡 ���� �������ִٰ� �����Ѵ�)

�ѳ��� ���߸� ����ϴ� ���� ���� ���ؼ� ���߸� �������� �ɾ���Ҵ�. ���ߵ��� ���ִ� ������ �����������̰� �� ������ ������ �ǹǷ� ���� �������ִ� ���ߵ��� �� ������ �����ִ��� �����ϸ� �� �� ������ �����̰� �ʿ����� �� �� �ִ�.

���� ��� ���߹��� �Ʒ��� ���� �����Ǿ� ������ �ּ� 5������ �����������̰� �ʿ��ϴ�.

(0�� ���߰� �ɾ��� ���� ���� ���̰�, 1�� ���߰� �ɾ��� �ִ� ���� ��Ÿ����.)
*/