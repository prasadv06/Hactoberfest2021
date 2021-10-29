#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head, *temp, *newnode;
int length()
{
    int count = 0;
    temp = head;
    while (temp)
    {
        count = count + 1;
        temp = temp->link;
    }
    return count;
}
void delete_from_start()
{
    struct node *curr;
    if (head == NULL)
    {
        printf("list is empty\n");
        return;
    }
    else
    {
        curr = head;
        head = head->link;
        printf("%d to be deleted\n", curr->data);
        free(curr);
    }
}
void delete_from_end()
{
    struct node *curr, *prev;
    if (head == NULL)
    {
        printf("list is empty\n");
        return;
    }
    else if (head->link == NULL)
    {
        curr = head;
        head = NULL;
        printf("%d to be deleted\n", curr->data);
        free(curr);
    }
    else
    {
        curr = prev = head;
        while (curr != NULL)
        {
            curr = curr->link;
            if (curr->link != NULL)
            {
                prev = prev->link;
            }
            else
            {
                break;
            }
        }
        prev->link = NULL;
        printf("%d to be deleted\n", curr->data);
        free(curr);
        temp = prev;
    }
}
void delete_from_pos(int pos, int count)
{
    struct node *curr, *prev;
    if (pos > count)
    {
        printf("You entered invalid position\n");
    }
    else
    {
        if (head->link == NULL)
        {
            curr = head;
            head = NULL;
            printf("%d to be deleted\n",curr->data);
            free(curr);
        }

        else
        {
            int i = 1;
            prev = head;
            while (i < pos - 1)
            {
                prev = prev->link;
                i++;
            }
            curr = prev->link;
            prev->link = curr->link;
            curr->link = NULL;
            printf("%d to be deleted\n", curr->data);
            free(curr);
            temp = prev;
        }
    }
}
void insert_at_start()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the Data\n");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        head = temp = newnode;
        head->link = NULL;
    }
    else
    {
        newnode->link = head;
        head = newnode;
    }
}
void insert_at_end()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the Data\n");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        head = temp = newnode;
        head->link = NULL;
    }
    else
    {
        temp->link = newnode;
        temp = newnode;
        temp->link = NULL;
    }
}
void insert_at_pos(int pos, int count)
{
    int i = 1;
    if (pos > count)
    {
        printf("position is invalid\n");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &newnode->data);
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->link;
            i++;
        }
        newnode->link = temp->link;
        temp->link = newnode;
    }
}
void display()
{
    if (head == NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        struct node *curr;
        curr = head;
        while (curr != NULL)
        {
            printf("%d\n", curr->data);
            curr = curr->link;
        }
    }
}

int main()
{
    int pos;
    int count;
    int ch;
    head = NULL;
    while (1)
    {
        printf("--------Linked list--------\n");
        printf("Enter the choices\n1. insert at start\n2. insert at end\n3. insert at position\n4. delete_from_start\n5. delete for end\n6. delete with position\n7. display\n8. exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 2:
            insert_at_end();
            break;
        case 7:
            printf("All items\n");
            display();
            break;
        case 4:
            delete_from_start();
            break;
        case 8:
            return 0;
        case 1:
            insert_at_start();
            break;
        case 3:
            count = length();
            if (count == 0)
            {
                printf("there is no items in list\n");
                break;
            }

            printf("Enter the position\n");
            scanf("%d", &pos);
            insert_at_pos(pos, count);
            break;
        case 5:
            delete_from_end();
            break;
        case 6:
            count = length();
            if (count == 0)
            {
                printf("list is empty\n");
                break;
            }
            printf("Enter the positon\n");
            scanf("%d", &pos);
            delete_from_pos(pos, count);
            break;
        default:
            printf("You entered wrong input\n");
            break;
        }
    }
}