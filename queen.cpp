#include<iostream>
using namespace std;
int const MAX = 20000;
int qX[MAX], qY[MAX], front = 0, rear = -1;
int T, N;
int MAP[205][205], visit[205][205];

void push(int x, int y){
    if(rear == MAX-1) rear=-1;
    rear++;
    qX[rear] = x;
    qY[rear] = y;
}

void pop(){
    front++;
}

bool isEmpty(){
    return (front > rear);
}

void Init(){
    rear = -1;
    front = 0;
}
void reset(){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++) visit[i][j]=0;
    }
}

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

bool check(int x, int y){
    return(x>=0 && x<N && y>=0 && y<N);
}

int BFS(int xs, int ys, int xe, int ye){
    int ans=0;
    visit[xs][ys] = 1;
    push(xs, ys);

    while(!isEmpty()){
        int x = qX[front];
        int y = qY[front];
        pop();

        if(x == xe && y == ye){
            ans = visit[x][y] - 1;
            break;
        }

        for(int i=0; i<4; i++){
            int x_next = x + dx[i];
            int y_next = y + dy[i];

            if(check(x_next, y_next) && MAP[x_next][y_next]!=0 && visit[x_next][y_next] == 0){
                visit[x_next][y_next] = visit[x][y] + 1;
                push(x_next, y_next);
            }
        }
    }

    return ans;
}

int main(){
    freopen("queen.txt", "r", stdin);
    cin>>T;
    for(int tc=1; tc<=T; tc++){
        
        cin>>N;
        int xp, yp;
        int ans = 0;

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++) {
                cin>>MAP[i][j];
                if(MAP[i][j]==2){
                    xp = i;
                    yp = j;
                }
            }
        }
        bool kiemtra = true;
        Init();
        reset();
        int way1 = BFS(0, 0, xp, yp);
        if(way1==0){
            kiemtra = false;
        }
        ans += way1;
        
        Init();
        reset();
        int way2 = BFS(xp, yp, N-1, N-1);
        if(way2==0){
            kiemtra = false;
        }
        ans += way2;

        if(!kiemtra) cout<<"-1"<<endl;
        else cout<<ans<<endl;
        
    }
    return 0;
}