#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
 
int main()
{
        int n,m1,g;
        scanf("%d%d%d",&n,&m1,&g);
        while(g > 0)
        {
                map<int, set<pair<int, int> > > m,c1,c2;
                set<pair<int,int> >::const_iterator iter;
                set<pair<int,int> > s;
                int x1,x2,y1,y2,z1,z2,time=1;
                scanf("%d%d%d%d%d%d",&x1,&x2,&y1,&y2,&z1,&z2);
                m[0].insert(make_pair(x1,x2));
                c1[0].insert(make_pair(y1,y2));
                c2[0].insert(make_pair(z1,z2));
                int flag = 0;
                while(1)
                {
                        if(m[time-1].size()==0)
                        {
                                printf("NO\n");
                                break;
                        }
                        for(iter=m[time-1].begin();iter!=m[time-1].end();iter++)
                        {
                                int x1,y1,x2,y2;
                                x1 = iter->first+1;
                                y1 = iter->second+1;
				x2 = iter->first-1;
				y2 = iter->second-1;
                                if((n < x1) || (m1 < y1) || (x2 < 0) || (y2 < 0))
                                {
                                        printf("YES\n");
                                        flag = 1;
                                        break;
                                }
                                else
                                {
                                        m[time].insert(make_pair(iter->first+1,iter->second));
                                        m[time].insert(make_pair(iter->first-1,iter->second));
                                        m[time].insert(make_pair(iter->first,iter->second+1));
                                        m[time].insert(make_pair(iter->first,iter->second-1));
                                }
                        }
                        if(flag == 1)
                                break;
                        for(iter=c1[time-1].begin();iter!=c1[time-1].end();iter++)
                        {
                                c1[time].insert(make_pair(iter->first+1,iter->second));
                                c1[time].insert(make_pair(iter->first-1,iter->second));
                                c1[time].insert(make_pair(iter->first,iter->second+1));
                                c1[time].insert(make_pair(iter->first,iter->second-1));
                        }
                        for(iter=c2[time-1].begin();iter!=c2[time-1].end();iter++)
                        {
                                c2[time].insert(make_pair(iter->first+1,iter->second));
                                c2[time].insert(make_pair(iter->first-1,iter->second));
                                c2[time].insert(make_pair(iter->first,iter->second+1));
                                c2[time].insert(make_pair(iter->first,iter->second-1));
                        }
                        for(iter=c1[time].begin();iter!=c1[time].end();iter++)
                        {
                                if(m[time].find(*iter)!=m[time].end())
                                        m[time].erase(m[time].find(*iter));
                        }
                        for(iter=c2[time].begin();iter!=c2[time].end();iter++)
                        {
                                if(m[time].find(*iter)!=m[time].end())
                                        m[time].erase(m[time].find(*iter));
                        }
                        time++;
                }
                g--;
        }
        return 0;
}
