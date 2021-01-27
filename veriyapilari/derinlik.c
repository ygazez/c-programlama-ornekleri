int derinlik (struct dugum *kok ){
    if(kok==NULL){
        return -1;
    }
    else{
        int derinlik_sol=derinlik(kok->sol);
        int derinlik_sag=derinlik(kok->sag);
        if(derinlik_sol>derinlik_sag){
            return derinlik_sol+1;
        }
        else{
            return derinlil_sag+1;
        }
    }
}
