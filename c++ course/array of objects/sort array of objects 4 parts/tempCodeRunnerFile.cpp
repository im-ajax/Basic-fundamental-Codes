
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name>>a[i].id>>a[i].bangla_marks>>a[i].math_marks;
        a[i].sum=a[i].bangla_marks+a[i].math_marks;
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {