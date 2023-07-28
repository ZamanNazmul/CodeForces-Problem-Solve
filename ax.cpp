   int n;
      cin >> n;
      int ans = 0 , ans1;
      for(int i = 1; i <= n; i++)
      {
        int a , q;
        cin >> a >> q;
        if(a <= 10)
        {
          if(q > ans){
            ans = q;
            ans1 = i;
          }
        }
      }
      cout << ans1 << endl;
    }
}