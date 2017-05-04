#include <stdio.h>
#include <fcntl.h>
/*
	kiddo
*/
#define N char n[]={71, 114, 97, 99, 101, 95, 107, 105, 100, 46, 99, 0}
#define F int f=open(n, O_RDWR | O_CREAT, 0666)
#define M() int	main(void){N;F;char c[]="#include <stdio.h>%1$c#include <fcntl.h>%1$c/*%1$c%2$ckiddo%1$c*/%1$c#define N char n[]={71, 114, 97, 99, 101, 95, 107, 105, 100, 46, 99, 0}%1$c#define F int f=open(n, O_RDWR | O_CREAT, 0666)%1$c#define M() int	main(void){N;F;char c[]=%3$c%4$s%3$c;dprintf(f,c,10,9,34,c);return(0);}%1$cM()%1$c";dprintf(f,c,10,9,34,c);return(0);}
M()
