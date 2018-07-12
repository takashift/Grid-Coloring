#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    int h=0, w=0, H, W, N, i, j, k=1;

    // スペース・改行の手前で一旦代入される。 
    scanf("%d", &H);
    scanf("%d", &W);
    scanf("%d", &N);

    int a[N+1];
    int map[H][W];
    int all = H * W;

    for(i=1; i<N+1; i++) {
        scanf("%d", &a[i]);
    }

    j=1;
    for(i=0; i<all; i++) {
        if(h%2 == 0) {
            map[h][w] = j;
            if(w == W-1) {
                h++;
            }
            else w++;
        }
        else {
            map[h][w] = j;
            if(w == 0) {
                h++;
            }
            else w--;
        }
        if(k==a[j]) {
            k = 1;
            j++;
        }
        else k++;
    }
    for(h=0; h<H; h++) {
        for(w=0; w<W; w++) {
            printf("%d ", map[h][w]);
        }
        printf("\n");
    }
}