/*#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i=0;
	int genhao;
	genhao=sqrt(n);
	if(n<=1)
	{
		return 0;
	}
	else 
	{
	  for(i=2;i<=genhao;i++)
	    {
			if(n%i==0) return 0;
	
		}
	  	
	}
	return 1;
}
int main()
{
	int z = 0;
	printf("������һ��������");
	scanf("%d",&z);
	if(prime(z))
	{
	  printf("YES\n");	
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}*/
//2���������10�������洢������a[10]�У�
//Ҫ��������ܱ�2�����������ΪT���������ΪF����Ǵ洢���ַ�����b[10]��
//�±���ͬ�Ķ�Ӧλ�á��Ա�д����ʵ�����Ϲ��ܣ�������������顣
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[10],i;
   char b[10]={'T','F'};
   for(i=0;i<=9;i++)
   {
   	int suiji;
   	suiji=rand();
   	a[i]=suiji ;
   }
   for(i=0;i<=9;i++)
   {
   	   if(a[i]%2==0)
   	   {
		  b[i]=b[0];
	   }
	   else 
	   {
	   	b[i]=b[1];
	   }
   }
   for(i=0;i<=9;i++)
   {
   	printf("%d %c\n",a[i],b[i]);
   }
   	return 0;
}*/
//3����д����ʵ�����¹��ܣ�����һ������f��׳�n! ��
//���������е���f����1��+2��+3��+4��+5����ֵ�������
//��Ҫ�����ʹ�ú�������͵�����ɡ���
/*#include<stdio.h>

int f(int jiech)
{
	int i=1,b=1;
	for(i=1;i<=jiech;i++)
	{
		b*=i;
	}
	return b;
}
int main()
{
	int n = 0,i=1,ret;
	printf("������һ��һ������:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ret+=f(i);
	}
	printf("%d",ret);
  return 0;	
}*/
//������2.0�汾
/*#include<stdio.h>

int f(int i) {
    int result = 1;
    for (int a = 1; a <= i; a++) {
        result *= a;
    }
    return result;
}

int main() {
    int n = 0;

    for (int num = 1; num <= 5; num++) {
        n += f(num);
    }

    printf("1! + 2! + 3! + 4! + 5! = %d\n", n);

    return 0;
}*/

//4���������10���������洢������a[10]��,Ҫ����ú���������a�е����������С����еķ����ǽ�ż�������������,��������������Ҳ���
//����:ԭ����Ϊ21 34 224 25 367 41 736 37 42  456
//���ź�Ϊ34 224 736 42 456 37 41 367 25 21

//������
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i = 0;
	for(i=0;i<=9;i++)
	{
		int suiji;
		suiji = rand();
		a[i]=suiji;
	}
	int mid;
	mid =(sizeof(a)/sizeof(a[0])) /2;
	 for(i=0;i<=9;i++)
	 {
	 	if(a[i]%2==0)
	 	{
		 i=mid-1;	
		}
		else
		{
		  i=mid+1;	
		}
	 }
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10];
    int i = 0;

    // �������10��������
    for (i = 0; i < 10; i++) {
        int suiji = rand();
        a[i] = suiji;
    }

    // ���ԭʼ����
    printf("ԭʼ���飺\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    // �����������飬��ż�������󲿣����������Ҳ�
    int left = 0, right = 9;  // ����ָ��

    while (left < right) {
        // �ҵ��������Ƶ����
        while (left < 10 && a[left] % 2 == 0) {
            left++;
        }

        // �ҵ�ż�����Ƶ��Ҳ�
        while (right >= 0 && a[right] % 2 != 0) {
            right--;
        }

        // ����ż��������
        if (left < right) {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
    }

    // ����������к������
    printf("\n�������к�����飺\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0��
    }*/
    //5����д����ʵ�����¹��ܣ����10-100֮��Ŀ���������
	//���һ�����������ķ�����������������Ƹ���Ϊ������������17��������17�ķ�����71Ҳ������
	//���17����һ��������������Ҫ�����ʹ�ú�������͵��ã�

/*#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i=0;
	int genhao;
	genhao=sqrt(n);
	if(n<=1)
	{
		return 0;
	}
	else 
	{
	  for(i=2;i<=genhao;i++)
	    {
			if(n%i==0) return 0;
	
		}
	  	
	}
	return 1;
}
void fxs(int su[])
{
	int n = 0,i ;
	for(n =0;n<90;n++)
	{
		int num,jilu=1;
		num = sqrt(su[n]);
		for(i=1;i<=num;i++)
		{
			if(su[n]%2==0||su[n]%i==0)
			{
			jilu=0;
			continue;
			}
			else
			{
                int a,b,m;
                a = su[n]%10;
                b = su[n]/10;
                m =a*10+b;
                if(prime(m)==1)
                {
					printf("%d  ",su[n]);
				}
			}
		}
	
	}
	
	
}


int main()
{
	int su[90];
	int i = 11;
	int n = 0;
	for(i=11;i<100;i++)
	{
	    su[n] =i;
		n++;
	}
	fxs(su);
	return 0;
}*/
//�򻯺�汾
/*#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void fxs() {
    for (int n = 11; n < 100; n++) {
        int a = n % 10;
        int b = n / 10;
        int m = a * 10 + b;

        if (isPrime(n) && isPrime(m)) {
            printf("%d\n", n);
        }
    }
}

int main() {
    fxs();
    return 0;
}*/


/*#include <stdio.h>

int isPrime(int num);
int reverseNumber(int num);

int main() {
    printf("10��100֮��Ŀ���������\n");

    for (int i = 10; i <= 100; i++) {
        if (isPrime(i) && isPrime(reverseNumber(i))) {
            printf("%d\n", i);
        }
    }

    return 0;
}

// �ж��Ƿ�Ϊ�����ĺ���
int isPrime(int num) {
    if (num < 2) {
        return 0;  // ��������
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // ��������
        }
    }

    return 1;  // ������
}

// ���㷴�����ĺ���
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}*/

































