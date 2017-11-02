//用来学习动态规划的。
//不懂为什么出现问题 corrupted double-linked list:
char* longestPalindrome(char* s) {
    int size=strlen(s);
    //维护一个二维数组，用于查询
    int ** dp=(int **)malloc(sizeof(int *)*size);
    for(int i=0;i<=size;i++){
        dp[i]=(int *)malloc(sizeof(int) *size);
        memset (dp[i], 0, sizeof (dp[i]));
    }

    int left = 0, right = 0, len = 0;
    
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < i; ++j) {
            //关键公式 dp[j][i] 用于记录j到i是否存在回文字符串
            //s[i] == s[j]判断是否相等，(i - j < 2 || dp[j + 1][i - 1])判断是否之前是否满足条件
            dp[j][i] = (s[i] == s[j] && (i - j < 2 || dp[j + 1][i - 1]));
            //判断长度，记录左右值
            if (dp[j][i] && len < i - j + 1) {
                len = i - j + 1; 
                left = j; //记录左边 
                right = i; //记录右边
            }
        }
        dp[i][i] = 1;
    }

    
    char *ans=(char *)malloc(right-left+1);
    strncpy(ans, s+left, right-left+1);
    return ans;
    
}
