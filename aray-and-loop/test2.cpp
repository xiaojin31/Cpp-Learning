
#include<iostream>
int main(){
    int M,N;
    int i,j,c=0,s=0;
    std::cout<<"����M��N��"<<std::endl;
    std::cin>>M>>N;
    std::cout<<"\n";
    for(i=M;i<=N;i++)
    {
        int t=0;
        for(j=2;j<i;j++){
            if(i%j==0)
               {t++;
                break;}
        }
        if(t==0){
            c++;
            s+=i;
        }
    }
    std::cout<<M<<"��"<<N<<"������������"<<c<<std::endl;
    std::cout<<"\n"<<"������Ϊ��"<<s<<std::endl;
    return 0;
}
