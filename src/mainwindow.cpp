#include "mainwindow.h"
#include "teamchoice.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->rulesBox->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newGameButton_clicked()
{
    this->hide();

    TeamChoice *myteamchoice = new TeamChoice(nullptr);

    myteamchoice->show(); // Création et affichage d'un nouvelle fenetre de type TeamChoice
}

void MainWindow::on_exitButton_clicked()
{
    exit(0); // Ce bouton quitte simplement le jeu
}

void MainWindow::on_okButton_clicked()
{
    ui->rulesBox->hide();
    ui->exitButton->show();
    ui->newGameButton->show();
    ui->rulesButton->show();
}
void MainWindow::on_rulesButton_clicked()
{
    ui->rulesBox->show();
    ui->exitButton->hide();
    ui->newGameButton->hide();
    ui->rulesButton->hide();
}
