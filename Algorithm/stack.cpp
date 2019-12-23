#include <iostream>
// #include <conio.h>

using namespace std;



struct Stack{
    int s,e;
    int a[];
    bool cleared=true;
    Stack()
    {
        s=0;
        e=0;

    }

    /*int front(){
        return a[s];
    }*/
    int back(){
        return a[e-1];
    }
    void push(int x){
        a[e]=x;
        e++;
       // cleared = false;
    }

    void pop()
    {
        if (s < e)
            e--;
      /*  if(e == s)
            cleared = true;*/
    }
    int size()
    {
        return e-s;
    }
    void clear()
    { 
        e=s;
        //cleared=true;
    }
    bool empty()
    {
        if (e == s)
            return true;
        return false;
    }

};

int main() {
    
    Stack q;
    string a;
    int x;

    do{
        cin>>a;
    if (a=="push"){
        cin>>x;
        q.push(x);
        cout<<"ok"<<endl;
        }
        

    if (a=="pop"){
        if (q.empty()) 
            cout<<"error"<<endl;
        else {
            cout<<q.back()<<endl;
            q.pop();  
        }
    }
    if (a=="back")  {
        if (q.empty()==1) 
    cout<<"error"<<endl;
    
    else
        cout<<q.back()<<endl;  
    }


    if (a=="size"){
    cout<<q.size()<<endl;
    }
    if (a=="clear"){
        
        q.clear();
        cout<<"ok"<<endl;
    }
    } while (a!="exit");
    
    cout<<"bye";
    return 0;
}