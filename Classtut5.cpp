#include<iostream>
using namespace std;
class Item
{
    public:
    float price[50];
    int code[50];
    void initialize()
    { 
        int i;
        for(int i=0;i<5;i++)
         {
        cout<<"\nItem Number "<<(i+1)<<endl;
        cout<<"Enter item Code "<<endl;
        cin>>code[i];
        cout<<"Enter Item Price "<<endl;
        cin>>price[i];
         }
       
    }
    int largestprice()
    {
       
       int large=price[0];
       for(int i=1;i<5;i++)
       {
        if(large<price[i])
        
            large=price[i];
        
        }
        cout<<"largest Price="<<large<<endl;
       return large;
   
       
    }
    void sumofprice()
    {
        float sum=0.0;
        for(int i=0;i<5;i++)
        {
            sum+=price[i];
        }
        cout<<"Sum of prices="<<sum<<endl;
        
    }
    void display()
    {
        for(int i=1;i<5;i++)
        {
            cout<<"\nitem Code"<<(i+1)<<endl;
            cout<<" \n"<<"Price list="<<price[i]<<endl;
            cout<<" "<<"Code= "<<code[i]<<endl;
        }
        
    }

};


int main(){
    int choice;
    char ch;
    float largest,sum;
    Item list;
    list.initialize();
    do{
    cout<<"Main Menu "<<endl;
    cout<<"1.Largest Price in List "<<endl;
    cout<<"2.Sum of List"<<endl;
    cout<<"3.Display the list"<<endl;
    cout<<"Enter you Choice!"<<endl;
    cin>>choice;
    list.code;
    list.price;
    switch (choice)
    {
    case 1:
    list.largestprice();
   
        break;
        case 2:
        list.sumofprice();
        break;
        case 3:
        list.display();
        break;

    
    default:
        break;
    }
    cout<<"Do you want to continue the process!"<<endl;
    cin>>ch;
    }
    while(ch=='y'||ch=='Y');
    
    

return 0;
}