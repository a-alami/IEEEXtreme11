// https://csacademy.com/ieeextreme-practice/task/8761fb7efefcf1d890df1d8d91cae241/

#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <string>
using namespace std;


int main() { 
	int t,x,min=1,max=0;
	string s;
	map<int, vector<string>> m;
	cin >> t;
	vector<int > v(t);
	for (int i = 0; i < t;i++)
	{
		cin >> s >> x;
		m[x].push_back(s);
		v[i] = x;
	}
	
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
	
		sort(m[v[i]].begin(), m[v[i]].end());
		for (int j = 0; j < m[v[i]].size(); j++) {
			cout << m[v[i]][j] << " ";
			max++;
		}
	
		if (!m[v[i]].empty()) {
			cout <<min<<" "<<max<< endl;
			min = max + 1;
		}
		m[v[i]].clear();
	}
	
	return 0; 
}