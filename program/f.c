
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	printf("int range %d of %d bit width %ld\n",INT_MIN,INT_MAX,sizeof(int)*8);
	printf("float range %f of %f bit width %ld\n",FLT_MIN,FLT_MAX,sizeof(float)*8);
	printf("double range %f of %f bit width %ld\n",DBL_MIN,DBL_MAX,sizeof(double)*8);
	printf("char range %d of %d bit width %ld\n",CHAR_MIN,CHAR_MAX,sizeof(char)*8);
}
