int en_kucuk(hucre*liste){
    int es=liste->icerik;
    liste=liste->sonraki;
    if(liste->sonraki==NULL){
        es=liste->icerik;
    }
    while(liste!=NULL){
        if(liste->icerik<es){
            es=liste->icerik;
        }
        liste=liste->sonraki;
    }
    return es;
}
