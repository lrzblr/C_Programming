// define PERSON structure that stores name (with 10 chars), height and
// gender of a person in an efficient manner
// define an array with 3 items whose each element is PERSON
// get the information of the people from the user
// write the information
typedef struct 
{
	unsigned int gender:1;		//0-1
	unsigned int height:8;		//0-255
	char name[10];
}PERSON;

int main()
{
	PERSON array[3];
	int i, genderT, heightT;
	for (i=0;i<3;i++)
	{
		//scanf("%s %d %d",array[i].name,&genderT,&heightT);
		scanf("%s %d %d",array[i].name,&array[i].gender,&array[i].height);
		array[i].gender=genderT;
		array[i].height=heightT;
	}
	for (i=0;i<3;i++)
		printf("%s %d %d",array[i].name,array[i].gender,array[i].height);
	return 0;	
}

