#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <unistd.h>

int main (int argc, char **argv){

                 int i;
                //int id; 
                char o;
                
                
                if ((argc==1) || (argc>2)){
                        printf ("Error, pocos o muchos argumentos\n");
                        return -1;
                }/*-->estudiar assert*/
                
                for (i=0; i<argc; i++){
                        
                        argv++;
                        o=**argv;
                        printf ("%c\n",o);
                        switch (o)
                        {
                                case 'p':
                                
                                        printf ("Id de proceso: %d\n", (int) getpid());
                                        
                                break;

                        }
                        
                        if (argv==NULL)
                                return 0;
                        }

                
                return 0;








}
