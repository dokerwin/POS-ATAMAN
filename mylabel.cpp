#include "mylabel.h"
#include <QDebug>
#include <QGraphicsView>

myLabel::myLabel(QWidget * parent )
:QLabel(parent)
{
    connect( this, SIGNAL( clicked() ), this, SLOT( slotClicked() ) );
}

void myLabel::slotClicked()
{
    qDebug()<<"Clicked";
}

void myLabel::mousePressEvent ( QMouseEvent * event )
{

    qDebug() << "There are" ;
    emit clicked();
}
