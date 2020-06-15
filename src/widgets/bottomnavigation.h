#ifndef BOTTOMNAVIGATION_H
#define BOTTOMNAVIGATION_H

#include <QMap>
#include <QDesktopServices>
#include <QEvent>
#include <QHBoxLayout>
#include <QProcess>
#include <QUrl>

#include <DImageButton>
#include <DIconButton>
#include <DWidget>

DWIDGET_USE_NAMESPACE

class BottomNavigation : public DWidget
{
    Q_OBJECT
public:
    explicit BottomNavigation(DWidget *parent = nullptr);

private slots:
    void onButtonClicked();

protected:
    bool eventFilter(QObject *watched, QEvent *event) Q_DECL_OVERRIDE;

private:
    QMap<DWidget*, QString> m_buttons;
};

#endif // BOTTOMNAVIGATION_H
