#include <iostream> 
using namespace std;
 
int main()
{
    int a,b,x,y; 
    while(true)  
    {
        cout << "�п�J�G��ơA��N�����@�ӽd��A���{���|��X�d�򤤪����:";
        cin >> a >> b ;
 
        if(b>a&&b>=2) 
        {
            cout << a << "~" << b << "��Ʀ�:"; 
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
            cout << b << "~" << a << "��Ʀ�:";
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
        cout << "��J�d�򦳻~�A�i��O�G�Ƭ۵��A�S�i��O�]���d��Ȥ������S�����";
        cout << endl ; 
    }
    system ("pause");
    return 0;
}
