#include <iostream>
// #include <conio.h>

using namespace std;

int n;

struct Queue{
int s,e;
int a[999999];
bool cleared=true;
Queue()
{
    s=0;
    e=0;
}

int front(){
    return a[s];
}
/*back(){
    return a[e-1];
}*/
void push(int x){
    a[e]=x;
    e++;
    cleared = false;
}
int nxt(int x){
    return x+1;
}
void pop()
{
    if (s < e)
        s++;
    if(s == e)
        cleared = true;
}
int size()
{
    return e-s;
}
void clear()
{ 
 s=e;
 cleared=true;
}
bool empty()
{
    if (s == e)
        return true;
    return false;
}

};

int main() {

Queue q;
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
      if (q.empty()==1) 
        cout<<"error"<<endl;
    else
      cout<<q.front()<<endl;
      q.pop();  
    }
  
  if (a=="front")  {
      if (q.empty()==1) 
 cout<<"error"<<endl;
  
 else
    cout<<q.front()<<endl;  
  }


  if (a=="size"){
  cout<<q.size()<<endl;
  }
   if (a=="clear"){
     
    q.clear();
       cout<<"ok"<<endl;
  }
}while (a!="exit");
cout<<"bye";

    return 0;
;
   


    return 0;
}