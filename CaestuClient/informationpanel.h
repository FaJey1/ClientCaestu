#ifndef INFORMATIONPANEL_H
#define INFORMATIONPANEL_H

#include <QWidget>

namespace Ui {
class InformationPanel;
}

class InformationPanel : public QWidget
{
    Q_OBJECT

public:
    explicit InformationPanel(QWidget *parent = nullptr);
    ~InformationPanel();

private:
    Ui::InformationPanel *ui;
};

#endif // INFORMATIONPANEL_H
