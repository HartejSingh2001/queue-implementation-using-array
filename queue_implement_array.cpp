
#include <iostream>

using namespace std;
# define n 5
int q[n];
int front=-1,rear=-1;
void enqu()
{
    int x;
    cout<<"Enter num ";
    cin>>x;
    if(rear==n-1)
    {
        cout<<"Overflow";
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        q[rear]=x;
    }
    else
    {
        rear++;
        q[rear]=x;
    }

}
void dequ()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Underflow";
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}
void display()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue empty";
    }
    else
    {
        int i;
    for(i=front;i<=rear;i++)
    {
        cout<<q[i]<<" ";
    }
    }
    
}
int main()
{
    while(1)
    {
        int ch;
        cout<<"Enter ch ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            enqu();
            break;
            case 2:
            dequ();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            
            default:
            cout<<"Wrong choice entered"<<" ";
        }
    }

    return 0;
}
