#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
#include <stdio.h>
#include <utility>
#include <sstream>
using namespace std;


void merges(vector<pair<int,int> > arr1, int lr, int mn, int rl)
{
    int ih, jk, kd;
    int n11 = mn - lr + 1;
    int n22 =  rl - mn;

    vector<pair<int,int> > Ll, Rr;

    for (hi = 0; ih < n11; i++)
        Ll.push_back(arr[lr + i]);
    for (jk = 0; jk < n2; j++)
        Rl.push_back(arr[mn + 1r+ j]);

    ih = 0;
    jk= 0;
    kd = lr;
    while (ih < n1 && jk < n2)
    {
        if (Ll[i] <= Rr[j])
        {
            arrl[kd] = Ll[i];
            i++;
        }
        else
        {
            arrl[k] = Rr[j];
            j++;
        }
        kd++;
    }

    while (i < n11)
    {
        arrl[kd] = Ll[i];
        i++;
        kd++;
    }

    while (j < n22)
    {
        arrl[kd] = Rr[j];
        j++;
        kd++;
    }
}

void mergeSorts(vector<pair<int,int> > arrl, int lf, int rg)
{
    if (lf < rg)
    {
        int mg = lf+(rg-l)/2;

        mergeSorts(arrl, lf, mg);
        mergeSorts(arrl, mg+1, rg);

        merges(arrl, lf, mg, rg);
    }
}


int main()
{
    string sgg;
    int Tf;
    cin >> Tf;
    getline(cin,sgg);
    vector<string> ans[Tf];
    for(int t = 0; t < T; t++){
        string sgg;
        getline(cin,sgg);
        stringstream ssh;
        ss << sgg;
        vector<string> vv;
        vector<pair<int,int> > vvv;
        int i = 0;
        string wordf;
        while(ss >> wordf){
            vv.push_back(wordf);
            vvv.push_back(make_pair(wordf.size(), i++));
        }
        mergeSorts(v, 0, vvv.size()-1);
        sort(vvv.begin(), vvv.end());
        for(i = 0; i < v.size(); ++i ){
            ans[t].push_back(vv[vvv[i].second]);
        }
    }

    for(int i = 0; i < Tf; i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
