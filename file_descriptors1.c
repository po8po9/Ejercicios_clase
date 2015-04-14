#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>




int main (void){
        char ch[100];
        char error[50]="No se pudo abrir el archivo\n";
        int leido, fdes;


        fdes=open("./nuevo",O_RDWR| O_CREAT, 0777);
        if (fdes<0){
                perror ("error:");
                return -1;
        }
        lseek (fdes, 100, SEEK_SET);
        while ((leido=read(0, ch, sizeof ch))>0)
        {

                write (fdes, ch, leido);
        
        }
        /*fdes=open("/etc/services", O_RDWR);
        if (fdes<0){
                //write (2, error, 30);
                perror("Error en open()");


                return -1;
                }*/
        return 0;
    
    
         
}   
~                                                                                                                                                                                                     
~                                                                                                                                                                                                     
~            
