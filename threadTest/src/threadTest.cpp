    #include<iostream>
    #include<stdio.h>
    #include <string.h>

    using namespace std;
    int main()
    {
    	int i,j,thisone=0,m,a,n,res=0,num;
        char s[1000000];

        scanf("%d",&m);

        int * good = (int *)calloc(m,sizeof(int));
        for(i=1;i<=m;i++)
        {
            scanf("%d",&a);
            good[a]=1;
        }

        scanf("%d",&n);

       for(i=1;i<=n+1;i++)
        {
            num = 0,thisone = 0;
            gets(s);
            for(j=0; j < strlen(s);j++)
            {
                num=0;
                while(s[j]>='0'&&s[j]<='9')
                num = num*10 +(int)s[j++] - 48;
    			if(good[num]==1)
    				thisone++;
    			if(thisone == m)
    				continue;
            }
            if(thisone == m) res++;
       }
      cout << res << endl;
      return 0;
    }
