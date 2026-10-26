class Solution {
    private:
    int a=0;
    void backtrack(int row,int n,int cols,int dia1,int dia2){
        if(row==n){
            a++;
            return ;
        }
        int free=((1<<n)-1)&(~(cols|dia1|dia2));
            while(free!=0){
                int w=free & -free;
                free-=w;
                backtrack(row+1,n,cols|w,(dia1|w)<<1,(dia2|w)>>1);
        }
    }
public:
    int totalNQueens(int n) {
        a=0;
        backtrack(0,n,0,0,0);
        return a;
    }
};