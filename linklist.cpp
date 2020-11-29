#include<iostream>
using namespace std;


class linklist
{
    private:
        struct node
        {
            int data;
            node *link;
        }*p;

    public:
        linklist();
        void append(int num);
        void display();
        void search(int key);
        int length();
        void insertbefore(int key, int newitem);
        void insertafter(int key, int newitem);
        void deletenode(int num);
        void bsort(int n);
};
linklist::linklist()
{
    p=NULL;
}
void linklist::append(int num)
{
    node *q,*t;
    if(p==NULL)
    {
        p=new node;
        p->data=num;
        p->link=NULL;
    }
    else
    {
        q=p;
        while(q->link!=NULL)
        {
            q=q->link;
        }
        t=new node;
        t->data=num;
        t->link=NULL;
        q->link=t;
    }
}
void linklist::display()
{
    node *q;
    for(q=p;q!=NULL;q=q->link)
    {
        cout<<q->data<<" ";
    }
    cout<<"\n";

}
int linklist::length()
{
    node *q;
    int n=0;
    for(q=p;q!=NULL;q=q->link)
    {
        n++;
    }
    return n;
}
void linklist::search(int key)
{
    int found=0;
    node *q;
    for(q=p;q!=NULL;q=q->link)
    {
        if(q->data==key)
        {
            found=1;
        }
    }
    if(found==0)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found";
    }

}
void linklist::insertbefore(int key,int newitem)
{
    node *newnode,*mid;
    int found;
    newnode = new node;
    newnode->data=newitem;
    if(p->data==key)
    {
        newnode->link=p;
        p=newnode;
        found=1;
    }
    else
    {
        mid=p;
        while((mid->link!=NULL)&&(mid->link->data!=key))
        mid=mid->link;
        if(mid->link!=NULL)
        {
            newnode->link=mid->link;
            mid->link=newnode;
            found=1;
        }
    }

    if(found==0)
    {
        delete newnode;
        cout<<"Item not found\n";
    }

}
void linklist::insertafter(int key,int newitem)
{
    node *mid,*newnode;
    newnode = new node;
    newnode->data = newitem;
    mid=p;
    while((mid != NULL) && (mid->data != key))
        {
            mid=mid->link;
        }
    if(mid!= NULL)
        {
            newnode->link = mid->link;
            mid->link = newnode;
        }
    else{
            delete newnode;
            cout<<"Item not found\n";
        }
}
void linklist::deletenode(int num)
{
    node *q, *m;
    q=p;
    if(q->data == num)
    {
        p = q->link;
        delete q;
        return;
    }
    else
    {
        m=q;
        while(q!=NULL)
        {
              if(q->data == num)
              {
                 m->link = q->link;
                 delete q;
                 return;
              }
            m=q;
            q=q->link;
        }

    }
    cout<<"Item not found\n";
}
void linklist::bsort(int n)
{
    int i, j, temp;
    node *q;
    for(i=1; i<n; i++)
    {
        for(j=0,q=p;j<n-i;q=q->link,j++)
        {

            if(q->data > q->link->data)
            {
                temp = q->data;
                q->data = q->link->data;
                q->link->data = temp;
            }
        }
    }
}

void menu()
{
    cout<<"Select any one or want to exit type end.\n";
    cout<<"1. Append\n";
    cout<<"2. Display\n";
    cout<<"3. Showing Length\n";
    cout<<"4. Search\n";
    cout<<"5. Insert Before a node\n";
    cout<<"6. Insert After a node\n";
    cout<<"7. Delete a node\n";
    cout<<"8. Sort a node\n";
}

int main()
{
    menu();
    string input;
    int x,n,key;
    linklist l;
    while(cin>>input)
    {
        if(input=="end")break;
        else if(input=="1")
        {
            cout<<"Input Data in Linked list.\n\Input -100 to terminate Inputing Data\n";
            while(1)
            {
                cin>>x;
                if(x==-100)
                {
                    break;
                }
                else
                {
                    l.append(x);
                }
            }
            cout<<"Data Input Complete";
        }
        else if(input=="2")
        {
            cout<<"Showing The Linked list : ";
            l.display();
        }
        else if(input=="3")
        {
            n=l.length();
            cout<<"The size of linked list : "<<n;
        }
        else if(input=="4")
        {
            cout<<"Input Data you want to search in Linked list : ";
            cin>>key;
            l.search(key);
        }
        else if(input=="5")
        {
            cout<<"Input the node : ";
            cin>>key;
            cout<<"Input the data you want to insert before a node : ";
            cin>>n;
            cout<<"Before Inserting the node : ";
            l.display();
            l.insertbefore(key,n);
            cout<<"After Inserting the node : ";
            l.display();
        }
        else if(input=="6")
        {
            cout<<"Input the node : ";
            cin>>key;
            cout<<"Input the data you want to insert after a node : ";
            cin>>n;
            cout<<"Before Inserting the node : ";
            l.display();
            l.insertafter(key,n);
            cout<<"After Inserting the node : ";
            l.display();
        }
        else if(input=="7")
        {
            cout<<"Input Data you want delete : ";
            cin>>n;
            cout<<"Before Deleting the node : ";
            l.display();
            l.deletenode(n);
            cout<<"After Deleting the node : ";
            l.display();
        }
        else if(input=="8")
        {
            n=l.length();
            cout<<"Before Sorting the node : ";
            l.display();
            l.bsort(n);
            cout<<"After Sorting the node : ";
            l.display();
        }
        cout<<"\n";
        menu();
    }

}
