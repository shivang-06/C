using namespace std;
#include<iostream>

int main()
{
        int n;
        cin>>n;
        int sp1=0,sp2=0,w=0,l,mlead=0;
        for(int i=0;i<n;i++)
        {   l=0;
            cin>>sp1>>sp2;
            if(sp1>sp2)
             {  l=sp1-sp2;
                if (l>mlead)
                   {
                        mlead=l;
                        w=1;
                   }

            }

            else
               {
                   l=sp2-sp1;
                   if(l>mlead)
                   {
                       mlead=l;
                       w=2;
                   }
               }

        }
        cout<<w<<" "<<mlead;
        return 0;
}
