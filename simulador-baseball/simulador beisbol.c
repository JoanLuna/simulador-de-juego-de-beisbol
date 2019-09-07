#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
	int b,f,foul=0,bola=0,bo=0,strike=0,st=0,c1=0,c2=0,c3=0,c4=0,posicion[4],co=0,cf=0,carrera=0,out=0,entrada=1,pe1[9],pe2[9],i=1,tag=0;
	char e1[20], e2[20];
	printf("**** Juego de Beisbol de dos equipos simulado ****\n");
	printf("Inserte el nombre del equipo 1: ");
	scanf("%s",&e1);
	printf("Inserte el nombre del equipo 2: ");
	scanf("%s",&e2);
	posicion[1]=0;
	posicion[2]=0;
	posicion[3]=0;
	posicion[4]=0;
	srand(time(NULL));
	while(tag<19)
	{
		if(tag==0 || tag==2 || tag==4 || tag==6 || tag==8 || tag==10 || tag==12 || tag==14 || tag==16)
		{
			printf("\n            entrada %d\n",entrada);
			entrada=entrada+1;
		}
		else;
		if(tag==0 || tag==2 || tag==4 || tag==6 || tag==8 || tag==10 || tag==12 || tag==14 || tag==16)
		{
			printf("ENTRA EQUIPO: %s",e1);
		}
		else
		{
		printf("ENTRA EQUIPO: %s",e2);	
		}
	while(out<3)
	{
	b=rand()%5+1;
	switch(b)
	{
		case 1: printf("\n--!!!CONTACTO!!!\n");
		    f=rand()%2+1;
		    switch(f)
		    {
		    	case 1: printf("\n-----!!!Terreno Bueno!!!\n");
		    		f=rand()%6+1;
		    		if(f==1 || f==2 || f==3)
		    		{
		    			printf("\n!!!Hit Sencillo!!!");
		    			c1=1;
					}
					else if(f==4)
					{
						printf("\n!!!Hit Doble!!!");
						c2=1;
					}
					else if(f==5)
					{
						printf("\n!!!Hit triple!!!");
						c3=1;
					}
					else if(f==6)
					{
						printf("\n!!!HOME RUN!!!\n");
						c4=1;
					}
		    	break;
		    	case 2: printf("\n-----!!!Terreno MALO!!!");
		    		f=rand()%2+1;
		    		if(f==1)
		    		{
		    			printf("\n!!!FOUL!!!\n");
		    			cf=1;
					}
					else
					{
						printf("\n!!!ELEVADO!!!");
						co=1;
					}
		    	break;
			}
			break;
		case 2: printf("\n--!!!CONTACTO!!!\n");
		    f=rand()%2+1;
		    switch(f)
		    {
		    	case 1: printf("\n-----!!!Terreno Bueno!!!\n");
		    		f=rand()%6+1;
		    		if(f==1 || f==2 || f==3)
		    		{
		    			printf("\n!!!Hit Sencillo!!!");
		    			c1=1;
					}
					else if(f==4)
					{
						printf("\n!!!Hit Doble!!!");
						c2=1;
					}
					else if(f==5)
					{
						printf("\n!!!Hit triple!!!");
						c3=1;
					}
					else if(f==6)
					{
						printf("\n!!!HOME RUN!!!\n");
						c4=1;
					}
		    	break;
		    	case 2: printf("\n-----!!!Terreno MALO!!!");
		    		f=rand()%2+1;
		    		if(f==1)
		    		{
		    			printf("\n!!!FOUL!!!");
		    			cf=1;
					}
					else
					{
						printf("\n!!!ELEVADO!!!");
						co=1;
					}
		    	break;
			}
			break;
		case 3: printf("\n--!!!NO HISO CONTACTO!!!\n");
			f=rand()%2+1;
			if(f==1)
			{
				printf("\n!!!BOLA!!!");
				bo=1;
			}
			else
			{
				printf("\n!!!STRIKE!!!");
				st=1;
			}
			break;
		case 4: printf("\n--!!!NO HISO CONTACTO!!!\n");
			f=rand()%2+1;
			if(f==1)
			{
				printf("\n!!!BOLA!!!");
				bo=1;
			}
			else
			{
				printf("\n!!!STRIKE!!!");
				st=1;
			}
			break;
		case 5: printf("\n--!!!NO HISO CONTACTO!!!");
			f=rand()%2+1;
			if(f==1)
			{
				printf("\n!!!BOLA!!!");
				bo=1;
			}
			else
			{
				printf("\n!!!STRIKE!!!");
				st=1;
			}
			break;
	}
	if(c1==1)
	{
		if(posicion[1]==1&&posicion[2]==0&&posicion[3]==0)
		{
			posicion[2]=1;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==0)
		{
			posicion[3]=1;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==1)
		{
			posicion[4]=1;
		}
		else if(posicion[1]==1&&posicion[2]==0&&posicion[3]==1)
		{
			posicion[2]=1;
			posicion[3]=0;
			posicion[4]=1;
		}
		else if(posicion[1]==0&&posicion[2]==1&&posicion[3]==0)
		{
			posicion[1]=1;
			posicion[2]=0;
			posicion[3]=1;
			posicion[4]=0;
		}
		else if(posicion[1]==0&&posicion[2]==0&&posicion[3]==1)
		{
			posicion[1]=1;
			posicion[2]=0;
			posicion[3]=0;
			posicion[4]=1;	
		}
		else if(posicion[1]==0&&posicion[2]==1&&posicion[3]==1)
		{
			posicion[1]=1;
			posicion[2]=0;
			posicion[3]=1;
			posicion[4]=1;	
		}
		else
		{
			posicion[1]=1;
		}
		foul=0;
		cf=0;
		bola=0;
		bo=0;
		co=0;
		st=0;
		strike=0;
	}
	c1=0;
	if(c2==1)
	{
		if(posicion[1]==1&&posicion[2]==0&&posicion[3]==0)
		{
			posicion[1]=0;
			posicion[2]=1;
			posicion[3]=1;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==0)
		{
			posicion[1]=0;
			posicion[3]=1;
			posicion[4]=1;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==1)
		{
			posicion[1]=0;
			posicion[3]=1;
			posicion[4]=2;
		}
		else if(posicion[1]==1&&posicion[2]==0&&posicion[3]==1)
		{
			posicion[1]=0;
			posicion[2]=1;
			posicion[4]=1;
		}
		else if(posicion[1]==0&&posicion[2]==1&&posicion[3]==0)
		{
			posicion[1]=0;
			posicion[2]=1;
			posicion[3]=0;
			posicion[4]=1;
		}
		else if(posicion[1]==0&&posicion[2]==0&&posicion[3]==1)
		{
			posicion[1]=0;
			posicion[2]=1;
			posicion[3]=0;
			posicion[4]=1;	
		}
		else if(posicion[1]==0&&posicion[2]==1&&posicion[3]==1)
		{
			posicion[1]=0;
			posicion[2]=1;
			posicion[3]=0;
			posicion[4]=2;	
		}
		else
		{
			posicion[2]=1;
		}
		foul=0;
		cf=0;
		bola=0;
		bo=0;
		co=0;
		st=0;
		strike=0;
	}
	c2=0;
	if(c3==1)
	{
		if(posicion[1]==1&&posicion[2]==0&&posicion[3]==0)
		{
			posicion[1]=0;
			posicion[2]=0;
			posicion[3]=1;
			posicion[4]=1;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==0)
		{
			posicion[1]=0;
			posicion[2]=0;
			posicion[3]=1;
			posicion[4]=2;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==1)
		{
			posicion[1]=0;
			posicion[2]=0;
			posicion[3]=1;
			posicion[4]=3;
		}
		else if(posicion[1]==1&&posicion[2]==0&&posicion[3]==1)
		{
			posicion[1]=0;
			posicion[2]=0;
			posicion[3]=1;
			posicion[4]=2;
		}
		else if(posicion[1]==0&&posicion[2]==1&&posicion[3]==0)
		{
			posicion[1]=0;
			posicion[2]=0;
			posicion[3]=1;
			posicion[4]=1;
		}
		else if(posicion[1]==0&&posicion[2]==0&&posicion[3]==1)
		{
			posicion[1]=0;
			posicion[2]=0;
			posicion[3]=1;
			posicion[4]=1;	
		}
		else if(posicion[1]==0&&posicion[2]==1&&posicion[3]==1)
		{
			posicion[1]=0;
			posicion[2]=0;
			posicion[3]=1;
			posicion[4]=2;	
		}
		else
		{
			posicion[3]=1;
		}
		foul=0;
		cf=0;
		bola=0;
		bo=0;
		co=0;
		st=0;
		strike=0;
	}
	c3=0;
	if(c4==1)
	{
		if(posicion[1]==1&&posicion[2]==0&&posicion[3]==0)
		{
			posicion[4]=2;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==0)
		{
			posicion[4]=3;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==1)
		{
			posicion[4]=4;
		}
		else if(posicion[1]==1&&posicion[2]==0&&posicion[3]==1)
		{
			posicion[4]=3;
		}
		else if(posicion[1]==0&&posicion[2]==1&&posicion[3]==0)
		{
			posicion[4]=2;
		}
		else if(posicion[1]==0&&posicion[2]==0&&posicion[3]==1)
		{
			posicion[4]=2;	
		}
		else if(posicion[1]==0&&posicion[2]==1&&posicion[3]==1)
		{
			posicion[4]=3;	
		}
		else
		{
			posicion[4]=1;
		}
		foul=0;
		cf=0;
		bola=0;
		bo=0;
		co=0;
		st=0;
		strike=0;
	}
	c4=0;
	if(cf==1)
	{
		if(foul==1)
		{
			foul=foul+cf;
			cf=0;
		}
		else if(foul==2)
		{
		foul=foul+cf;
		cf=0;	
		}
		else if(foul==3)
		{
		out=out+cf;
		foul=0;
		cf=0;
		bola=0;
		bo=0;
		co=0;
		st=0;
		strike=0;
		}
		else
		{
			foul=1;
		}
	}

	if(co==1)
	{
		out=out+co;
		foul=0;
		cf=0;
		bola=0;
		bo=0;
		co=0;
		st=0;
		strike=0;
	}
	if(bo==1)
	{
		if(bola==1)
		{
			bola=bola+bo;
			bo=0;
		}
		else if(bola==2)
		{
			bola=bola+bo;
			bo=0;
		}
		else if(bola==3)
		{
			if(posicion[1]==1&&posicion[2]==0&&posicion[3]==0)
		{
			posicion[2]=1;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==0)
		{
			posicion[3]=1;
		}
		else if(posicion[1]==1&&posicion[2]==1&&posicion[3]==1)
		{
			posicion[4]=1;
		}
		else if(posicion[1]==1&&posicion[2]==0&&posicion[3]==1)
		{
			posicion[2]=1;
			posicion[3]=0;
			posicion[4]=1;
		}
		else
		{
			posicion[1]=1;
		}
		foul=0;
		cf=0;
		bola=0;
		bo=0;
		co=0;
		st=0;
		strike=0;
		}
		else
		{
			bola=bola+bo;
			bo=0;
		}
	}

	if(st==1)
	{
		if(strike==1)
		{
			strike=strike+st;
			st=0;
		}
		else if(strike==2)
		{
			out=out+1;
		foul=0;
		cf=0;
		bola=0;
		bo=0;
		co=0;
		st=0;
		strike=0;
		}
		else
		{
			strike=strike+st;
			st=0;
		}
	}
	printf("\n1er base: %d\n",posicion[1]);
	printf("\n2da base: %d\n",posicion[2]);
	printf("\n3er base: %d\n",posicion[3]);
	printf("\nHOME: %d\n",posicion[4]);
	if(posicion[4]>0)
	{
		carrera=carrera+posicion[4];
		posicion[4]=0;
	}
	}
	printf("\n\n\n\n!!!!!OUT: %d !!!!!\n\n\n",out);
	posicion[1]=0;
	posicion[2]=0;
	posicion[3]=0;
	posicion[4]=0;
	out=0;
	if(tag==0 || tag==2 || tag==4 || tag==6 || tag==8 || tag==10 || tag==12 || tag==14 || tag==16)
	{
		pe1[i]=carrera;
	}
	else
	{
		pe2[i]=carrera;
	}
	carrera=0;
	if(tag==1 || tag==3 || tag==5 || tag==7 || tag==9 || tag==11 || tag==13 || tag==15 || tag==17)
	{
	i=i+1;
	}
	else;
	tag=tag+1;
	}
	
printf("\n\n*******fin del juego********\n\n");
printf("\nEQUIPOS  |E1|E2|E3|E4|E5|E6|E7|E8|E9|\n");
	printf("\n%s: ",e1);
	for(i=1;i<10;i++)
	{
		printf(" %d ",pe1[i]);
	}
	printf("\n%s: ",e2);
	for(i=1;i<10;i++)
	{
		printf(" %d ",pe2[i]);
	}
	return 0;
}

