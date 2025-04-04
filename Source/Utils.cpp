// Removing '#pragma once' from this file as it is already referenced in 'Utils.h'.
// Robert Fawcett
#include "Utils.h"

void openInPdf(const juce::File& file)
    {
        if (file.existsAsFile())
        {
            file.startAsProcess();
        }
        else
        {
            juce::NativeMessageBox::showMessageBoxAsync(
                juce::MessageBoxIconType::WarningIcon,
                "Error",
                "OB-Xd Manual.pdf not found.",
                nullptr
            );
        }
    }