// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

#if 1

#define PERIOD_JSON \
"{"\
"\"type\":\"upload\","\
"\"timestamp\":\"%d\","\
"\"reason\":\"period\","\
"\"body\":[{"\
"\"reg_addr\":\"%d\","\
"\"data_length\":\"%d\","\
"\"switch\":\"%d\","\
"\"raw_data\":\"%d\"},"\
"\{"\
"\"reg_addr\":\"%d\","\
"\"data_length\":\"%d\","\
"\"switch\":\"%d\","\
"\"raw_data\":\"%d\"},"\
"\{"\
"\"reg_addr\":\"%d\","\
"\"data_length\":\"%d\","\
"\"switch\":\"%d\","\
"\"raw_data\":\"%d\"},"\
"\{"\
"\"reg_addr\":\"%d\","\
"\"data_length\":\"%d\","\
"\"switch\":\"%d\","\
"\"raw_data\":\"%d\"},"\
"\{"\
"\"reg_addr\":\"%d\","\
"\"data_length\":\"%d\","\
"\"switch\":\"%d\","\
"\"raw_data\":\"%d\"},"\
"\{"\
"\"reg_addr\":\"%d\","\
"\"data_length\":\"%d\","\
"\"switch\":\"%d\","\
"\"raw_data\":\"%d\"}]"\
"}"
#else

#define PERIOD_JSON \
"{"\
"\"type\":\"upload\","\
"\"timestamp\":\"%d\","\
"\"reason\":\"period\","\
"\"body\":[{"\
"\"reg_addr\":\"%d\","\
"\"data_length\":\"%d\","\
"\"switch\":\"%d\","\
"\"raw_data\":\"%d\"}]"\
"}"

#endif

 static void shellSort(int arr[],int n) {

	int i, len = n / 2;
	int count = 1;
	while (len >= 1) {
		for (i = len; i < n; i++) {//从当前增量位置开始往后循环，往前每隔len个就是同一个子序列的元素
			if (arr[i] < arr[i - len]) {//前面已经有序，若最后一个比a[i]还小，说明a[i]已经在合适的位置了，大大减小循环量
				//在排序好的子序列里找位置
				int temp = arr[i];//a[i]在while第一次循环值就会改变，所以要用临时变量记录下来，因为之后在子序列里给他找位置肯定是和他比较
				int k = i - len;
				while (k >= 0 && arr[k] > temp) {
					//已经排序好的子序列肯定是有序的，这里只是给a[i]找到合适的位置，每次比a[i]大的元素向后移动一个位置，然后把这个位置留给a[i]
					arr[k + len] = arr[k];//这里就是向后移动一个位置
					k -= len;//然后下标向前移动，判断是否还是比a[i]大，是的话就继续后移
				}
				arr[k + len] = temp;//最后把a[i]放到合适的位置
			}
		}
	//	std::cout <<"第" + count++ + "趟排序，结果为"<< Arrays.toString(arr));
		len /= 2;
	}
}
typedef union d
 {
	 int e;
	 int f;
	 char g;
 };

 typedef struct
 {
	 char a;
	 int b;
	 char c[7];

	 d  dd;
 }MyType;

 static char g_device_id[17] = { "2018081500000001" };
 unsigned char g_device_id2[8] = {0x20,0x20,0x01,0x06,0x00,0x00,0x00,0x01};

 void get_device_id(unsigned char *sn)
 {
	 sscanf(g_device_id, "%02d%02d%02d%02d%02d%02d%02d%02d",
		 &sn[0], &sn[1], &sn[2], &sn[3], &sn[4], &sn[5], &sn[6], &sn[7]);
 }

 typedef void (*FUNC)(void);
 FUNC void_fun_void = NULL;

 void myprintf(void)
 {
	 std::cout << "hello";
 }


int main()
{
    //std::cout << "Hello World!\n"; 

#if 0
	// 移位去掉 0xFE
	unsigned short nRecvLen = 255;
	unsigned short j = 0;
	unsigned char buffer[] = { 0xFE,0xFE,0xFE,0xFE,0x68,0x12,0x11,0x00,0x00,0x00,0x00,0x68,\
		0x11,0x04,0x00,0x01,0x01,0x01,0xD7,0x16 };

	while (buffer[0] == 0xFE)
	{
		for (j = 0; j < nRecvLen; j++)
			buffer[j] = buffer[j + 1];
		nRecvLen--;
	}

	for (j = 0; j < nRecvLen; j++)
	{
		printf("buffer[%d] = %02x\r\n",j,buffer[j]);
	}

	// 理解 sscanf函数
	get_device_id(g_device_id2);
	for (int i = 0; i < (sizeof(g_device_id2) / sizeof(g_device_id2[0])); i++)
	{
		printf("g_device_id2[%d] = %d\r\n",i, g_device_id2[i]);
	}

	//调试组包Json字符串
	unsigned int len;
	//len = strlen(PERIOD_JSON);
	char buf[2048] = {0};
	sprintf(buf,PERIOD_JSON,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);
	len = strlen(buf);
	printf("%s",buf);
#endif
	void_fun_void = myprintf;




	return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
