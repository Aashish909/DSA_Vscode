  int i=0, j=0, k=0;

    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n)  //copying rest element in arr1
    {
        arr3[k++]=arr1[i++];
    }
    while(j<m)   //copying rest element in arr2
    {
        arr3[k++]=arr2[j++];
    }
}