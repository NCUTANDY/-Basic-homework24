#include <stdio.h>
#include <stdlib.h>
struct couse
{
	char name[10];  
	int calculus;
	int computer;
	int program;
} p;

int main(void)
{
    FILE *pFile;
	printf("-------------------------------------------------\n");
	printf("          �ΰ�Ū�Ҧ�Ū��couse.txt(���c��)        \n");
	printf("-------------------------------------------------\n");
	printf("Ū�����e���G\n");
	pFile=fopen("couse.txt", "r");
        
    if (pFile==NULL)
    {
        printf("�ɮ׶}�ҥ���!!\n");
        exit(1);
	}   
    else
    {
    	while (fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.calculus, &p.computer, &p.program)!=EOF) 
    	    printf("%s\t %d\t %d\t %d", p.name, p.calculus, p.computer, p.program); 
	}
	printf("\n");
    fclose(pFile);
    system("pause");
    return 0;
}

