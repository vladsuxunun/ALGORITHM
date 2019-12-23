#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
#include <stdio.h>
#include <utility>
#include <sstream>
using namespace std;


void merge(vector<pair<int,int> > arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    vector<pair<int,int> > L, R;

    for (i = 0; i < n1; i++)
        L.push_back(arr[l + i]);
    for (j = 0; j < n2; j++)
        R.push_back(arr[m + 1+ j]);

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}






//gfgffgffg
//cin ekegkgtr
void mergeSort(vector<pair<int,int> > arrl, int lf, int rg)
{
    if (lf < rg)
    {
        int mn = lf+(rg-lf)/2;//gfgjhg

        mergeSort(arrl, lf, mn);
        mergeSort(arrl, mn+1, rg);//ghddpf

        merge(arrl, lf, mn, rg);
    }
}


int main()
{
    string s;
    int Tt;
    cin >> Tt;
    getline(cin,s);
    vector<string> ans[Tt];
    for(int t = 0; t < Tt; t++){
        string sgg;
        getline(cin,sgg);
        stringstream ssd;
        ssd << sgg;
        vector<string> vvv;
        vector<pair<int,int> > vvvv;
        int i = 0;
        string word;
        while(ssd >> word){
            vvv.push_back(word);
            vvvv.push_back(make_pair(word.size(), i++));
        }
        mergeSort(vvvv, 0, vvvv.size()-1);
        sort(vvvv.begin(), vvvv.end());
        for(i = 0; i < vvvv.size(); ++i ){
            ans[t].push_back(vvv[vvvv[i].second]);
        }
    }

    for(int i = 0; i < Tt; i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
//gfkfkkfkhfkhghf
