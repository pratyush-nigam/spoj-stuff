#include<iostream>
#include<cmath>
#include<map>
#include<set>

using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int m[n+1];
        int a;
        for(int i=0;i<n;i++)
        {
            cin >> a;
            m[a]= i;
        }
        set<int> st;
        set<int>::iterator it;
        st.clear();
        for(int i=0; i<n; i++)
        {
            cin>> a;
            st.insert(m[a]); 
            it=st.find(m[a]);
            it++; 
            if(it!=st.end()) 
                st.erase(it);
        }
        cout<<st.size()<<endl;
    }
}
