#include<stdio.h>
#include<conio.h>
void main()
{
    char a,b,c,d,e,f,name[20],state[20];
    int i,j=1,age,x,count=0,p;
     for (int i=0;i<100;i++)
          {

           printf("%c",j);
          }
            printf("\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 INFECTION RATE TEST COVID19  \xB3\xB2=\xB2=\xB2-\xB3\n\n");

          for(int i=0;i<100;i++)
               {

                printf("%c",j);
               }
               printf("\n");
   printf("\t\t\t\t Basic enter relevant information \n");
   printf("\tWhat's your NAME:- ");
   scanf("%s",name);
   printf("\tWhat's your AGE:- ");
   scanf("%d", &age);
   if (age<=13 || age>=50)
   {
       count+=1;
   }
   printf("\tYour current STATE or U.T. :- ");
   scanf("%s",state);

   for(int i=0;i<100;i++)
               {

                printf("%c",j);
               }
               printf("\n");


printf("\t\t\t\t Dear Sir/Madam , I would like you to answer some questions below \n");
printf("\n\n\tDid you travelled inter state in India between January and March ?(yes/no)\nAns:- ");
fflush(stdin);
scanf("%c",&a);
if(a=='yes' || a=='YES')
{
    count+=1;
}
 printf("\n\n\t Do you came in contact with any covid infected parson?(yes/no)\nAns:- ");
     fflush(stdin);
     scanf("%c", &b);
     if(b=='yes' || b=='YES')
     {
         count+=1;
     }
 printf("\n\n\t Is there any covid patient in the range of 1 km?(yes/no)\nAns:-  ");
 fflush(stdin);
 scanf("%c", &c);
 if(c=='yes' || c=='YES')
 {
     count+=1;
 }
 printf("\n\n\tAre you suffering of any kind of comorbidities like CANCER,DIABETES or LUNGS DISEASES?(yes/no)\nAns:- ");
 fflush(stdin);
 scanf("%c", &d);
if(d=='yes' || d=='YES')
{
    count+=1;
}
printf("\n\n\tPlease let us know your body temperature(in C)\n Ans:-");
scanf("%d",&x);
if (x>=38)
{
    count+=1;
}
printf("\n\n\t If you are suffering from any one write y\n\t1) Dry cough \n\t2) Shortness of breath \n\t3) Headaches \n\t4) Aches and Pains \n\t5) Sore throat \n\t6) fatigue \n\t7) Diarrhea  \nAns:- ");
fflush(stdin);
scanf("%c",&e);
if(e=='y' || e=='Y')
{
    count+=1;
}
printf("\n\n\tAre you suffering from Blood pressure and Blood Sugar ?(yeah/nope)\n Ans:- ");
fflush(stdin);
scanf("%c",&f);
if (f=='yeah'|| f=='YEAH')
{
    count+=1;
}
for(int i=0;i<100;i++)
               {

                printf("%c",j);
               }
               printf("\n");
printf("\t\t\t\t PLEASE WAIT WHILE WE ARE ANALYSING DATA ");
int s=10;
    while (1)
    {
        printf("\n\t%d",s);
        sleep(1);
        s--;

        if (s==0 )
        {
for(int i=0;i<100;i++)
               {

                printf("%c",j);
               }
               printf("\n");
printf("\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 REPORT \xB3\xB2=\xB2=\xB2-\xB3\n\n");
for(int i=0;i<100;i++)
               {

                printf("%c",j);
               }
               printf("\n");
printf("\n\t \t\t %s \t\t\t%d \t\t\t%s \n",name,age,state);
count=count*10;

printf("\n\n\t YOUR RATE OF BEING INFECTED IS %d percent",count);


if (count<=20)
{
    printf("\n\n\t\t\t  CONGRATULATIONS! YOU ARE IN GREEN ZONE \n ");
    printf("\n\n\n\t  All activities are permitted except the limited number of activities which are prohibited throughout the country, irrespective of the Zone.\n1) Buses can operate with upto 50% seating capacity and bus depots can operate with up to 50% capacity.\n2) All goods traffic is to be permitted. \n3)  No State/ UT shall stop the movement of cargo for cross land-border trade under Treaties with neighbouring countries.\n4)  No separate pass of any sort is needed for such movement, which is essential for maintaining the supply chain of goods and services across the country during the lockdown period.\n5)  All other activities will be permitted, which are not specifically prohibited, or which are permitted with restrictions in the various Zones, under these guidelines.\n6)  However, States/UTs, based on their assessment of situation, and with the primary objective of keeping the spread of COVID-19 in check, may allow only select activities from out of the permitted activities, with such restrictions as felt necessary.\n7)  No separate/fresh permissions will be required from authorities for activities already permitted to operate under the guidelines on Lockdown measures up to May 3, 2020.");
printf("\n\n\n\t\t\t\t\t\t STAY HOME & STAY SAFE \n");
}
 else if (count>20 || count<=40)
{
    printf("\n\n\n\t HEY! YOU ARE IN ORANGE ZONE \n");
    printf("\n\t The areas with a limited number of cases in the past and with no surge in positive cases recently would be included under the orange zone. \n1)  Only restricted activities such as limited public transport and farm product harvesting are expected to be allowed in the coronavirus orange zone.\n2)  Micro Small and Medium Enterprises (MSMEs) engaged in manufacturing of essential items like wheat four (ATTA), pulse (DAL) and edible oils would be allowed to function freely with strict maintenance of social distancing.\n3)  A hotspot district can be turned to Orange Zone when no cases are reported in the last 14 days./n");
    printf("\n\n\t\t\t STAY HOME & STAY SAFE \n");
}
else
{
    printf("\n\n\t\t\t ALERT! YOU ARE IN RED ZONE , Be Safe \n");
    printf("\n\t\n Outside the containment zones, certain activities are prohibited in addition to those prohibited throughout the country.\n2)  Plying of cycle rickshwas and autorickshaws.\n3)  Running of taxis and cab aggregators.\n4)  Intra-district and inter-district plying of buses.\n5)  Barber shops, spas and saloons. \n6) Movement of individuals and vehicles is allowed only for permitted activities, with a maximum of 2 persons (besides the driver) in four wheeler vehicles, and with no pillion rider in the case of two wheelers.\n5)  Industrial establishments in urban areas, viz SEZs, Export Oriented Units, industrial estates and industrial townships with access controls have been permitted. The other industrial activities permitted are manufacturing units of essential goods, including drugs, pharmaceuticals, medical devices, their raw material and intermediates; production units, which require continuous process, and their supply chain \n6)  Manufacturing of IT hardware; jute industry with staggered shifts and social distancing; and, manufacturing units of packaging material.");
    printf("\n\n\t\t\t STAY HOME & STAY SAFE \n");
}
printf("\n\n\n\t\tProtecting yourself and others from the spread COVID-19\n\nYou can reduce your chances of being infected or spreading COVID-19 by taking some simple precautions:\n\n1)  Regularly and thoroughly clean your hands with an alcohol-based hand rub or wash them with soap and water. Why? Washing your hands with soap and water or using alcohol-based hand rub kills viruses that may be on your hands.\n\n2)  Maintain at least 1 metre (3 feet) distance between yourself and others. Why? When someone coughs, sneezes, or speaks they spray small liquid droplets from their nose or mouth which may contain virus. If you are too close, you can breathe in the droplets, including the COVID-19 virus if the person has the disease.\n\n4)  Avoid going to crowded places. Why? Where people come together in crowds, you are more likely to come into close contact with someone that has COIVD-19 and it is more difficult to maintain physical distance of 1 metre (3 feet).\n\n5)  Avoid touching eyes, nose and mouth. Why? Hands touch many surfaces and can pick up viruses. Once contaminated, hands can transfer the virus to your eyes, nose or mouth. From there, the virus can enter your body and infect you.\n\n6)  Make sure you, and the people around you, follow good respiratory hygiene. This means covering your mouth and nose with your bent elbow or tissue when you cough or sneeze. Then dispose of the used tissue immediately and wash your hands. Why? Droplets spread virus. By following good respiratory hygiene, you protect the people around you from viruses such as cold, flu and COVID-19.\n\n7)  Stay home and self-isolate even with minor symptoms such as cough, headache, mild fever, until you recover. Have someone bring you supplies. If you need to leave your house, wear a mask to avoid infecting others. Why? Avoiding contact with others will protect them from possible COVID-19 and other viruses.\n\n8)  If you have a fever, cough and difficulty breathing, seek medical attention, but call by telephone in advance if possible and follow the directions of your local health authority. Why? National and local authorities will have the most up to date information on the situation in your area. Calling in advance will allow your health care provider to quickly direct you to the right health facility. This will also protect you and help prevent spread of viruses and other infections.\n\n9)  Keep up to date on the latest information from trusted sources, such as WHO or your local and national health authorities. Why? Local and national authorities are best placed to advise on what people in your area should be doing to protect themselves.");

printf("\n\n\t\t\t STAY HOME \n");
printf("\n\n\t\t\t STAY SAFE \n");
exit(0);
        }
    }
}
