struct dugum {
    
    int icerik;
    struct dugum *sol
    struct dugum *sag;
};
struct dugum *kardes_bul(struct dugum*root,struct dugum*d){
    if(root==NULL)return 0;
    if(root==d)return NULL;
    if(root->sag==d)return root->sol;
    if(root->sol==d)return root->sag;
    struct dugum*sagsonuc=kardes_bul(root->sag,d);
    struct dugum *solsonuc=kardes_bul(root-sol,d);
    if(sagsonuc==NULL)
        return solsonuc;
    else
        return sagsonuc;

};
