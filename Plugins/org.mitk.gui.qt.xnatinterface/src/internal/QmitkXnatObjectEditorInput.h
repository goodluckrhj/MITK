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

#ifndef QMITKXNATOBJECTEDITORINPUT_H_
#define QMITKXNATOBJECTEDITORINPUT_H_

#include "berryIEditorInput.h"
#include "ctkXnatObject.h"

class QmitkXnatObjectEditorInput : public berry::IEditorInput {

public:
  berryObjectMacro(QmitkXnatObjectEditorInput);
  berryNewMacro1Param(QmitkXnatObjectEditorInput, ctkXnatObject*);

  ~QmitkXnatObjectEditorInput();

  ctkXnatObject* GetXnatObject() const;

  virtual bool Exists() const;
  virtual std::string GetName() const;
  virtual std::string GetToolTipText() const;
  virtual bool operator==(const berry::Object* o) const;

private:
  QmitkXnatObjectEditorInput(ctkXnatObject* object);
  ctkXnatObject* m_Object;

};

#endif /*QMITKXNATOBJECTEDITORINPUT_H_*/
