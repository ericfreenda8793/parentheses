#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int N=101;
int main()
{
    int length;
    scanf("%d",&length);
    char arr[N];
    scanf("%s",arr);
    // find the ()
long long ans=0;int bal=0;
for(int i=0;i<length;i++){
    if(arr[i]=='('){
        bal++;
       }
       else{
        bal--;
        if(arr[i-1]=='('){
            ans+=1*pow(2,bal);
           }
       }
}
printf("%lld\n",ans);

    return 0;
}
