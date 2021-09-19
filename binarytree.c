#include<conio.h>
#include<stdio.h>
int arr[100],count;
void main()
{
    int i,num,choice;
    count=0;
    for(i=0;i<100;i++)
    {
        arr[i]=0;
        do
        {
            printf("enter your choice \n1.Insert into tree \n2.Delete from tree \n3.Search for an element \n4.Inorder Traversal\n");
            printf("5. exit\n");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("Enter element");
                scanf("%d",&num);
                arr[count]=num;
                count++;
                break;
                case 2:
                    printf("Enter element to delete");
                    scanf("%d",&num);
                    for(i=0;i<count;i++)
                    {
                        if(arr[i]==num)
                        {
                            count--;
                            arr[i]=arr[count];
                            arr[count]=0;
                            break;
                        }
                    }
                    if(i==count)
                        printf("\nElement not found");
                        break;
                case 3:
                 printf("\nEnter the element to be searched");
                 scanf("%d",&num);
                 for(i=0;i<count;i++)
                 {
                     if(arr[i]==num)
                     {
                         printf("\nElement found");
                         break;
                     }
                 }
                 if(i==count)
                     printf("\nElement not found");
                     break;
                case 4:
                    inorder(0);
                    break;
            }
        }while(choice!=5);
        getch();
    }
}
void inorder(int pos)
{
    int i,j;
    i=2*pos+1;
    if(arr[i]!=0)
        inorder(i);
    printf("\t%d",arr[pos]);
    j=2*pos+2;
    if(arr[j]!=0)
        inorder(j);
}
