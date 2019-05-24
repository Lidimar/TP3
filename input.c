//
//  input.c
//  Colorize_Graph
//
//  Created by Lidimar on 23/05/19.
//  Copyright © 2019 Lidimar. All rights reserved.
//

#include "input.h"
void Flag (int argc, char *argv){
    int verbose
    
    opterr = 0;
    
    while((verbose = getopt(argc,arqv,"i:o:")) != -1){
        
        switch (verbose) {
            case v:
                strcpy(argc);
                break;
                
            default:
                break;
        }
    }
}



void Arq_entrada(char *arq_config, char *estac){
    
    FILE *arqc = fopen(arq_config, "r");
    
    if(arqc == NULL){
        printf("Erro na abertura do arquivo %s\n", arq_config);
        exit(0);
        }

}
