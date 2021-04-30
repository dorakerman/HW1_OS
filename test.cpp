#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <list>
#include <sys/stat.h>
#include <fcntl.h>
#include <linux/limits.h>
#include <sys/wait.h>
#include <sys/types.h>

using namespace std;

int main()
{
	int* wstatus;
	strtok
	int pid = fork();
	if (pid == 0)
	{
		cout << "child proc" << endl;

	}

	else
	{
		wait(wstatus);
		cout << "parent proc" << endl;
	}








//   int src_fd = open("/media/sf_OS/tmp1", O_APPEND);
//   if (src_fd < 0)
//   {
//       perror("cp_src"); // src file does not exist
//       return 1;
//   }
// 
//   int dst_fd = creat("/home/os/tmp5", S_IRWXU | S_IRWXG);
//   if (dst_fd < 0)
//   {
//       perror("cp_dst"); // dst cannot be opened
//       return 1;
//   }
// 
//   char src_text[100];
//   int rd_bytes = 1;
//   int wr_bytes;
//   
//   while (rd_bytes > 0)
//   {
//       rd_bytes = read(src_fd, src_text, 100);
//       if (rd_bytes < 0)
//       {
//           perror("cp"); //  bad read
//           return 1;
//       }
//       
//       wr_bytes = write(dst_fd, src_text, rd_bytes);
//       if (wr_bytes < 0 || wr_bytes != rd_bytes)
//       {
//           perror("cp"); // bad write
//           return 1;
//       }
//   }
// 
//   int fd1 = open("/media/sf_OS/tmp1", O_APPEND);
//   int fd2 = open("/home/os/tmp5", O_APPEND);
//   if (fd1 < 0 || fd2 < 0)
//   {
//	   perror("diff"); //  bad path/s
//	   return 1;
//   }
//
//   else // good paths
//   {
//	   char text2[100];
//	   char text1[100];
//	   int bytes1 = 1;
//	   int bytes2 = 1;
//
//	   while (bytes1 > 0 && bytes2 > 0)
//	   {
//		   bytes1 = read(fd1, text1, 100);
//		   bytes2 = read(fd2, text2, 100);
//		   if (bytes1 < 0 || bytes2 < 0)
//		   {
//			   perror("diff"); //  bad reads
//			   return 1;
//		   }
//
//		   if ((string)text1 != (string)text2)
//		   {
//			   cout << "1" << endl;
//			   return 0;
//		   }
//
//
//	   }
//	   cout << "0" << endl;
//   
//}


   return 0;
}
