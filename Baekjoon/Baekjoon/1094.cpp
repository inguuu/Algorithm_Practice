#include<stdio.h>
#include<vector>
#include<algorithm> 
#include<iostream>
using namespace std;


int main() {

	vector <int> v;//나머지
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
지민이는 길이가 64cm인 막대를 가지고 있다. 어느 날, 그는 길이가 Xcm인 막대가 가지고 싶어졌다.
지민이는 원래 가지고 있던 막대를 더 작은 막대로 자른다음에, 풀로 붙여서 길이가 Xcm인 막대를 만들려고 한다.

막대를 자르는 가장 쉬운 방법은 절반으로 자르는 것이다. 지민이는 아래와 같은 과정을 거쳐서 막대를 자르려고 한다.

1. 지민이가 가지고 있는 막대의 길이를 모두 더한다. 처음에는 64cm 막대 하나만 가지고 있다. 이때, 합이 X보다 크다면, 아래와 같은 과정을 반복한다.

`1.가지고 있는 막대 중 길이가 가장 짧은 것을 절반으로 자른다.
 2.만약, 위에서 자른 막대의 절반 중 하나를 버리고 남아있는 막대의 길이의 합이 X보다 크거나 같다면, 위에서 자른 막대의 절반 중 하나를 버린다.

2. 이제, 남아있는 모든 막대를 풀로 붙여서 Xcm를 만든다.
X가 주어졌을 때, 위의 과정을 거친다면, 몇 개의 막대를 풀로 붙여서 Xcm를 만들 수 있는지 구하는 프로그램을 작성하시오.
*/