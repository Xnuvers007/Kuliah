    int i, j, baris;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;

    for(i=0; i<baris; i++)
    {
        for(j=0; j< (2*baris); j++)
        {
            if(i >= j)
                cout << "*";
            else
                cout << " ";
            if(i >= (2*baris-1)-j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }