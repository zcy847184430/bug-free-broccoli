
#include "config.h"

/*
函数名:mainInterface
功能:登录界面
传入参数:无
返回值:无
*/
int mainInterface()
{
   
		printf("-------------------------------------\n");
		printf("    欢迎进入聊天室      	      \n");
		printf("	   1.注册                    \n");
		printf("	   2.登陆			      \n");
		printf("	   3.帮助			      \n");
		printf("	   4.退出			      \n");
		printf("-------------------------------------\n\n\n");
}

/*
函数名:helpInterface
功能:主界面的帮助选项
传入参数:无
返回值:无
*/
int helpInterface()
{
   
		printf("-------------------------------------\n");
		printf("                 	      \n");
		printf("	                          \n");
		printf("        请在主界面选择操作      \n");
		printf("	            		      \n");
		printf("	            		      \n");
		printf("-------------------------------------\n\n\n");
}


/*
函数名:helpInterface
功能:主界面的帮助选项
传入参数:无
返回值:无
*/
void chatInterface(char userName[])
{
		printf("------------------------------------------\n");
		printf("你好，%s                       \n", userName);
		printf("	     1. 查看在线用户                 \n");
		printf("	     2. 私聊                         \n");
		printf("	     3. 群聊                         \n");
		printf("	     4. 查看聊天记录                 \n");
		printf("	     5. 退出                         \n");
		printf("请选择操作:                    \n");
		printf("------------------------------------------\n\n\n");
}

