void change(int n, int m, NODE *head)
{
    int quotient[10010], remainder[10010];
    for(int i=0;i<10010;i++)
    {
        quotient[i]=remainder[i]=0;
    }
    int start = 0, end = 0;
    int isRing = 0;
    int num = n * 10;

    for (int i = 0;; i++)
    {
        quotient[i] = num / m;
        remainder[i] = num % m;

        for (int j = 0; j < i; j++)
        {
            if (quotient[j] == quotient[i] && remainder[j] == remainder[i])
            {
                start = j;
                end = i;

                isRing = 1;
                break;
            }
        }
        num = remainder[i] * 10;

        if (!num)
        {
            start = i + 1;
            break;
        }
        if (isRing)
        {
            break;
        }
    }

    NODE *l = head;
    for (int i = 0; i < start; i++)
    {

        NODE *q = (NODE *)malloc(sizeof(NODE));
        q->data = quotient[i];
        q->next = NULL;
        l->next = q;
        l = q;
    }

    if (isRing == 1)
    {
        NODE *temp = l;
        for (int i = start; i < end; i++)
        {
            NODE *q = (NODE *)malloc(sizeof(NODE));
            q->data = quotient[i];
            q->next = NULL;
            l->next = q;
            l = q;
        }
        l->next = temp->next;
    }
}
NODE *find(NODE *head, int *n)
{
    NODE *rabbit = head;
    NODE *turtle = head;
    *n = 0;
    while (rabbit)
    {
        if (rabbit->next)
        {
            turtle = turtle->next;
            (*n)++;
            rabbit = rabbit->next->next;
        }
        else
        {
            *n = 0;
            return NULL;
        }
        if (rabbit == turtle)
        {
            rabbit = head;
            while (rabbit != turtle) //括号内不能用!rabbit==turtle,!优先级高
            {
                rabbit = rabbit->next;
                turtle = turtle->next;
            }
            return rabbit;
        }
    }
    *n = 0;
    return NULL;
}