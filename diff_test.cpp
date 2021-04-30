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
   int fd1 = open("/media/sf_OS/tmp1", O_APPEND);
   int fd2 = open("/media/sf_OS/tmp2", O_APPEND);
   if (fd1 < 0 || fd2 < 0)
   {
       perror("diff"); //  bad path/s
       return 1;
   }
   
   else // good paths
   {
       char* text2 = new char[1];
       char* text1 = new char[1];
       int bytes1 = 1;
       int bytes2 = 1;
       
       while (bytes1 > 0 && bytes2 > 0)
       {
           bytes1 = read(fd1, text1, 1);
           bytes2 = read(fd2, text2, 1);
           if (bytes1 < 0 || bytes2 < 0)
           {
               perror("diff"); //  bad reads
               return 1;
           }

           if ((string)text1 != (string)text2)
           {
               cout << "1" << endl;
               return 0;
           }

       }

       cout << "0" << endl;
       delete text1;
       delete text2;
   }	
}
