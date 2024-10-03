
string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1,a1+n);
    sort(a2,a2+m);
    if(m>n)return "No";
    int i=0,j=0;
    while(i<n && j<m){
        if(a2[j] == a1[i]){i++;j++;}
        else if(a2[j] > a1[i])i++;
        else break;
    }
    if(j==m)return "Yes";
    return "No";
    
}
