#include <iostream>
#include <deque>// for std::queue
#include <cstdio>
using namespace std;
deque <char> q;
void dfs(int,int,int);

int N;
int main  ()
{
    
    while (cin>>N )
    {
        dfs(0,0,0);
        cout<<endl;
    }
    



    return 0;
}

void dfs(int l,int r ,int n )//l左括號數 r右括號數 n總括號數
{
    if(n==N*2)
        {
            for(int i=0;i<N*2;i++)
            {
                cout<<q[i];
                
            }
            cout<<endl;
        }

    if(l<N)
        {
        
                q.push_back('(');
                dfs(l+1,r,n+1);
                q.pop_back();
        
                    
        }
    if(l>r && r<N )
        {
            q.push_back(')');
            dfs(l,r+1,n+1);
            q.pop_back();
            
        }



}
