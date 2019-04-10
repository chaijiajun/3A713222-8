#include <iostream> 
using namespace std;
 
int main()
{
    int a,b,x,y; 
    while(true)  
    {
        cout << "請輸入二整數，其將成為一個範圍，本程式會找出範圍中的質數:";
        cin >> a >> b ;
 
        if(b>a&&b>=2) 
        {
            cout << a << "~" << b << "質數有:"; 
            if (a<=2) 
            cout << "2" << " ";
            for(x=a;x<=b;x++) 
            {
                for(y=2;y<=x;y++) 
               {
                   if(x%y==0)
                    break; 
                   else if (x==y+1) 
                    cout << x << " "; 
                 }
            }
        }
        else if (a>b&&a>=2) 
        {
            cout << b << "~" << a << "質數有:";
            if (b<=2)
            cout << "2" << " ";
            for(x=b;x<=a;x++)
            {
                for(y=2;y<=x;y++)
                {
                    if(x%y==0)
                    break;
                    else if (x==y+1)
                    cout << x << " ";
                }
            }
        }
        else 
        cout << "輸入範圍有誤，可能是二數相等，又可能是因為範圍值內完全沒有質數";
        cout << endl ; 
    }
    system ("pause");
    return 0;
}
