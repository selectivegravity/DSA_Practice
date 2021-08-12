#include<iostream>
#include<stack>
using namespace std;

class box {
    public:
    char ch;
    int pos;
    int swap1;
    int swap2;
};

class que{
    public:
    int posi;
    int posj;
};

bool correction(int i,int j,stack<box>&st1,stack<que>st2,int &count){
    while(!st2.empty()){
        que recieve = st2.top();
        if(recieve.posi==i){
            box b;
            b.ch='R';
            b.pos=i;
            b.swap1=recieve.posj;
            b.swap2=j;
            st1.push(b);
            count++;
            return true;
        }
        else if(recieve.posj==j){
            box b;
            b.ch='C';
            b.pos=j;
            b.swap1=recieve.posi;
            b.swap2=i;
            st1.push(b);
            count++;
            return true;
        }
        st2.pop();
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int N,M,E;
    cin>>N>>M>>E;
    stack <box> st1;
    stack <que> st2;
    char a[N][M],b[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>b[i][j];
        }
    }
    // write your code here...
    int count=0;
    for(int i=0;i<N;i++){
        int flag;
        for(int j=0;j<M;j++){
            flag=0;
            if(b[i][j]=='?'){
                que q;
                q.posi=i;
                q.posj=j;
                st2.push(q);
            }
            else if(a[i][j]!=b[i][j] && b[i][j]!='?'){
                int row=i+1;
                int col=j+1;
                while(row<N && col<M){
                    if(b[row][j]=='?'){
                        que q;
                        q.posi=row;
                        q.posj=j;
                        st2.push(q);
                    }
                    else if(b[i][col]=='?'){
                        que q;
                        q.posi=i;
                        q.posj=col;
                        st2.push(q);
                    }
                    else{
                        //vertical...
                        if(a[row][j]!=b[row][j] && b[row][j]!='?'){
                            a[i][j]=b[i][j];
                            a[row][j]=b[row][j];
                            box b;
                            b.ch='C';
                            b.pos=j;
                            b.swap1=i;
                            b.swap2=row;
                            st1.push(b);
                            count++;
                            break;
                        }
                        // Horizontal...
                        else if(a[i][col]!=b[i][col] && b[i][col]!='?'){
                            a[i][j]=b[i][j];
                            a[i][col]=b[i][col];
                            box b;
                            b.ch='R';
                            b.pos=i;
                            b.swap1=j;
                            b.swap2=col;
                            st1.push(b);
                            count++;
                            break;
                        }
                    }
                    row++;
                    col++;
                }
                if(row==N && col<M){
                    while(col<M){
                        if(b[i][col]=='?'){
                            que q;
                            q.posi=i;
                            q.posj=col;
                            st2.push(q);
                        }
                        else{
                            if(a[i][col]!=b[i][col] && b[i][col]!='?'){
                                a[i][j]=b[i][j];
                                a[i][col]=b[i][col];
                                box b;
                                b.ch='R';
                                b.pos=i;
                                b.swap1=j;
                                b.swap2=col;
                                st1.push(b);
                                count++;
                                break;
                            }
                        }
                        col++;
                    }
                }
                else if(col==M && row<N){
                    while(row<N){
                        if(b[row][j]=='?'){
                            que q;
                            q.posi=row;
                            q.posj=j;
                            st2.push(q);
                        }
                        else{
                            if(a[row][j]!=b[row][j] && b[row][j]!='?'){
                                a[i][j]=b[i][j];
                                a[row][j]=b[row][j];
                                box b;
                                b.ch='C';
                                b.pos=j;
                                b.swap1=i;
                                b.swap2=row;
                                st1.push(b);
                                count++;
                                break;
                            }
                        }
                        row++;
                    }
                }
                
                if(a[i][j]!=b[i][j]){
                    if(correction(i,j,st1,st2,count)){
                        a[i][j]=b[i][j];
                    }
                    else{
                        flag=1;
                        count=-1;
                        break;
                    }
                }
            }
        }
        if(flag==1){
            break;
        }
    }
    if(count<0){
        cout<<-1<<"\n";
    }
    else{
        cout<<count<<"\n";
        if(E==1){
            while(!st1.empty()){
                box reciever = st1.top();
                cout<<reciever.ch<<" "<<reciever.pos+1<<" "<<reciever.swap1+1<<" "<<reciever.swap2+1<<"\n";
                st1.pop();            
            }
        }
    }
    }
    return 0;
}