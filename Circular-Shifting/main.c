unsigned int rcshift(unsigned int, unsigned int);
unsigned int lcshift(unsigned int, unsigned int);

int main(void){
	unsigned int n = 0xAABBCCDD;
	unsigned int num = 4;

	printf("Before: %x\n", n);
	n = rcshift(n, num);
	printf("After right: %x\n", n);
	n = lcshift(n, num * 2);
	printf("After left: %x\n", n);
    getchar();
	return 0;
}

unsigned int rcshift(unsigned int number, unsigned int shifts)
{
	unsigned int mask = ~0;
	unsigned int temp = 0;

	// Add your code here  
	/* Adjust mask to map to left most bits to be moved to right */ 
	mask >>= shifts;
	/* Store bits to be masked in temp */ 
	temp |= mask;
	/* Do right shift for original number */ 
	number <<= shifts;
	/* Store bits stored in temp in the right most bits location of number */ 
	number |= temp;
	// End of your code 

	return number;
}

unsigned int lcshift(unsigned int number, unsigned int shifts){
	unsigned int mask = ~0;
	unsigned int temp = 0;

	// Add your code here  
	/* Adjust mask to map to right most bits to be moved to left */ 
	mask <<= shifts;
	/* Store bits to be masked in temp */ 
	temp |= mask;
	/* Do left shift for original number */ 
	number >>= (shifts);
	/* Store bits stored in temp in the left most bits location of number */ 
	number |= temp;
	//Left(n << d)|(n >> (32 - d))
	// End of your code 
	
	return number;
}