#ifndef NEWTASKWIDGET_H
#define NEWTASKWIDGET_H

#include <DMainWindow>
#include <QObject>
#include <DPushButton>
#include <DDialog>
#include <DLabel>
#include <DTextEdit>
#include <QHBoxLayout>
#include <DSuggestButton>
#include <DFileDialog>
#include <QSizePolicy>
#include "btinfodialog.h"

DWIDGET_USE_NAMESPACE




class  newTaskWidget :public DDialog
{
    Q_OBJECT
public:
    explicit newTaskWidget(QString path, DDialog *parent=0);
    ~newTaskWidget();
private:
    void initUi();


private slots:
    void openfileDialog();
    void onCancelBtnClicked();
    void onSureBtnClicked();

private:
    QString m_savePath;
};


#endif // NEWTASKWIDGET_H