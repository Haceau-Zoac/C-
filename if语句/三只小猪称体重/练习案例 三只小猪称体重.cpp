# include <iostream>
# include <stdlib.h>
using namespace std;

int main(void)
{
    int A, B, C;
    cout << "����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�" << endl;
    cout << "������С��A�����أ� " << endl;
    cin >> A;
    cout << "������С��B�����أ� " << endl;
    cin >> B;
    cout << "������С��C�����أ� " << endl;
    cin >> C;

    if ( A > B && A > C )
    {
        cout << "С��A����" << endl;
    }
    else if ( B > A && B > C )
    {
        cout << "С��B����" << endl;
    }
    else
    {
        cout << "С��C����" << endl;
    }
//�𰸣�
    //1��������ֻС������ر���
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    //2�����û�������ֻС�������
    cout << "������С��A�����أ� " << endl;
    cin >> num1;

    cout << "������С��B�����أ� " << endl;
    cin >> num2;

    cout << "������С��C�����أ� " << endl;
    cin >> num3;

    cout << "С��A������Ϊ�� " << num1 << endl;
    cout << "С��B������Ϊ�� " << num1 << endl;
    cout << "С��C������Ϊ�� " << num1 << endl;

    //3���ж���ֻ����
    //���ж�A��B����
    if ( num1 > num2 ) //A��B��
    {
        if ( num1 > num3 ) //A��C��
        {
            cout << "С��A����" << endl;
        }
        else //C��A��
        {
            cout << "С��C����" << endl;
        }
    }
    else //B��A��
    {
       if ( num2 > num3 )
       {
           cout << "С��B����" << endl;
       }
       else
       {
           cout << "С��C����" << endl;
       }
    }

    system("pause");

    return 0;
}
