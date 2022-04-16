#include <iostream>
using namespace std;

int main()
{

    //Prepare test

    long double s1;
    long double s2;
    long double ss1;
    long double ss2;
    long double fm;
    long double q;
    long double ns1;
    long double ns2;
    long double t1;
    long double t2;
    string a;
    string jt;
    bool sss1;

    //Begin
    cout<<"打工人姓名：--- ";
    cin>>a;
    cout<< "请输入"<<a<<"的工资（单位：元）：—————— ";
    cin>>s1;
    sss1=s1;

    if(s1<0)
    {
        cout<<"工资不可能是负的啦！";
    }

    if(sss1==false)
    {
        cout<<"工资为零？！，不是吧！";
    }
    //cout<<s1;
    fm=s1*0.175;
    //cout<<s1;
    //cout<<s2;
    q=3500;
    s1=s1-fm;

    if(s1<=q)
    {
        ss1=s1-fm;
    }

    else
    {
        ss1=s1-fm-q;
    }
    s2=s1;
    //cout<<s2;
    ss2=ss1;
    //cout<<s1<<" "<<s2;
    //cout<<ss1<<" "<<ss2;
    ns2=ns2;
    //Test 1

    if(ss1<=1500)
    {
        ns1=ss1*0.03;
        s1=s1-ns1;
        t1=s1;
        //cout<<s1;
        //cout<<s2;
    }

    if(ss1>1500&&ss1<=4500)
    {
        ns1=ss1-1500;
        ns1=ns1*0.1+1500*0.03;
        s1=s1-ns1;
        t1=s1;
        //cout<<s1;
    }

    if(ss1>4500&&ss1<=9000)
    {
        ns1=ss1-1500-3000;
        ns1=ns1*0.2+1500*0.03+3000*0.1;
        s1=s1-ns1;
        t1=s1;
        //cout<<s1;
    }

    if(ss1>9000&&ss1<=35000)
    {
        ns1=ss1-1500-3000-4500;
        ns1=ns1*0.25+1500*0.03+3000*0.1+4500*0.2;
        s1=s1-ns1;
        t1=s1;
        //cout<<s1;
    }

    if(ss1>35000&&ss1<=55000)
    {
        ns1=ss1-1500-3000-4500-26000;
        ns1=ns1*0.3+1500*0.03+3000*0.1+4500*0.2+26000*0.25;
        s1=s1-ns1;
        t1=s1;
        //cout<<s1;
    }

    if(ss1>55000&&ss1<=80000)
    {
        ns1=ss1-1500-3000-4500-26000-20000;
        ns1=ns1*0.35+1500*0.03+3000*0.1+4500*0.2+26000*0.25+20000*0.3;
        s1=s1-ns1;
        t1=s1;
        //cout<<s1;
    }

    if(ss1>80000)
    {
        ns1=ss1-1500-3000-4500-26000-20000-25000;
        ns1=ns1*0.45+1500*0.03+3000*0.1+4500*0.2+26000*0.25+20000*0.3+25000*0.35;
        s1=s1-ns1;
        t1=s1;
        //cout<<s1;
    }

    //Test 2

//cout<<ss2;
    if(ss2<=1500)
    {
        ns2=ss2*0.03-0;
        s2=s2-ns2;
        t2=s2;
        jt="第一阶梯税率(1/7)";
        //cout<<s2;
    }

    if(ss2>1500&&ss2<=4500)
    {
        ns2=ss2*0.1-105;
        s2=s2-ns2;
        t2=s2;
        jt="第二阶梯税率(2/7)";
        //cout<<s2;
    }

    if(ss2>4500&&ss2<=9000)
    {
        ns2=ss2*0.2-555;
        s2=s2-ns2;
        t2=s2;
        jt="第三阶梯税率(3/7)";
        //cout<<s2;
    }

    if(ss2>9000&&ss2<=35000)
    {
        ns2=ss2*0.25-1005;
        s2=s2-ns2;
        t2=s2;
        jt="第四阶梯税率(4/7)";
        //cout<<s2;
    }

    if(ss2>35000&&ss2<=55000)
    {
        ns2=ss2*0.3-2755;
        s2=s2-ns2;
        t2=s2;
        jt="第五阶梯税率(5/7)";
        //cout<<s2;
    }

    if(ss2>55000&&ss2<=80000)
    {
        ns2=ss2*0.35-5505;
        s2=s2-ns2;
        t2=s2;
        jt="第六阶梯税率(6/7)";
        //cout<<s2;
    }

    if(ss2>80000)
    {
        ns2=ss2*0.45-13505;
        s2=s2-ns2;
        t2=s2;
        jt="第七阶梯税率（7/7）";
        //cout<<s2;
    }

    //End

    if(t1!=t2)
    {
        cout<<"Error!";
    }

    if(t1==t2)
    {
        cout<<"四金： "<<fm<<" 元"<<endl;
        cout<<"应纳税额： "<<ns1<<" 元"<<endl;
        cout<<"税后工资："<<endl;
        cout<<"适用税率阶梯级数：（最高第七阶梯）---"<<jt<<endl;
        cout<<"计算结果test1： "<<t1<<" 元"<<endl;
        cout<<"计算结果test2： "<<t2<<" 元"<<endl;
        cout<<"计算成功！核对无误！"<<endl;
        cout<<endl;
        cout<<a<<"的税后工资为： "<<t1<<" 元"<<endl;
    }

    return 0;
}