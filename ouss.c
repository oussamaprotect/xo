#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int hard(){
   
     char *tab[3][3]={{"-","-","-"},{"-","-","-"},{"-","-","-"}};
    
int i,j,k,l,m=0,n,o,p,q,player,bot,cell;

    for(i=1;i<=6;i++){

// 丕賱乇爻賲 賱毓亘丞 

for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }
//bot win
 if(tab[0][0]=="O"&&tab[0][1]=="O"&&tab[0][2]=="O"){

printf("\n\t- bot Win -\n");break;
 }

if(tab[1][0]=="O"&&tab[1][1]=="O"&&tab[1][2]=="O"){

printf("\n\t- bot Win -\n");break;
 }

if(tab[2][0]=="O"&&tab[2][1]=="O"&&tab[2][2]=="O"){

printf("\n\t- bot Win -\n");break;
 }

if(tab[0][0]=="O"&&tab[1][0]=="O"&&tab[2][0]=="O"){

printf("\n\t- bot Win -\n");break;
 }

if(tab[0][1]=="O"&&tab[1][1]=="O"&&tab[2][1]=="O"){

printf("\n\t- bot Win -\n");break;
 }

if(tab[0][2]=="O"&&tab[1][2]=="O"&&tab[2][2]=="O"){

printf("\n\t- bot Win -\n");break;
 }

if(tab[0][0]=="O"&&tab[1][1]=="O"&&tab[2][2]=="O"){

printf("\n\t- bot Win -\n");break;
 }
if(tab[0][2]=="O"&&tab[1][1]=="O"&&tab[2][0]=="O"){

printf("\n\t- bot Win -\n");break;
 }

// fin bot win
printf("\n- choose cell = ");
var:scanf("%d",&cell);

switch(cell){

case 1:

if(tab[0][0] == "X"||tab[0][0]=="O"){

printf("\n- choose other cell = ");

goto var;    

break;
}

if(tab[0][0] != "X"&&tab[0][0]!="O"){tab[0][0]="X";break;}

break;

case 2:

if(tab[0][1] != "X"&&tab[0][1]!="O"){tab[0][1]="X";break;}

else{
printf("\n- choose other cell = ");

goto var;    

break;
}
break;


case 3:

if(tab[0][2] != "X"&&tab[0][2]!="O"){tab[0][2]="X";break;}
else{

printf("\n- choose other cell = ");

goto var;    

break;
}

break;

case 4:
  
if(tab[1][0] != "X"&&tab[1][0]!="O"){tab[1][0]="X";break;}
else{

printf("\n- choose other cell = ");

goto var;    

break;
}
break;

case 5:

if(tab[1][1] != "X"&&tab[1][1]!="O"){tab[1][1]="X";break;}
else{

printf("\n- choose other cell = ");

goto var;    

break;
}
break;

case 6:
  
if(tab[1][2] != "X"&&tab[1][2]!="O"){tab[1][2]="X";break;}
else{

printf("\n- choose other cell = ");

goto var;    

break;
}
break;

case 7:
  
if(tab[2][0] != "X"&&tab[2][0]!="O"){tab[2][0]="X";break;}
else{

printf("\n -choose other cell = ");

goto var;    


break;
}
break;

case 8:
  
if(tab[2][1] != "X"&&tab[2][1]!="O"){tab[2][1]="X";break;}
if(tab[2][1] == "X"||tab[2][1]=="O"){

printf("\n -choose other cell = ");

goto var;    
 

break;
}
break;
  
case 9:

if(tab[2][2] != "X"&&tab[2][2]!="O"){tab[2][2]="X";break;}
if(tab[2][2] == "X"||tab[2][2]=="O"){

printf("\n -choose other cell = ");

goto var;    

}
break;
  
default:

printf("\n- choose cell <10 = ");
goto var;


break;


} //fin switch


//win human
    
if(tab[0][0]=="X"&&tab[0][1]=="X"&&tab[0][2]=="X"){  

    for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }
            
printf("\n\t- You Win -");    
    
break;
}

if(tab[1][0]=="X"&&tab[1][1]=="X"&&tab[1][2]=="X"){  

    for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }
            
printf("\n\t- You Win -");    
    
break;
}    
   
   if(tab[2][0]=="X"&&tab[2][1]=="X"&&tab[2][2]=="X"){  

    for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }
            
printf("\n\t- You Win -");    
    
break;
}
            
if(tab[0][0]=="X"&&tab[1][0]=="X"&&tab[2][0]=="X"){  

    for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }
            
printf("\n\t- You Win -");    
    
break;
}
            
if(tab[0][1]=="X"&&tab[1][1]=="X"&&tab[2][1]=="X"){  

    for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }
            
printf("\n\t- You Win -");    
    
break;
}
            
if(tab[0][2]=="X"&&tab[1][2]=="X"&&tab[2][2]=="X"){  

    for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }
            
printf("\n\t- You Win -");    
    
break;
}
                
 
    if(tab[0][0]=="X"&&tab[1][1]=="X"&&tab[2][2]=="X"){  

    for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }
            
printf("\n\t- You Win -");    
    
break;
}
    
  if(tab[0][2]=="X"&&tab[1][1]=="X"&&tab[2][0]=="X"){  

    for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }
            
printf("\n\t- You Win -");    
    
break;
}    
    
 //fin win human   
    
       if(i>4){goto vs;}   
    
 //fin if <5

int o1=0,o2=0,o3=0,o4=0,o5=0,o6=0,o7=0,o8=0,o9=0,o10=0,o11=0,o12=0,o13=0,o14=0,o15=0,o16=0,o17=0,o18=0,o19=0,o20=0,o21=0;

    for(int q=0;q<=1;q++){

//win Ai

if(tab[0][0]=="O"&&tab[1][0]=="O"&&tab[2][0]!="O"&&tab[2][0]!="X"){tab[2][0]="O";m=1;l=4;o1=1;break;}    
  
if(tab[2][2]=="O"&&tab[2][1]=="O"&&tab[2][0]!="O"&&tab[2][0]!="X"){tab[2][0]="O";m=1;l=7;o16=16;break;}

if(tab[0][1]=="O"&&tab[1][1]=="O"&&tab[2][1]!="O"&&tab[2][1]!="X"){tab[2][1]="O";m=1;l=7;o3=3;break;}    
  
if(tab[0][0]=="O"&&tab[0][1]=="O"&&tab[0][2]!="O"&&tab[0][2]!="X"){tab[0][2]="O";m=1;l=3;o4=4;break;}
   
if(tab[1][0]=="O"&&tab[1][1]=="O"&&tab[1][2]!="0"&&tab[1][2]!="X"){tab[1][2]="O";m=1;l=6;o5=5;break;}
 

if(tab[2][0]=="O"&&tab[2][1]=="O"&&tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";m=1;l=9;o6=6;break;}

if(tab[0][2]=="O"&&tab[1][2]=="O"&&tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";m=1;l=9;o2=2;break;}    

if(tab[0][0]=="O"&&tab[1][1]=="O"&&tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";m=1;l=9;o7=7;break;}

         
if(tab[0][2]=="O"&&tab[1][1]=="O"&&tab[2][0]!="O"&&tab[2][0]!="X"){tab[2][0]="O";m=1;l=7;o8=8;break;}

if(tab[2][0]=="O"&&tab[1][1]=="O"&&tab[0][2]!="O"&&tab[0][2]!="X"){tab[0][2]="O";m=1;l=3;o9=9;break;}

if(tab[2][2]=="O"&&tab[1][1]=="O"&&tab[0][0]!="O"&&tab[0][0]!="X"){tab[0][0]="O";m=1;l=1;o10=10;break;}


if(tab[2][2]=="O"&&tab[0][0]=="O"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;o11=11;break;}

if(tab[1][2]=="O"&&tab[1][0]=="O"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;o17=17;break;}


if(tab[0][2]=="O"&&tab[2][0]=="O"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;o12=12;break;}




if(tab[0][1]=="O"&&tab[2][1]=="O"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;o20=20;break;}



if(tab[0][0]=="O"&&tab[0][2]=="O"&&tab[0][1]!="O"&&tab[0][1]!="X"){tab[0][1]="O";m=1;l=2;o13=13;break;}

if(tab[0][2]=="O"&&tab[0][1]=="O"&&tab[0][0]!="O"&&tab[0][0]!="X"){tab[0][0]="O";m=1;l=1;o14=14;break;}



if(tab[2][2]=="O"&&tab[2][0]=="O"&&tab[2][1]!="O"&&tab[2][1]!="X"){tab[2][1]="O";m=1;l=8;o18=18;break;}



if(tab[0][0]=="O"&&tab[2][0]=="O"&&tab[1][0]!="O"&&tab[1][0]!="X"){tab[1][0]="O";m=1;l=4;o19=19;break;}

if(tab[1][2]=="O"&&tab[1][1]=="O"&&tab[1][0]!="O"&&tab[1][0]!="X"){tab[1][0]="O";m=1;l=4;o15=15;break;}



if(tab[0][2]=="O"&&tab[2][2]=="O"&&tab[1][2]!="O"&&tab[1][2]!="X"){tab[1][2]="O";m=1;l=6;o21=21;break;}



//fin Win

if(m!=1){



if(tab[0][0]=="X"&&tab[1][0]=="X"&&tab[2][0]!="O"&&tab[2][0]!="X"){tab[2][0]="O";m=1;l=4;o1=1;break;}    

  
if(tab[0][2]=="X"&&tab[1][2]=="X"&&tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";m=1;l=9;o2=2;break;}    
  
if(tab[0][1]=="X"&&tab[1][1]=="X"&&tab[2][1]!="O"&&tab[2][1]!="X"){tab[2][1]="O";m=1;l=7;o3=3;break;}    
   
if(tab[0][0]=="X"&&tab[0][1]=="X"&&tab[0][2]!="O"&&tab[0][2]!="X"){tab[0][2]="O";m=1;l=3;o4=4;break;}
   
if(tab[1][0]=="X"&&tab[1][1]=="X"&&tab[1][2]!="0"&&tab[1][2]!="X"){tab[1][2]="O";m=1;l=6;o5=5;break;}

if(tab[2][0]=="X"&&tab[2][1]=="X"&&tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";m=1;l=9;o6=6;break;}

if(tab[0][0]=="X"&&tab[1][1]=="X"&&tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";m=1;l=9;o7=7;break;}
      
if(tab[0][2]=="X"&&tab[1][1]=="X"&&tab[2][0]!="O"&&tab[2][0]!="X"){tab[2][0]="O";m=1;l=7;o8=8;break;}

if(tab[2][0]=="X"&&tab[1][1]=="X"&&tab[0][2]!="O"&&tab[0][2]!="X"){tab[0][2]="O";m=1;l=3;o9=9;break;}

if(tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;o11=11;break;}



if(tab[2][2]=="X"&&tab[1][1]=="X"&&tab[0][0]!="O"&&tab[0][0]!="X"){tab[0][0]="O";m=1;l=1;o10=10;break;}

if(tab[2][2]=="X"&&tab[0][0]=="X"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;o11=11;break;}

if(tab[0][2]=="X"&&tab[2][0]=="X"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;o12=12;break;}

if(tab[0][0]=="X"&&tab[0][2]=="X"&&tab[0][1]!="O"&&tab[0][1]!="X"){tab[0][1]="O";m=1;l=2;o13=13;break;}

if(tab[0][2]=="X"&&tab[0][1]=="X"&&tab[0][0]!="O"&&tab[0][0]!="X"){tab[0][0]="O";m=1;l=1;o14=14;break;}

if(tab[1][2]=="X"&&tab[1][1]=="X"&&tab[1][0]!="O"&&tab[1][0]!="X"){tab[1][0]="O";m=1;l=4;o15=15;break;}

if(tab[2][2]=="X"&&tab[2][1]=="X"&&tab[2][0]!="O"&&tab[2][0]!="X"){tab[2][0]="O";m=1;l=7;o16=16;break;}

if(tab[1][2]=="X"&&tab[1][0]=="X"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;o17=17;break;}

if(tab[2][2]=="X"&&tab[2][0]=="X"&&tab[2][1]!="O"&&tab[2][1]!="X"){tab[2][1]="O";m=1;l=8;o18=18;break;}

if(tab[0][0]=="X"&&tab[2][0]=="X"&&tab[1][0]!="O"&&tab[1][0]!="X"){tab[1][0]="O";m=1;l=4;o19=19;break;}

if(tab[0][1]=="X"&&tab[2][1]=="X"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;o20=20;break;}

if(tab[0][2]=="X"&&tab[2][2]=="X"&&tab[1][2]!="O"&&tab[1][2]!="X"){tab[1][2]="O";m=1;l=6;o21=21;break;}


//win bot

//Ai block

int r=0,e;

srand(time(0));
e=rand()%4;

if(tab[0][0]=="X"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=2;break;}

if(tab[0][2]=="X"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=2;break;}

if(tab[2][0]=="X"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=2;break;}

if(tab[2][2]=="X"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=2;break;}

if(tab[1][1]=="X"){

switch(e){

case 1:if(tab[0][0]!="X"&&tab[0][0]!="O"){
tab[0][0]="O";l=1;m=1;r=1;break;
}
case 2:if(tab[2][0]!="X"&&tab[2][0]!="O"){
tab[2][0]="O";l=7;m=1;r=1;break;
}
case 3:if(tab[0][2]!="O"&&tab[0][2]!="X"){tab[0][2]="O";l=3;m=1;r=1;break;}
case 4:if(tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";l=9;m=1;r=1;break;}
 }//fin switch

if(r==1){r=0;break;}

}



}    }//fin for
//fin if bot Ai


    
if(m==0){

srand(time(0));
bot = rand()%8;

switch(bot){



case 0:

if(tab[0][0] != "X"&&tab[0][0]!="O"){tab[0][0]="O";l=1;break;}


case 1:

if(tab[0][1] != "X"&&tab[0][1]!="O"){tab[0][1]="O";l=2;break;}


case 2:

if(tab[0][2] != "X"&&tab[0][2]!="O"){tab[0][2]="O";l=3;break;}

case 3:
  
if(tab[1][0] != "X"&&tab[1][0]!="O"){tab[1][0]="O";l=4;break;}

case 4:

if(tab[1][1] != "X"&&tab[1][1]!="O"){tab[1][1]="O";l=5;break;}

case 5:
  
if(tab[1][2] != "X"&&tab[1][2]!="O"){tab[1][2]="O";l=6;break;}

case 6:
  
if(tab[2][0] != "X"&&tab[2][0]!="O"){tab[2][0]="O";l=7;break;}

case 7:
  
if(tab[2][1] != "X"&&tab[2][1]!="O"){tab[2][1]="O";l=8;break;}

case 8:

if(tab[2][2] != "X"&&tab[2][2]!="O"){tab[2][2]="O";l=9;break;}


}//fin switch


  } //fin if m == 0

     m=m*0;

   printf("\n- bot choose = %d\n",l);
   
vs:if(i>4){ 

for(j=0;j<3;j++){

printf("\n|");

for(k=0;k<3;k++){

printf(" %s |",tab[j][k]);

  }

printf("\n");

  }

    printf("\n\n\t- Game Over -\n\n");break;}
    //fin if i<5
    
    } //fin for
       
}

void easy(){

int cell,i,j,k,l,bot,m=0,n;

char *tab[3][3]={{"-","-","-"},{"-","-","-"},{"-","-","-"}};

for(i=0;i<=5;i++){

for(j=0;j<3;j++){ printf("\n|");

for(k=0;k<3;k++){ printf(" %s |",tab[j][k]); } 

printf("\n"); }


//bot win 

if(tab[0][0]=="O"&&tab[0][1]=="O"&&tab[0][2]=="O"){ printf("\n\t- bot Win -\n");break; } 
if(tab[1][0]=="O"&&tab[1][1]=="O"&&tab[1][2]=="O"){ printf("\n\t- bot Win -\n");break; } 
if(tab[2][0]=="O"&&tab[2][1]=="O"&&tab[2][2]=="O"){ printf("\n\t- bot Win -\n");break; } 
if(tab[0][0]=="O"&&tab[1][0]=="O"&&tab[2][0]=="O"){ printf("\n\t- bot Win -\n");break; } 
if(tab[0][1]=="O"&&tab[1][1]=="O"&&tab[2][1]=="O"){ printf("\n\t- bot Win -\n");break; } 
if(tab[0][2]=="O"&&tab[1][2]=="O"&&tab[2][2]=="O"){ printf("\n\t- bot Win -\n");break; } 
if(tab[0][0]=="O"&&tab[1][1]=="O"&&tab[2][2]=="O"){ printf("\n\t- bot Win -\n");break; } 
if(tab[0][2]=="O"&&tab[1][1]=="O"&&tab[2][0]=="O"){ printf("\n\t- bot Win -\n");break; }


printf("\n- choose cell = ");

var:scanf("%d",&cell); 

//human choose

switch(cell){ 

case 1: if(tab[0][0] == "X"||tab[0][0]=="O"){ printf("\n- choose other cell = "); goto var; break; } 
if(tab[0][0] != "X"&&tab[0][0]!="O"){tab[0][0]="X";break;} break; 

case 2: if(tab[0][1] != "X"&&tab[0][1]!="O"){tab[0][1]="X";break;} 
else{ printf("\n- choose other cell = "); goto var; break; } break; 

case 3: if(tab[0][2] != "X"&&tab[0][2]!="O"){tab[0][2]="X";break;} 
else{ printf("\n- choose other cell = "); goto var; break; } break; 

case 4: if(tab[1][0] != "X"&&tab[1][0]!="O"){tab[1][0]="X";break;} 
else{ printf("\n- choose other cell = "); goto var; break; } break; 

case 5: if(tab[1][1] != "X"&&tab[1][1]!="O"){tab[1][1]="X";break;} 
else{ printf("\n- choose other cell = "); goto var; break; } break; 

case 6: if(tab[1][2] != "X"&&tab[1][2]!="O"){tab[1][2]="X";break;} 
else{ printf("\n- choose other cell = "); goto var; break; } break; 

case 7: if(tab[2][0] != "X"&&tab[2][0]!="O"){tab[2][0]="X";break;} 
else{ printf("\n -choose other cell = "); goto var; break; } break; 

case 8: if(tab[2][1] != "X"&&tab[2][1]!="O"){tab[2][1]="X";break;} 
if(tab[2][1] == "X"||tab[2][1]=="O"){ printf("\n -choose other cell = "); goto var; break; } break; 

case 9: if(tab[2][2] != "X"&&tab[2][2]!="O"){tab[2][2]="X";break;} 
if(tab[2][2] == "X"||tab[2][2]=="O"){ printf("\n -choose other cell = "); goto var; } break; 

default: printf("\n- choose cell <10 = "); goto var; break; } //fin switch

//player win 

if(tab[0][0]=="X"&&tab[0][1]=="X"&&tab[0][2]=="X"){ 

for(j=0;j<3;j++){
 printf("\n|"); 
for(k=0;k<3;k++){ 
printf(" %s |",tab[j][k]); } 
printf("\n"); } 
printf("\n\t- You Win -"); break; } 

if(tab[1][0]=="X"&&tab[1][1]=="X"&&tab[1][2]=="X"){ 
for(j=0;j<3;j++){ printf("\n|"); 
for(k=0;k<3;k++){ 
printf(" %s |",tab[j][k]); }
 printf("\n"); } 
printf("\n\t- You Win -"); break; } 

if(tab[2][0]=="X"&&tab[2][1]=="X"&&tab[2][2]=="X"){ 
for(j=0;j<3;j++){ printf("\n|"); 
for(k=0;k<3;k++){ printf(" %s |",tab[j][k]); } printf("\n"); } 
printf("\n\t- You Win -"); break; } 
if(tab[0][0]=="X"&&tab[1][0]=="X"&&tab[2][0]=="X"){ 
for(j=0;j<3;j++){ printf("\n|"); 
for(k=0;k<3;k++){ printf(" %s |",tab[j][k]); } printf("\n"); } 
printf("\n\t- You Win -"); break; }
 if(tab[0][1]=="X"&&tab[1][1]=="X"&&tab[2][1]=="X"){ 
for(j=0;j<3;j++){ printf("\n|"); 
for(k=0;k<3;k++){ printf(" %s |",tab[j][k]); } printf("\n"); }
 printf("\n\t- You Win -"); break; } 
if(tab[0][2]=="X"&&tab[1][2]=="X"&&tab[2][2]=="X"){
 for(j=0;j<3;j++){ printf("\n|");
 for(k=0;k<3;k++){ printf(" %s |",tab[j][k]); } printf("\n"); } 
printf("\n\t- You Win -"); break; } 
if(tab[0][0]=="X"&&tab[1][1]=="X"&&tab[2][2]=="X"){ 
for(j=0;j<3;j++){ printf("\n|");
 for(k=0;k<3;k++){ printf(" %s |",tab[j][k]); } printf("\n"); } 
printf("\n\t- You Win -"); break; } 
if(tab[0][2]=="X"&&tab[1][1]=="X"&&tab[2][0]=="X"){ 
for(j=0;j<3;j++){ printf("\n|"); 
for(k=0;k<3;k++){ printf(" %s |",tab[j][k]); } printf("\n"); } 
printf("\n\t- You Win -"); break; } 


//win bot

for(n=0;n<=1;n++){

if(tab[0][0]=="O"&&tab[1][0]=="O"&&tab[2][0]!="O"&&tab[2][0]!="X"){tab[2][0]="O";m=1;l=4;break;} 
if(tab[2][2]=="O"&&tab[2][1]=="O"&&tab[2][0]!="O"&&tab[2][0]!="X"){tab[2][0]="O";m=1;l=7;break;}
 if(tab[0][1]=="O"&&tab[1][1]=="O"&&tab[2][1]!="O"&&tab[2][1]!="X"){tab[2][1]="O";m=1;l=7;break;} 
if(tab[0][0]=="O"&&tab[0][1]=="O"&&tab[0][2]!="O"&&tab[0][2]!="X"){tab[0][2]="O";m=1;l=3;break;} 
if(tab[1][0]=="O"&&tab[1][1]=="O"&&tab[1][2]!="0"&&tab[1][2]!="X"){tab[1][2]="O";m=1;l=6;break;}
 if(tab[2][0]=="O"&&tab[2][1]=="O"&&tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";m=1;l=9;break;} 
if(tab[0][2]=="O"&&tab[1][2]=="O"&&tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";m=1;l=9;break;} 
if(tab[0][0]=="O"&&tab[1][1]=="O"&&tab[2][2]!="O"&&tab[2][2]!="X"){tab[2][2]="O";m=1;l=9;break;} 
if(tab[0][2]=="O"&&tab[1][1]=="O"&&tab[2][0]!="O"&&tab[2][0]!="X"){tab[2][0]="O";m=1;l=7;break;} 
if(tab[2][0]=="O"&&tab[1][1]=="O"&&tab[0][2]!="O"&&tab[0][2]!="X"){tab[0][2]="O";m=1;l=3;break;} 
if(tab[2][2]=="O"&&tab[1][1]=="O"&&tab[0][0]!="O"&&tab[0][0]!="X"){tab[0][0]="O";m=1;l=1;break;} 
if(tab[2][2]=="O"&&tab[0][0]=="O"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;break;} 
if(tab[1][2]=="O"&&tab[1][0]=="O"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;break;} 
if(tab[0][2]=="O"&&tab[2][0]=="O"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;break;} 
if(tab[0][1]=="O"&&tab[2][1]=="O"&&tab[1][1]!="O"&&tab[1][1]!="X"){tab[1][1]="O";m=1;l=5;break;} 
if(tab[0][0]=="O"&&tab[0][2]=="O"&&tab[0][1]!="O"&&tab[0][1]!="X"){tab[0][1]="O";m=1;l=2;break;} 
if(tab[0][2]=="O"&&tab[0][1]=="O"&&tab[0][0]!="O"&&tab[0][0]!="X"){tab[0][0]="O";m=1;l=1;break;} 
if(tab[2][2]=="O"&&tab[2][0]=="O"&&tab[2][1]!="O"&&tab[2][1]!="X"){tab[2][1]="O";m=1;l=8;break;} 
if(tab[0][0]=="O"&&tab[2][0]=="O"&&tab[1][0]!="O"&&tab[1][0]!="X"){tab[1][0]="O";m=1;l=4;break;} 
if(tab[1][2]=="O"&&tab[1][1]=="O"&&tab[1][0]!="O"&&tab[1][0]!="X"){tab[1][0]="O";m=1;l=4;break;} 
if(tab[0][2]=="O"&&tab[2][2]=="O"&&tab[1][2]!="O"&&tab[1][2]!="X"){tab[1][2]="O";m=1;l=6;break;} 


    }//fin for

if(m==0){ 
srand(time(0)); 

bot = rand()%8; 

switch(bot){ 

case 0: if(tab[0][0] != "X"&&tab[0][0]!="O"){tab[0][0]="O";l=1;break;} 

case 1: if(tab[0][1] != "X"&&tab[0][1]!="O"){tab[0][1]="O";l=2;break;} 

case 2: if(tab[0][2] != "X"&&tab[0][2]!="O"){tab[0][2]="O";l=3;break;} 

case 3: if(tab[1][0] != "X"&&tab[1][0]!="O"){tab[1][0]="O";l=4;break;} 

case 4: if(tab[1][1] != "X"&&tab[1][1]!="O"){tab[1][1]="O";l=5;break;} 

case 5: if(tab[1][2] != "X"&&tab[1][2]!="O"){tab[1][2]="O";l=6;break;} 

case 6: if(tab[2][0] != "X"&&tab[2][0]!="O"){tab[2][0]="O";l=7;break;} 

case 7: if(tab[2][1] != "X"&&tab[2][1]!="O"){tab[2][1]="O";l=8;break;} 

case 8: if(tab[2][2] != "X"&&tab[2][2]!="O"){tab[2][2]="O";l=9;break;} }//fin switch 

    } //fin if m==0
    
    m=m*0; 
    
    printf("\n- bot choose = %d\n",l); 
    vs:if(i>4){ 
    for(j=0;j<3;j++){ printf("\n|");
     for(k=0;k<3;k++){ printf(" %s |",tab[j][k]); } 
    printf("\n"); } printf("\n\n\t- Game Over -\n\n");break;}

    }//fin for big


}

int main(){

int number,x;

printf("\n 1 - bot hard");
printf("\n 2 - bot easy\n");


printf("\n- choose number = ");
scanf("%d",&number);

if(number == 1){

hard();
}
else{easy();}
}