#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <iostream>
#include <QTimer>
#include "math.h"
#include <unistd.h>

GameWindow::GameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
}

GameWindow::GameWindow(QWidget *parent,string a1, string a2, string a3, string a4, int b1, int b2, string c1, string c2, int c3) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    ui->groupScore->hide();
    ui->disPlayer->setText(QString::fromStdString(a3+' '+a4));
    ui->disPower->setText(QString::number(b1));
    ui->disPrecision->setText(QString::number(b2));
    ui->abr1->setText(QString::fromStdString(a1));
    ui->abr2->setText(QString::fromStdString(a2));
    ui->disCoach->setText(QString::fromStdString(c1+' '+c2));
    ui->disImpact->setText(QString::number(c3));
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::on_continueButton_clicked()
{
    if (part==0 || part==1) // part0 et 1
    {
        ui->continueButton->hide();
        ui->transitiontxt->hide();
        ui->transition->hide();
        ui->groupScore->show();

        if (part==1)
        {
            QPalette pal=palette();
            pal.setColor(QPalette::Highlight,Qt::darkGray);
            ui->powerBar->setPalette(pal);      //Changement de couleur
            ui->precisionBar->setPalette(pal);  //des barres de tir
            ui->powerBar->setStyleSheet("background: transparent; color: green;");        //avec le fond transparent
            ui->precisionBar->setStyleSheet("background: transparent;");    //pour afficher le degrade
            ui->imgPlayer->setPixmap(QPixmap(":/theme/blackPlayer"));   //Changement du maillot
            ui->disImage->setPixmap(QPixmap(":/theme/darkGrey"));       //et de la ligne de fond
            ui->disPlayer->setText(QString::fromStdString(f2.lpr[0].getFirstName()+' '+f2.lpr[0].getLastName()));
            ui->disPower->setText(QString::number(f2.lpr[0].getPower()));
            ui->disPrecision->setText(QString::number(f2.lpr[0].getPower()));
            ui->disCoach->setText(QString::fromStdString(f2.headCoach.getFirstName()+' '+f2.headCoach.getLastName()));
            ui->disPrecision->setText(QString::number(f2.headCoach.getImpact()));
        }
        else //part==0
        {
            connect(&timer, SIGNAL(timeout()), this, SLOT(changeBarValue()));
            timer.start(3);
        }
        part++;
    }
    else
    {
        exit(0);
    }
}

void GameWindow::changeBarValue()
{
    if(pop==1){ //powerBar
        if(iod==1){ // increase
            ui->powerBar->setValue(ui->powerBar->value()+1);
            if(ui->powerBar->value()==100)
                iod=0;
        }
        else // decrease
        {
            ui->powerBar->setValue(ui->powerBar->value()-1);
            if(ui->powerBar->value()==0)
                iod=1;
        }
    }
    else //precisionBar
    {
        if(iod==1){ // increase
            ui->precisionBar->setValue(ui->precisionBar->value()+1);
            if(ui->precisionBar->value()==100)
                iod=0;
        }
        else // decrease
        {
            ui->precisionBar->setValue(ui->precisionBar->value()-1);
            if(ui->precisionBar->value()==0)
                iod=1;
        }
    }
}

void GameWindow::changeDisplayImage(int tenClick){
    if(tenClick/2+1<5){
        if(part==1){
            ui->disPlayer->setText(QString::fromStdString(f1.lpr[tenClick/2+1].getFirstName()+' '+f1.lpr[tenClick/2+1].getLastName()));
            ui->disPower->setText(QString::number(f1.lpr[tenClick/2+1].getPower()));
            ui->disPrecision->setText(QString::number(f1.lpr[tenClick/2+1].getPrecision()));
        }
        else
        {
            ui->disPlayer->setText(QString::fromStdString(f2.lpr[tenClick/2+1].getFirstName()+' '+f2.lpr[tenClick/2+1].getLastName()));
            ui->disPower->setText(QString::number(f2.lpr[tenClick/2+1].getPower()));
            ui->disPrecision->setText(QString::number(f2.lpr[tenClick/2+1].getPrecision()));
        }
    }
}

void GameWindow::on_shotButton_clicked()
{
    timer.stop();
    float valeur;

    if(pop==1) // si on va cliquer pour la puissance
    {
        valeur=ui->powerBar->value();
        res.ajouter(tenClick,valeur);
        pop=0;
    }
    else // si on va cliquer pour la precison (= fin du tir = calcul score, actualisation du score, changement player, etc...)
    {
        valeur=ui->precisionBar->value();
        changeDisplayImage(tenClick);
        res.ajouter(tenClick,valeur);
        pop=1;

        if(part==1)
        {   // CALCUL DU SHOT + CHANGEMENT SCORE ET PLAYER POUR J1

            float calc = (float)f1.headCoach.getImpact()/100 * (f1.lpr[tenClick/2].getPower()/100 * res[tenClick-1]/100 + f1.lpr[tenClick/2].getPrecision()/100 * res[tenClick]/100);
            cout << res[tenClick-1]/100 << " " << res[tenClick]/100 << " " << calc << endl;
            if( calc > 1.10 && res[tenClick-1]/100 >= 0.4 && res[tenClick]/100 >= 0.4)
            {

                QString qs= ui->scr1->text();   //On recupère le score actuel de l'équipe
                int sh = qs.toInt()+1;          //On y ajoute 1 puisque le shoot est réussi

                ui->scr1->setText(QString::number(sh)); //On acutalise l'affichage

                switch (tenClick/2) {
                case 0:
                    ui->cliJ11->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                case 1:
                    ui->cliJ12->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                case 2:
                    ui->cliJ13->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                case 3:
                    ui->cliJ14->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                case 4:
                    ui->cliJ15->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                default:
                    break;
                }

            }
            else
            {
                switch (tenClick/2) {
                case 0:
                    ui->cliJ11->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                case 1:
                    ui->cliJ12->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                case 2:
                    ui->cliJ13->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                case 3:
                    ui->cliJ14->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                case 4:
                    ui->cliJ15->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                default:
                    break;
                }
            }
        }
        else
        {   // CALCUL DU SHOT + CHANGEMENT SCORE POUR J2
            float calc = (float)f2.headCoach.getImpact()/100 * (f2.lpr[tenClick/2].getPower()/100 * res[tenClick-1]/100 + f2.lpr[tenClick/2].getPrecision()/100 * res[tenClick]/100);
            cout << res[tenClick-1]/100 << " " << res[tenClick]/100 << " " << calc << endl;
            if( calc > 1.10 && res[tenClick-1]/100 >= 0.4 && res[tenClick]/100 >= 0.4)
            {

                QString qs= ui->scr2->text();
                int sh = qs.toInt()+1;

                ui->scr2->setText(QString::number(sh));

                switch (tenClick/2) {
                case 0:
                    ui->cliJ21->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                case 1:
                    ui->cliJ22->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                case 2:
                    ui->cliJ23->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                case 3:
                    ui->cliJ24->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                case 4:
                    ui->cliJ25->setPixmap(QPixmap(":/theme/greenVoyant"));
                    break;
                default:
                    break;
                }
            }
            else
            {
                switch (tenClick/2) {
                case 0:
                    ui->cliJ21->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                case 1:
                    ui->cliJ22->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                case 2:
                    ui->cliJ23->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                case 3:
                    ui->cliJ24->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                case 4:
                    ui->cliJ25->setPixmap(QPixmap(":/theme/redVoyant"));
                    break;
                default:
                    break;
                }
            }
        }
        ui->disImage->repaint(); // Cette fonction est une astuce afin de forcer l'UI à se rafraichir en redessinant un Label
    }

    if(tenClick<9)
    {
        tenClick++;
    }
    else
    {
        sleep(1); // On fait une pause d'une seconde sur le thread principale afin de laisser le score s'afficher apres les derniers tirs de chaque équipe
        if(part==1){

            tenClick=0;
            ui->transitiontxt->setText(QString::fromStdString("BLACK TEAM TO PLAY"));
            ui->groupScore->hide();
        }
        else
        {
            ui->continueButton->setText(QString::fromStdString("EXIT"));

            ui->transitiontxt->setGeometry(0,0,1500,600);

            ui->groupScore->setGeometry(451,430,601,131);
            ui->groupScore->show();

            QString qs1 = ui->scr1->text();
            QString qs2 = ui->scr2->text();
            if(qs1==qs2)
                ui->transitiontxt->setText(QString::fromStdString("TIED GAME"));
            else    if(qs1>qs2)
                        ui->transitiontxt->setText(QString::fromStdString("WHITE TEAM WON"));
                    else
                        ui->transitiontxt->setText(QString::fromStdString("BLACK TEAM WON"));
        }

        ui->continueButton->show();
        ui->transitiontxt->show();
        ui->transition->show();
        //pas besoin de hide les pBars et le shotButton car en arriere plan
    }
    timer.start(3);
}
