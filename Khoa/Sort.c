#include <stdio.h>
int main()
{ 
    int a[6]= {67,3,9,2,34,5};
    int b;
    int c;
    int tempd;
    
        for( b = 0; b < 6; b++)
            {
                printf( "so bien da nhap la[%d]: %d\n", b);
            }
    comback:
    printf("\n => 1 sap xep so da nhap tang dan\n");
    printf("\n => 2 sap xep so da nhap giam dan\n");
     
    int chose;
    
    printf("\n xin moi ban chon cach sap xep\n");
    scanf("%d",&chose);
        switch (chose)
        {
            case 1:
                for (b = 0; b < 6-1; b++) 
                {
                    for(c=b; c<6; c++)
                    {
                        if (a[b]>a[c])
                        {
                            tempd=a[b];
                            a[b]=a[c];
                            a[c]= tempd;
                        }
                    }
                }
            // Xuất Màn hình    
            printf(" Ket qua ban chon tang dan\n");
                for( b = 0; b < 6; b++)
                {
                    printf("%d\n",a[b]);
                }
                break;
            case 2:
                for(b=0; b<6-1; b++)
                {
                    for (c = b; c<6; c++)
                    {
                        if (a[b]<a[c])
                        {
                            tempd=a[b];
                            a[b]=a[c];
                            a[c]= tempd;
                        }
                    }
                }
            // Xuất Màn hình    
            printf(" Ket qua ban chon giam dan: \n");
                for( b = 0; b < 6; b++){
                    printf("%d\n",a[b]);
                }
            break;
        default:
            break;
        }
        goto comback;
    return 0;
}