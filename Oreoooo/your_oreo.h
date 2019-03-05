#ifndef YOUR_OREO_H
#define YOUR_OREO_H

#include <QDialog>

namespace Ui {
class your_oreo;
}

class your_oreo : public QDialog
{
    Q_OBJECT

public:
    explicit your_oreo(QWidget *parent = nullptr);
    ~your_oreo();

private:
    Ui::your_oreo *ui;
};

#endif // YOUR_OREO_H
