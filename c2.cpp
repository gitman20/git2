      while(l+1<r)
      {
        temp=(l+r)/2;

        lk1=0,lk2=0;
    
       if(check2(temp))
         l=temp;
       else
        r=temp;
      }
    
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt","w", stderr);
   #endif
