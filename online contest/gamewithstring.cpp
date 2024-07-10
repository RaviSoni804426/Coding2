string str;
    int len,i,k;

    while (cin >> str)
    {
        len = str.size();
        k = 0;

        for (i=0; i<len-1; i++)
        {
            if (str[i] == str[i+1])
            {
                ++k;
                str.erase(i,2);
                len = str.size();
                i = -1;
            }
        }

        if (k & 1)
            pf ("Yes");
        else
            pf ("No");

        pf ("\n");
    }

    bair_ho;
}