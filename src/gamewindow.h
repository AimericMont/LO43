#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>

#include "franchise.h"
#include "personne.h"
#include "liste.h"
#include <QTimer>

namespace Ui {
class GameWindow;
}

class GameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = 0);
    explicit GameWindow(QWidget *parent = 0,string a1 = nullptr, string a2 = nullptr, string a3 = nullptr, string a4 = nullptr, int b1 = 0, int b2 = 0, string c1 = nullptr, string c2 = nullptr, int c3  = 0);
    ~GameWindow();
    Franchise f1, f2;
    int part=0,pop=1,iod=1, tenClick=0; // pop=power or precision
    QTimer timer;
    liste<float> res; // resultat

private slots:
    void on_continueButton_clicked();

    void changeBarValue();

    void changeDisplayImage(int tenClick);

    void on_shotButton_clicked();

private:
    Ui::GameWindow *ui;
};

#endif // GAMEWINDOW_H
