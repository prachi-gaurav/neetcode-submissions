int n=s.length();
        int k=p.length();

        if(n<k)
            return {};

    vector<int> goal(26, 0);
    vector<int> curr(26, 0);
    vector<int> count;
    for(int i=0;i<k;i++) 
    {
        goal[p[i] - 'a']++; 
        curr[s[i] - 'a']++;   
    }
    int c=0;
    if(goal==curr) 
    {
        count.push_back(c);
        c++;
    }
    else 
        c++;
    for(int i=k;i<n;i++) 
    {
        char inc=s[i];
        char out=s[i-k];
        curr[out-'a']--;
        curr[inc-'a']++;
        if(goal==curr) 
        {
            count.push_back(c);
            c++;
        }
        else
            c++;
    }
    return count;