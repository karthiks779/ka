

#include <stdio.h>
#include <time.h>
int  main()
{   
char a[20][20]={"gh","physics class","kannada","physics","maths","ip m","k"};

	time_t c;
time(&c);
	
	
time_t rawtime;
  struct tm * timeinfo;
  time( &rawtime );
  timeinfo = localtime( &rawtime );
  
  printf("%02d\n", timeinfo->tm_hour);
int i=timeinfo->tm_hour%10;
  	printf("%s",a[i]);
 

 		
    return 0;
}
