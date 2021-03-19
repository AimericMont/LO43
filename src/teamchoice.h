#ifndef TEAMCHOICE_H
#define TEAMCHOICE_H

#include <QDialog>
#include <QListWidgetItem>
#include <fstream>
#include "gamewindow.h"
#include "personne.h"

using namespace std;


namespace Ui {
class TeamChoice;
}

class TeamChoice : public QDialog
{
    Q_OBJECT

public:
    explicit TeamChoice(QWidget *parent = 0);
    ~TeamChoice();
    int teamJ1=9, teamJ2=27;
    Franchise fr1,fr2;

private slots:
    void on_listJ2_itemClicked(QListWidgetItem *item);

    void on_listJ1_itemClicked(QListWidgetItem *item);

    void on_playButton_clicked();

private:
    Ui::TeamChoice *ui;
};

#endif // TEAMCHOICE_H
