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
	printf("请输入一个整数：");
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
//2．随机生成10个整数存储在数组a[10]中，
//要求把其中能被2整除的数标记为T，其他标记为F。标记存储在字符数组b[10]中
//下标相同的对应位置。试编写程序，实现以上功能，并输出两个数组。
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
//3、编写程序实现以下功能：定义一个函数f求阶乘n! ，
//在主函数中调用f计算1！+2！+3！+4！+5！的值并输出。
//（要求必须使用函数定义和调用完成。）
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
	printf("请输入一个一个整数:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ret+=f(i);
	}
	printf("%d",ret);
  return 0;	
}*/
//第三题2.0版本
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

//4、随机生成10个正整数存储在数组a[10]中,要求调用函数将数组a中的数重新排列。排列的方法是将偶数放在数组的左部,奇数放在数组的右部。
//例如:原数组为21 34 224 25 367 41 736 37 42  456
//重排后为34 224 736 42 456 37 41 367 25 21

//有问题
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

    // 随机生成10个正整数
    for (i = 0; i < 10; i++) {
        int suiji = rand();
        a[i] = suiji;
    }

    // 输出原始数组
    printf("原始数组：\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    // 重新排列数组，将偶数放在左部，奇数放在右部
    int left = 0, right = 9;  // 左右指针

    while (left < right) {
        // 找到奇数并移到左侧
        while (left < 10 && a[left] % 2 == 0) {
            left++;
        }

        // 找到偶数并移到右侧
        while (right >= 0 && a[right] % 2 != 0) {
            right--;
        }

        // 交换偶数和奇数
        if (left < right) {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
    }

    // 输出重新排列后的数组
    printf("\n重新排列后的数组：\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0；
    }*/
    //5、编写程序实现以下功能：输出10-100之间的可逆素数。
	//如果一个数及该数的反序数都是素数，则称该数为可逆素数。如17是素数，17的反序数71也是素数
	//因此17便是一个可逆素数。（要求必须使用函数定义和调用）

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
//简化后版本
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
    printf("10到100之间的可逆素数：\n");

    for (int i = 10; i <= 100; i++) {
        if (isPrime(i) && isPrime(reverseNumber(i))) {
            printf("%d\n", i);
        }
    }

    return 0;
}

// 判断是否为素数的函数
int isPrime(int num) {
    if (num < 2) {
        return 0;  // 不是素数
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // 不是素数
        }
    }

    return 1;  // 是素数
}

// 计算反序数的函数
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}*/

































