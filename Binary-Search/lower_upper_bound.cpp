//Q1.) find the first occurrence of a element in a sorted array if present print the index else print -1
int ind = lower_bound(a,a+n,x)-a;
if(ind!=n && a[ind]==x) cout<<ind;
else cout<<-1

//Q2.) find the last occurrence of a element in a sorted array if present print the index else print -1
int ind =upper_bound(a,a+n,x)-a;
Ind--;
if(ind>=0 && a[ind]==x) cout<<ind;
else cout<<-1;

//Q3.) find the largest element smaller than x in a sorted array.if no number exists print -1;
int ind=lower_bound(a,a+n,x)-a;
Ind --;
if(ind>=0) cout<<arr[ind];
else cout<<-1;

//Q4.) find the smallest element greater than x in a sorted array.if no number exists print -1;
int ind=upper_bound(a,a+n,x)-a;
if(ind<n) cout<<arr[ind];
else cout<<-1;
