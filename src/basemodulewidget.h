/*
 * Copyright (C) 2017 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Author:     kirigaya <kirigaya@mkacg.com>
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BASEMODULEWIDGET_H
#define BASEMODULEWIDGET_H

#include <DWidget>
#include <QVBoxLayout>
#include <DLabel>

DWIDGET_USE_NAMESPACE

class BaseModuleWidget : public DWidget
{
    Q_OBJECT
public:
    explicit BaseModuleWidget(QWidget* content, QWidget *parent = nullptr);

    void setTitle(const QString &title);
    void setDescribe(const QString &describe);

private:
    QVBoxLayout* m_layout;
    DLabel* m_titleLbl;
    DLabel* m_describeLbl;
};

#endif // BASEMODULEWIDGET_H
