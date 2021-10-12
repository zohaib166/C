char *decimal2anybase(int num10, int base)
{
	int rem=1;
	int i=0,j=0;
	int temp[20];
	static char str[20];

	while(num10>0)
	{
		if(base>16)
			return "INVALID INPUT";
		rem = num10%base;
		num10 = num10/base;
		temp[i] = rem;
		i++;
	}
	i--;
	while(i>=0)
	{
		if(temp[i]<10)
			str[j] = (char)(temp[i]+48);

		else if(temp[i]==10)
			str[j]='A';
		else if(temp[i]==11)
			str[j]='B';
		else if(temp[i]==12)
			str[j]='C';
		else if(temp[i]==13)
			str[j]='D';
		else if(temp[i]==14)
			str[j]='E';
		else if(temp[i]==15)
			str[j]='F';
		j++;i--;
	}
	//printf("j=%d\n", j);
	str[j] = '\0';
	if(str!='\0')
		return str;
	else
		return "ERROR";
}
