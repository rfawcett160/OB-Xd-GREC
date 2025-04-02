// Removing '#pragma once' from this file as it is already referenced in 'Utils.h'.
// Robert Fawcett
#include "Utils.h"

void openInPdf(const File& file)
{
    if (file.existsAsFile()) {

        file.startAsProcess();

    }
    else {
        
        NativeMessageBox::showMessageBox(AlertWindow::WarningIcon, "Error", "OB-Xd Manual.pdf not found.");
        }
}
