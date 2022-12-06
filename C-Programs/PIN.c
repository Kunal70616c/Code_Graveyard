#include<stdio.h>
#include<stdlib.h>

int main()
{
	int pin;
	printf("\n Enter PIN Code:");
	scanf("%d",&pin);
	switch(pin)
	{
		case 700001:
		case 732002:
		case 722075:
			printf("\n PIN Location: West Bengal");
			break;
		case 420007:
		case 400001:
		case 431202:
			printf("\n PIN Location: Maharastra");
			break;
		case 300013:
		case 320011:
			printf("\n PIN Location: Rajasthan");
			break;
		case 120001:
		case 130028:
			printf("\n PIN Location: Haryana");
			break;
		case 403001:
			printf("\n PIN Location: Goa");
			break;
		case 682007:
			printf("\n PIN Location: Lakshadweep");
			break;
		default:
			printf("\n PIN Code Not Recognized");
			break;
		}
	return 0;
}
