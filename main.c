#include <stdio.h>
#include <string.h>
    void main()
{
	/*  函数，数组 地址 关系
	 *  指针加一向后偏移1，数组加一向后偏离1，对数组取&后加1跳过数组
	char *word = "hello,this is cs";
	printf("%p\n",word);
	printf("%p\n",&word+1);
	*/
	int a = 100;
	char *c = "jjdimefjmdeidmjfieifjemhello";
	int b = sizeof(a);
	printf("%d\n",b);
	printf("%ld\n",strlen(c));
        return;
}
