vector<int> Solution::lszero(vector<int> &A) {
    int n=A.size(),sum=0;
    vector<int>ans;
    unordered_map<int,int>mp;
    mp[0]=-1;
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(mp.find(sum)!=mp.end()){
            
            if(i-mp[sum]>ans.size()){
                
                ans=vector(A.begin()+mp[sum]+1,A.begin()+i+1);
            }
        }else
        {
        mp[sum]=i;
            
        }
    }
    return ans;
}
