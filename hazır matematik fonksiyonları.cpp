#include <stdio.h>
#include<math.h>
/* uslu sayı
int main () {
	
	int i;
	for(i=0;i<=7;i++) {
		printf("2 uzeri %d =%.f\n",i,exp2(i));
		
	}
	
	return 0;
	
}
*/
/* karekok
int main (){
	
	int i;
	for (i=1;i<=81;i++){
		printf("%d nin kare koku=%.3f\n",i,sqrt(i));
	}
	return 0;
}
*/
int main () {
	int number1,number2;
	printf("enter two number");
	scanf("%d%d",&number1,&number2);
	printf("%d uzeri %d =%.f",number1,number2,pow(number1,number2));
	return 0;

}