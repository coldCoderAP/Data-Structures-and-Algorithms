while (i <= n)
    {
        int j = 1;

        char ch='A'+(n-i);
        while (j <= i)
        {
              
            cout << ch++;
            j++;
        }
        i++;
        cout << endl;
    }