//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,m,i;
//    scanf("%d%d",&n,&m);
//    int arr[n*m];
//    for(i=0;i<n*m;i++)
//        scanf("%d",&arr[i]);
//    for(i=0;i<n*m;i++)
//    {
//        if(i%m==0)
//            printf("\n");
//        if(i!=n*m-1&&(i+1)%m!=0)
//           printf("%d ",arr[i]);
//        else
//            printf("%d",arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,m,i,j;
//    scanf("%d%d",&n,&m);
//    int arr[n][m];
//    for(i=0;i<n;i++)
//        for(j=0;j<m;j++)
//            scanf("%d",&arr[i][j]);
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//            printf("%d ",arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,m,i,j,max=0,maxi,maxj;
//    scanf("%d%d",&n,&m);
//    int arr[n][m];
//    for(i=0;i<n;i++)
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr[i][j]);
//            if(arr[i][j]>=max)
//            {
//                max=arr[i][j];
//                maxi=i+1;
//                maxj=j+1;
//            }
//        }
//    printf("%d %d",maxi,maxj);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,m,i,j;
//    scanf("%d%d",&n,&m);
//    int arr1[n][m],arr2[n][m];
//    for(i=0;i<n;i++)
//        for(j=0;j<m;j++)
//            scanf("%d",&arr1[i][j]);
//    for(i=0;i<n;i++)
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr2[i][j]);
//            if(arr2[i][j]!=arr1[i][j])
//            {
//                j=-1;
//                break;
//            }
//        }
//    if(j==-1)
//        printf("No\n");
//    else
//        printf("Yes\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    scanf("%d",&n);
//    int arr[n][n];
//    for(i=0;i<n;i++)
//        for(j=0;j<n;j++)
//        {
//            scanf("%d",&arr[i][j]);
//            if(i>j&&arr[i][j]!=0)
//            {
//                j=-1;
//                break;
//            }
//        }
//    if(j==-1)
//        printf("NO\n");
//    else
//        printf("YES\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,m,i,j;
//    scanf("%d%d",&n,&m);
//    int arr[n][m];
//    for(i=0;i<n;i++)
//        for(j=0;j<m;j++)
//            scanf("%d",&arr[i][j]);
//    for(i=0;i<m;i++)
//    {
//        for(j=0;j<n;j++)
//            printf("%d ",arr[j][i]);
//        printf("\n");
//    }
//    return 0;
//}
