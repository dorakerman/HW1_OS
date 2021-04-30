#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <list>
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main()
{
   int src_fd = open("/media/sf_OS/tmp1", O_APPEND);
   if (src_fd < 0)
   {
       perror("cp_src"); // src file does not exist
       return 1;
   }

   int dst_fd = open("/media/sf_OS/tmp5", O_CREAT | O_WRONLY);
   if (dst_fd < 0)
   {
       perror("cp_dst"); // dst cannot be opened
       return 1;
   }

   char* src_text = new char[100];
   int rd_bytes = 1;
   int wr_bytes;
   
   while (rd_bytes > 0)
   {
       rd_bytes = read(src_fd, src_text, 100);
       if (rd_bytes < 0)
       {
           perror("cp"); //  bad read
           delete src_text;
           return 1;
       }
       
       wr_bytes = write(dst_fd, src_text, rd_bytes);
       if (wr_bytes < 0 || wr_bytes != rd_bytes)
       {
           perror("cp"); // bad write
           delete src_text;
           return 1;
       }
   }

   delete src_text;
   return 0;
}
