#include<iostream>
#include<string.h>
using namespace std;

char **S;
char **Q;
int nt,nq;

int last(int Si,int Qi,int Qj,int j=0)
{
    int Qh=Qj;
    if(S[Si][1]=='/')
    {
        for(; S[Si][j]!='>'; j++)
        {
            if(Q[Qi][Qj]==S[Si][j])
                Qj++;
            else Qj=Qh;
            if(Q[Qi][Qj]=='~'||Q[Qi][Qj]=='\0'||Q[Qi][Qj]=='.')
                return j;
        }

    }
    return -1;
}

int Find(int Si,int Qi,int Qj,int j=0)
{
    int Qh=Qj;
    if(S[Si][1]!='/')
    {
        for(;S[Si][j]!='>';j++)
        {
            if(Q[Qi][Qj]==S[Si][j])
                Qj++;
            else Qj=Qh;
            if(Q[Qi][Qj]=='~'||Q[Qi][Qj]=='\0'||Q[Qi][Qj]=='.')
                return j;
        }

    }
    return -1;

}

void Search(int fq,int f,int t,int d)
{
    int q;
    if(d==0)
    {
        int i,x=1;
        for(i=0; i<nt; i++)
        {
            q=Find(i,fq,f);

            if(q!=-1)
            {
                q+=2;
                q=Find(i,fq,t+1,q);
                if(q!=-1&&(S[i][q+1]==' '&&S[i][q+2]=='='))
                {
                    if(S[i][q+4]=='"')
                    {
                        q=q+5;
                        while(S[i][q]!='"')
                        {
                            cout<<S[i][q++];
                        }
                        cout<<endl;
                        x=0;
                    }
                }
            }
        }
        if(x)
        {
            cout<<"Not found!"<<endl;
        }

    }
    else
    {
        int fi,ft,lt,i,x=1;
        for(fi=0; d-1; fi++)
        {
            if(Q[fq][fi]=='.')
                d--;

        }
        int k=fi;
        for(fi=0; fi<nt; fi++)
        {
            ft=Find(fi,fq,k);
            if(ft!=-1)
            {
                ft=fi;
                for(int lj=fi+1; lj<nt-fi; lj++)
                {
                    lt=last(lj,fq,k);
                    if(lt!=-1)
                     {
                    lt=lj;
                    lj=nt-fi;
                     }

                }

                for(i=ft; i<lt; i++)
                {
                    q=Find(i,fq,f);

                    if(q!=-1)
                    {
                        q+=2;
                        q=Find(i,fq,t+1,q);
                        if(q!=-1&&(S[i][q+1]==' '&&S[i][q+2]=='='))
                        {
                            if(S[i][q+4]=='"')
                            {
                                q=q+5;
                                while(S[i][q]!='"')
                                {
                                    cout<<S[i][q++];
                                }
                                cout<<endl;
                                x=0;
                            }
                        }

                    }
                }
            }
        }
    if(x==1)
        cout<<"Not Found!"<<endl;
    }
}

    int main()
    {
        cin>>nt>>nq;
        S=new char *[nt];
        Q=new char *[nq];
        for(int i=0;i<nt;i++)
        {
            S[i]=new char[200];fflush(stdin);
            cin.getline(S[i],200);
            int y=strlen(S[i]);
            S[i][y]=0;
        }

        for(int i=0;i<nq;i++)
        {
            Q[i]=new char[200];fflush(stdin);
            cin.getline(Q[i],200);
        }

        for(int i=0; i<nq; i++)
        {
            int k=0,d=0,j;
            for(j=0; Q[i][j]; j++)
            {
                if(Q[i][j]=='~')
                    Search(i,k,j,d);
                else if(Q[i][j]=='.')
                {
                    k=j+1;
                    d++;

                }
            }
        }
        free(Q);
        free(S);
        return 0;
    }
