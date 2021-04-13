#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    char x[27],y[100];
    int i,j,c=0,k,p,func[100],g,X;
    for(i=0; i<26; i++)
    {
        x[i]='A'+i;
    }
    x[i]=' ';
    cout<< "Only encrypt then press 1"<<endl;
    cout<< "If only decrypt then press 2"<<endl;
    cout<< "Or both encrypt and then decrypt then press 3"<<endl;
    cin>>X;
    system("cls");
    if(X==1)
    {
        cout<< "Enter any plain text:";
        cin.ignore();
        cin.getline(y,100);
        cout<< "How many times do you want to shift the character:";
        cin>>k;
        i=0;
        while(y[i]!='\0')
        {
            i++;
            c++;
        }
        cout<< "Plain text to cypher text:";
        for(i=0; i<c; i++)
        {
            for(j=0; j<27; j++)
            {
                if(y[i]==x[j])
                {
                    p=j;
                }
            }
            func[i]=(p+k)%27;
            if(func[i]<0)
            {
                func[i]=func[i]+27;
            }
            cout<<x[func[i]];
        }
    }
    else if(X==2)
    {
        cout<< "Enter any cypher text:";
        cin.ignore();
        cin.getline(y,100);
        cout<< "How many times do you want to shift the character:";
        cin>>k;
        i=0;
        while(y[i]!='\0')
        {
            i++;
            c++;
        }
        cout<< "Cypher text to plain text:";
        for(i=0; i<c; i++)
        {
            for(j=0; j<27; j++)
            {
                if(y[i]==x[j])
                {
                    p=j;
                }
            }
            func[i]=(p-k)%27;
            if(func[i]<0)
            {
                func[i]=func[i]+27;
            }
            cout<<x[func[i]];
        }
    }
    else if(X==3)
    {
        cout<< "Enter any plain text:";
        cin.ignore();
        cin.getline(y,100);
        cout<< "How many times do you want to shift the character:";
        cin>>k;
        i=0;
        while(y[i]!='\0')
        {
            i++;
            c++;
        }
        cout<<endl<< "Plain text to cypher text:";
        for(i=0; i<c; i++)
        {
            for(j=0; j<27; j++)
            {
                if(y[i]==x[j])
                {
                    p=j;
                }
            }
            func[i]=(p+k)%27;
            if(func[i]<0)
            {
                func[i]=func[i]+27;
            }
            g=func[i];
            y[i]=x[g];
            cout<<x[g];
        }
        cout<<endl<<endl<< "Cypher text to plain text:";
        for(i=0; i<c; i++)
        {
            for(j=0; j<27; j++)
            {
                if(y[i]==x[j])
                {
                    p=j;
                }
            }
            func[i]=(p-k)%27;
            if(func[i]<0)
            {
                func[i]=func[i]+27;
            }
            cout<<x[func[i]];
        }
    }
    else
    {
        cout<< "The given input is wrong"<<endl;
    }
    return 0;
}
