#include "teamchoice.h"
#include "ui_teamchoice.h"
#include "gamewindow.h"
#include <iostream>
#include <fstream>
#include "personne.h"
#include "franchise.h"
#include "liste.h"

#include "gamewindow.h"
#include "ui_gamewindow.h"

using namespace std;

TeamChoice::TeamChoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeamChoice)
{
    ui->setupUi(this);
}

TeamChoice::~TeamChoice()
{
    delete ui;
}

void TeamChoice::on_listJ1_itemClicked(QListWidgetItem *item)
{
    std::string city, name, sgl, sgf, pgl, pgf, pfl, pff, sfl, sff, cl, cf, col, cof; // l pour lastName, f pour firstName
    int teamr, sgr, pgr, pfr, sfr, cr, cor; // r pour rating

    std::ifstream flux("../BasketLO43/MyRessources/docBDD.txt"); // Ouverte du fichier docBDD en lecture
    std::string ligne; // Création d'un string permettant de parcourir le fichier

    int i=0;
    while(item != ui->listJ1->item(i))
    {
        i++; //On récupère la bonne valeur de i
    }

    switch (i) { //En fonction de i, la bon logo de la franchise sélectionnée s'affiche
    case 0:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/ATL"));
        break;
    case 1:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/BKN"));
        break;
    case 2:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/BOS"));
        break;
    case 3:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/CHA"));
        break;
    case 4:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/CHI"));
        break;
    case 5:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/CLE"));
        break;
    case 6:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/DAL"));
        break;
    case 7:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/DEN"));
        break;
    case 8:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/DET"));
        break;
    case 9:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/GSW"));
        break;
    case 10:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/HOU"));
        break;
    case 11:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/IND"));
        break;
    case 12:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/LAC"));
        break;
    case 13:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/LAL"));
        break;
    case 14:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/MEM"));
        break;
    case 15:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/MIA"));
        break;
    case 16:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/MIL"));
        break;
    case 17:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/MIN"));
        break;
    case 18:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/NOP"));
        break;
    case 19:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/NYK"));
        break;
    case 20:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/OKC"));
        break;
    case 21:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/ORL"));
        break;
    case 22:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/PHI"));
        break;
    case 23:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/PHX"));
        break;
    case 24:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/POR"));
        break;
    case 25:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/SAC"));
        break;
    case 26:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/SAS"));
        break;
    case 27:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/TOR"));
        break;
    case 28:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/UTA"));
        break;
    case 29:
        ui->logoJ1->setPixmap(QPixmap(":/franchiselogo/WAS"));
        break;
    default:
        break;
    }

    for(int k=0;k<i*8;k++){
        getline( flux, ligne );
    }

    flux >> city >> name;
    getline( flux, ligne );
    flux >> pgf >> pgl >> pgr;
    getline( flux, ligne );
    flux >> sgf >> sgl >> sgr;
    getline( flux, ligne );
    flux >> sff >> sfl >> sfr;
    getline( flux, ligne );
    flux >> pff >> pfl >> pfr;
    getline( flux, ligne );
    flux >> cf >> cl >> cr;
    getline( flux, ligne );
    flux >> cof >> col >> cor >> teamr; // on récupère toute les valeurs d'une franchise

    ui->ovr1->setText(QString::number(teamr));
    ui->city1->setText(QString::fromStdString(city));
    ui->franchiseName1->setText(QString::fromStdString(name));
    ui->pgname1->setText(QString::fromStdString(pgf+' '+pgl));
    ui->pgrating1->setText(QString::number(pgr));
    ui->sgname1->setText(QString::fromStdString(sgf+' '+sgl));
    ui->sgrating1->setText(QString::number(sgr));
    ui->sfname1->setText(QString::fromStdString(sff+' '+sfl));
    ui->sfrating1->setText(QString::number(sfr));
    ui->pfname1->setText(QString::fromStdString(pff+' '+pfl));
    ui->pfrating1->setText(QString::number(pfr));
    ui->cname1->setText(QString::fromStdString(cf+' '+cl));
    ui->crating1->setText(QString::number(cr));
    ui->coachname1->setText(QString::fromStdString(cof+' '+col));
    ui->coachrating1->setText(QString::number(cor)); //on affiche ces dernieres ici

    flux.close(); // On referme le fichier

    teamJ1=i;
}

void TeamChoice::on_listJ2_itemClicked(QListWidgetItem *item)
{
    std::string city, name, sgl, sgf, pgl, pgf, pfl, pff, sfl, sff, cl, cf, col, cof; // l pour lastName, f pour firstName
    int teamr, sgr, pgr, pfr, sfr, cr, cor; // r pour rating

    std::ifstream flux("../BasketLO43/MyRessources/docBDD.txt");
    std::string ligne;

    int i=0;
    while(item != ui->listJ2->item(i))
    {
        i++;
    }

    switch (i) {
    case 0:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/ATL"));
        break;
    case 1:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/BKN"));
        break;
    case 2:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/BOS"));
        break;
    case 3:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/CHA"));
        break;
    case 4:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/CHI"));
        break;
    case 5:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/CLE"));
        break;
    case 6:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/DAL"));
        break;
    case 7:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/DEN"));
        break;
    case 8:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/DET"));
        break;
    case 9:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/GSW"));
        break;
    case 10:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/HOU"));
        break;
    case 11:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/IND"));
        break;
    case 12:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/LAC"));
        break;
    case 13:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/LAL"));
        break;
    case 14:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/MEM"));
        break;
    case 15:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/MIA"));
        break;
    case 16:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/MIL"));
        break;
    case 17:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/MIN"));
        break;
    case 18:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/NOP"));
        break;
    case 19:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/NYK"));
        break;
    case 20:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/OKC"));
        break;
    case 21:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/ORL"));
        break;
    case 22:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/PHI"));
        break;
    case 23:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/PHX"));
        break;
    case 24:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/POR"));
        break;
    case 25:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/SAC"));
        break;
    case 26:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/SAS"));
        break;
    case 27:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/TOR"));
        break;
    case 28:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/UTA"));
        break;
    case 29:
        ui->logoJ2->setPixmap(QPixmap(":/franchiselogo/WAS"));
        break;
    default:
        break;
    }

    for(int k=0;k<i*8;k++){
        getline( flux, ligne );
    }

    flux >> city >> name;
    getline( flux, ligne );
    flux >> pgf >> pgl >> pgr;
    getline( flux, ligne );
    flux >> sgf >> sgl >> sgr;
    getline( flux, ligne );
    flux >> sff >> sfl >> sfr;
    getline( flux, ligne );
    flux >> pff >> pfl >> pfr;
    getline( flux, ligne );
    flux >> cf >> cl >> cr;
    getline( flux, ligne );
    flux >> cof >> col >> cor >> teamr;


    ui->ovr2->setText(QString::number(teamr));
    ui->city2->setText(QString::fromStdString(city));
    ui->franchiseName2->setText(QString::fromStdString(name));
    ui->pgname2->setText(QString::fromStdString(pgf+' '+pgl));
    ui->pgrating2->setText(QString::number(pgr));
    ui->sgname2->setText(QString::fromStdString(sgf+' '+sgl));
    ui->sgrating2->setText(QString::number(sgr));
    ui->sfname2->setText(QString::fromStdString(sff+' '+sfl));
    ui->sfrating2->setText(QString::number(sfr));
    ui->pfname2->setText(QString::fromStdString(pff+' '+pfl));
    ui->pfrating2->setText(QString::number(pfr));
    ui->cname2->setText(QString::fromStdString(cf+' '+cl));
    ui->crating2->setText(QString::number(cr));
    ui->coachname2->setText(QString::fromStdString(cof+' '+col));
    ui->coachrating2->setText(QString::number(cor));

    flux.close();

    teamJ2=i;
}

void TeamChoice::on_playButton_clicked()
{
    this->hide();

    std::ifstream flux("../BasketLO43/MyRessources/docBDD.txt");
    std::string ligne;

    std::string city, name, abr, sgl, sgf, pgl, pgf, pfl, pff, sfl, sff, cl, cf, col, cof; // l pour lastName, f pour firstName
    int teamr, sgov, pgov, pfov, sfov, cov, sgpo, pgpo, pfpo, sfpo, cpo, sgpr, pgpr, pfpr, sfpr, cpr, cor;


    for(int k=0;k<teamJ1*8;k++){
        getline( flux, ligne );
    }

    flux >> city >> name >> abr;
    getline( flux, ligne );
    flux >> pgf >> pgl >> pgov >> pgpo >> pgpr;
    getline( flux, ligne );
    flux >> sgf >> sgl >> sgov >> sgpo >> sgpr;
    getline( flux, ligne );
    flux >> sff >> sfl >> sfov >> sfpo >> sfpr;
    getline( flux, ligne );
    flux >> pff >> pfl >> pfov >> pfpo >> pfpr;
    getline( flux, ligne );
    flux >> cf >> cl >> cov >> cpo >> cpr;
    getline( flux, ligne );
    flux >> cof >> col >> cor >> teamr;

    // On récupère les informations de la franchise 1 que l'on place dans une Franchise
    Player pg1(pgf,pgl,pgov,pgpo,pgpr);
    Player sg1(sgf,sgl,sgov,sgpo,sgpr);
    Player sf1(sff,sfl,sfov,sfpo,sfpr);
    Player pf1(pff,pfl,pfov,pfpo,pfpr);
    Player c1(cf,cl,cov,cpo,cpr);
    Coach co1(cof,col,cor);
    liste<Player> l1;
    l1.ajouter(0,pg1);
    l1.ajouter(1,sg1);
    l1.ajouter(2,sf1);
    l1.ajouter(3,pf1);
    l1.ajouter(4,c1);
    Franchise franchise1(city,name,abr,l1,co1,teamr);

    flux.seekg(0,ios::beg); //on se replace au début du fichier .txt

    for(int k=0;k<teamJ2*8;k++){
        getline( flux, ligne );
    }

    flux >> city >> name >> abr;
    getline( flux, ligne );
    flux >> pgf >> pgl >> pgov >> pgpo >> pgpr;
    getline( flux, ligne );
    flux >> sgf >> sgl >> sgov >> sgpo >> sgpr;
    getline( flux, ligne );
    flux >> sff >> sfl >> sfov >> sfpo >> sfpr;
    getline( flux, ligne );
    flux >> pff >> pfl >> pfov >> pfpo >> pfpr;
    getline( flux, ligne );
    flux >> cf >> cl >> cov >> cpo >> cpr;
    getline( flux, ligne );
    flux >> cof >> col >> cor >> teamr;
    flux.close();

    //Même chose pour la franchise2
    Player pg2(pgf,pgl,pgov,pgpo,pgpr);
    Player sg2(sgf,sgl,sgov,sgpo,sgpr);
    Player sf2(sff,sfl,sfov,sfpo,sfpr);
    Player pf2(pff,pfl,pfov,pfpo,pfpr);
    Player c2(cf,cl,cov,cpo,cpr);
    Coach co2(cof,col,cor);
    liste<Player> l2;
    l2.ajouter(0,pg2);
    l2.ajouter(1,sg2);
    l2.ajouter(2,sf2);
    l2.ajouter(3,pf2);
    l2.ajouter(4,c2);
    Franchise franchise2(city,name,abr,l2,co2,teamr);

    // on a en les premiers élements à passer en parametres car on veut les afficher dès le début
    GameWindow *mygamewindow = new GameWindow(0,franchise1.getAbreviation(),franchise2.getAbreviation(),pg1.getFirstName(),pg1.getLastName(),pg1.getPower(),pg1.getPrecision(),co1.getFirstName(),co1.getLastName(),co1.getImpact());
    mygamewindow->f1=franchise1;
    mygamewindow->f2=franchise2;

    mygamewindow->show();

}
