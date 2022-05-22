#include "GFxFlavorTextMenu.h"

class AConditionalFlavorTextIO;

void UGFxFlavorTextMenu::InitWithData(TArray<FTextElementCondition> FlavorTextData, FText TitleText, AConditionalFlavorTextIO* FlavorTextIO) const {
}

UGFxFlavorTextMenu::UGFxFlavorTextMenu() {
    this->CachedFlavorTextIO = NULL;
    this->DescriptionTextBox = NULL;
    this->TitleTextBox = NULL;
    this->ScrollBar = NULL;
    this->DescriptionTextMask = NULL;
}

