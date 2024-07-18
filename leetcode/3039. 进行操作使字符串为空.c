char* lastNonEmptyString(char* s) {
    int alphabet[26] = { 0 };
    int len = strlen(s);
    printf("%d\n",len);
    for (int i = 0; i < len; i++)
    {
        alphabet[s[i] - 'a']++;
    }
    printf("%d\n",alphabet['w'-'a']);
    int max = 0;
    int maxalphabet[26] = { 0 };
    int mx = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < alphabet[i])
        {
            max = alphabet[i];
            mx = 1;
        }
        else if (max == alphabet[i])
        {
            mx++;
        }
    }
    printf("%d\n",max);
    printf("%d\n",mx);
    char* ans = (char*)malloc((mx + 1) * sizeof(char));
    mx = 0;
    for (int i = 0; i < len; i++)
    {
        maxalphabet[s[i] - 'a']++;
        if (maxalphabet[s[i] - 'a'] == max)
            ans[mx++] = s[i];
    }
    ans[mx] = '\0';
    puts(ans);
    return ans;
}