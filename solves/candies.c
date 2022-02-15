#include <stdio.h>
#include <math.h>

int main(){
    int T;
    scanf("%d", &T);
    // T = Test cases
    while(T>0){
        int N, M;
        scanf("%d %d", &N, &M);
        // N = total candy bags
        // M = total kids

        int i = N;
        unsigned int C[i];
        scanf("%d", &C[i]);
        for(i=0; i=N; i++){
            int candies = 0;
            candies += C[i];
            int cm = candies / M;
        
            int cr = candies - M*cm;
            printf("Case #%d: %d", T, cr);
        }
        T--;
    }
    
    return 0;
}