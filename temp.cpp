bool check(int x)
{
  return true;
else
  return false;
}

int bsearch(int l, int r)
{
  int mid; 

  while(l+1<r)
  {
    mid=(l+r)/2;

   if(check(mid))
     l=mid;
   else
    r=mid;
  }

  int ans=-1;

    rep(i,l,r+1)
    {
        if(check(i))
        ans=max(ans,i);
    }

  return ans;
}