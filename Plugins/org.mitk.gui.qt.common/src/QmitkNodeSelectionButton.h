/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center,
Division of Medical and Biological Informatics.
All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/


#ifndef QMITK_NODE_SELECTION_BUTTON_H
#define QMITK_NODE_SELECTION_BUTTON_H

#include <mitkWeakPointer.h>
#include <mitkDataNode.h>

#include "org_mitk_gui_qt_common_Export.h"

#include "QPushButton"


/** Button class that can be used to display informations about a passed node.
 * If the passed node is a null ptr the node info text will be shown.
 * In difference to the normal push button text property. The node info can
 * be formated text (e.g. HTML code; like the tooltip text).*/
class MITK_QT_COMMON QmitkNodeSelectionButton : public QPushButton
{
  Q_OBJECT

public:
  explicit QmitkNodeSelectionButton(QWidget *parent = nullptr);

public Q_SLOTS :
  virtual void SetSelectedNode(mitk::DataNode* node);
  virtual void SetNodeInfo(QString info);

protected:
  void paintEvent(QPaintEvent *p) override;

  mitk::WeakPointer<mitk::DataNode> m_SelectedNode;
  QString m_Info;
};


#endif // QmitkSingleNodeSelectionWidget_H