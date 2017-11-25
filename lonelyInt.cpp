#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, in;
    unsigned count=0;
    cin >> n;
    set<int> A;
    for(int i=0; i<n; i++)
    {
		cin>>in;
		A.insert(in);
		count++;
		if(count!=A.size())
		{
			A.erase(in);
			count-=2;
		}
	}
	cout<<*A.begin();
    return 0;
}
