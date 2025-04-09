#include <stdio.h>
int main(){
    FILE *fp;
    fp=fopen("readfile.txt","r");
    char ch;
    int wordcount=0;
    int linecount=0;
    int charcount=0;
    while(fscanf(fp,"%c",&ch)==1){
    	if(ch==' '|| ch=='.'){
    	    wordcount++;
    	}
    	if(ch=='.'){
    	    linecount+=1;
    	}
    	if(ch!='.' && ch!=' ' && ch!='\n'){
    	    charcount++;
    	}
    }
    printf("\n Line count:%d",linecount);
    printf("\n word count:%d",wordcount);
    printf("\n character count:%d",charcount);
    fclose(fp);
    return 0;
}
