#include <cstdio>
using namespace std;
 
char *pattern;
int *table;
 
int main() {
        int t, count=1, len, i, j;
        scanf("%d", &t);
        while(t--) {
                scanf("%d", &len);
                pattern = new char[len+10];
                table = new int[len+10];
                scanf("%s", pattern);
                printf("Test case #%d\n", count++);
                table[0]=0;
				table[1]=0;
                for(i=2; i<=len; i++) {
                        j = table[i-1];
                        while(1) {
                                if(pattern[j]==pattern[i-1]) {
                                        table[i] = j + 1;
                                        break;
                                }
                                else if(!j) {
                                        table[i] = j;
                                        break;
                                }
                                else j = table[j];
                        }
                        if(table[i] && i%(i-table[i])==0) {
                                printf("%d %d\n", i, i/(i-table[i]));
                        }
                }
                printf("\n");
                }
        return 0;
}