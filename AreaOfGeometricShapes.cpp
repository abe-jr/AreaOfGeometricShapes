    #include<iostream>
    #include<windows.h>
    using namespace std;
    #define pi 3.141592654
    #define full 2.0
     
    int square(int x)
    {
    return x*x;
    }
     
    class Area{
     
        int X,Y;    
        public:
        Area(int x,int y):X(x),Y(y){} 
        
        float circle(int x,int y)    
        {
            cout<<"ntttArea of the Circle is :";
            return pi*square(x);
        }
     
        float rectangle(int l,int w) 
        {
            cout<<"ntttArea of the Rectangle is :";
            return l*w;
        }
     
        float triangle(int b,int h)    
        {
            cout<<"ntttArea of the Triangle is :";
            return (b*h)/full;
        }
    }; 
     
    void fun() 
    {
        Sleep(2000);cout<<"nntttReturning to Menu";
        for (int i=0;i<=5;i++)
        {
            cout<<" .";
            Sleep(400);
        }
        system("cls");
    } 
     
   
    int main(void)
    {
        int first,second,choice;
        cout<<"nEnter the first argument :";cin>>first;
        cout<<"nEnter the second argument :";cin>>second;
        system("cls");
        Area instance(first,second); 
     
        while (1) {  
     
                    cout << "nttt --------------MENU ------------ " << endl
                    << "ttt      Press 1. Area of Circle " << endl
                    << "ttt      Press 2. Area of Rectangle" << endl
                    << "ttt      Press 3. Area of Triangle" << endl
                    << "ttt      Press 4. To Exit " << endl
                    << "nttt ------------------------------- " << endl
                    << "tttYour Choice :";
            cin>>choice;
            switch(choice){     
                case 1:
                cout<<instance.circle(first,second);fun();       
                break;
                case 2:
                cout<<instance.rectangle(first,second);fun(); 
                break;
                case 3:
                cout<<instance.triangle(first,second);fun();    
                break;
                case 4:
                exit(1);
                break;
                default:
                cout<<"Wrong Input ";
            }
        }
        return 0;
    }