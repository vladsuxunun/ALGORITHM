#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    stack<char> jkk;
	string hgg;
	cin >> hgg;
		for(int i = 0; i < hgg.size(); i++) {
		if (jkk.empty()){
            jkk.push(hgg[i]);
		}
		else if (jkk.top() == '(' && hgg[i] == ')')
            jkk.pop();
		else if (jkk.top() == '[' && hgg[i] == ']')
		jkk.pop();
		else if (jkk.top() == '{' && hgg[i] == '}')
		jkk.pop();
		else
		jkk.push(hgg[i]);
	}
	if (hgg.empty())
	{


        cout << "YES";
	}
	else
    {
        cout << "NO";

}
}
