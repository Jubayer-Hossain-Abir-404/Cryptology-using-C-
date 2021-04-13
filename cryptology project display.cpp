#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    char x[27],y[27],z[100],a[100];
    int i,j,k,c=0,f,X;
    for(i=0; i<26; i++)
    {
        x[i]='A'+i;
        y[i]=x[i]+32;
    }
    x[i]=' ';
    y[i]=' ';
    cout<< "Only encrypt then press 1"<<endl;
    cout<< "If only decrypt then press 2"<<endl;
    cout<< "Or both encrypt and then decrypt then press 3"<<endl;
    cin>>X;
    system("cls");
    if(X==1)
    {
        cout<< "Enter any plain text:";
        cin.ignore();
        cin.getline(z,100);
        cout<< "How many times do you want to shift the character:";
        cin>>k;
        i=0;
        while(z[i]!='\0')
        {
            i++;
            c++;
        }
        cout<< "Plain text to cypher text:";
        for(i=0; i<c; i++)
        {
            for(j=0; j<27; j++)
            {
                if(z[i]==x[j])
                {
                    f=(j+k)%27;
                    if(f<0)
                    {
                        f+=27;
                    }
                    cout<<x[f];
                }
                else if(z[i]==y[j])
                {
                    f=(j+k)%27;
                    if(f<0)
                    {
                        f+=27;
                    }
                    cout<<y[f];
                }
            }
        }
    }
    else if(X==2)
    {
        cout<< "Enter any cypher text:";
        cin.ignore();
        cin.getline(z,100);
        cout<< "How many times do you want to shift the character:";
        cin>>k;
        i=0;
        while(z[i]!='\0')
        {
            i++;
            c++;
        }
        cout<< "Cypher text to plain text:";
        for(i=0; i<c; i++)
        {
            for(j=0; j<27; j++)
            {
                if(z[i]==x[j])
                {
                    f=(j-k)%27;
                    if(f<0)
                    {
                        f+=27;
                    }
                    cout<<x[f];
                }
                else if(z[i]==y[j])
                {
                    f=(j-k)%27;
                    if(f<0)
                    {
                        f+=27;
                    }
                    cout<<y[f];
                }
            }
        }
    }
    else if(X==3)
    {
        cout<< "Enter any plain text:";
        cin.ignore();
        cin.getline(z,100);
        cout<< "How many times do you want to shift the character:";
        cin>>k;
        i=0;
        while(z[i]!='\0')
        {
            i++;
            c++;
        }
        cout<<endl<< "Plain text to cypher text:";
        for(i=0; i<c; i++)
        {
            for(j=0; j<27; j++)
            {
                if(z[i]==x[j])
                {
                    f=(j+k)%27;
                    if(f<0)
                    {
                        f+=27;
                    }
                    cout<<x[f];
                    a[i]=x[f];
                }
                else if(z[i]==y[j])
                {
                    f=(j+k)%27;
                    if(f<0)
                    {
                        f+=27;
                    }
                    cout<<y[f];
                    a[i]=y[f];
                }
            }
        }
        cout<<endl<<endl<< "Cypher text to plain text:";
        for(i=0; i<c; i++)
        {
            for(j=0; j<27; j++)
            {
                if(a[i]==x[j])
                {
                    f=(j-k)%27;
                    if(f<0)
                    {
                        f+=27;
                    }
                    cout<<x[f];
                }
                else if(a[i]==y[j])
                {
                    f=(j-k)%27;
                    if(f<0)
                    {
                        f+=27;
                    }
                    cout<<y[f];
                }
            }
        }
        cout<<endl;
    }
    else
    {
        cout<< "The given input is wrong"<<endl;
    }
    return 0;
}
