#include "GFxItemCardObject.h"

FGFxItemCardObject::FGFxItemCardObject() {
    this->TotalSpinnerHeightOverride = 0.00f;
    this->CostSpinTime = 0.00f;
    this->PauseOnNewValueTime = 0.00f;
    this->SecondaryStatsBottomSpacer = 0.00f;
    this->ClassModSpacingHeight = 0.00f;
    this->LegendaryArtifactSpacingHeight = 0.00f;
    this->TotalVerticalAdjustment = 0.00f;
    this->CurrencyWidget = NULL;
    this->ItemName = NULL;
    this->MainStatBackground = NULL;
    this->MainStatBackgroundRaritySides = NULL;
    this->TextStats = NULL;
    this->SDUTextStats = NULL;
    this->PickupTextStats = NULL;
    this->MaxNumTextStats = 0;
    this->TextStatsTextfieldToUse = NULL;
    this->ManufacturerWrapper = NULL;
    this->ManufacturerFill = NULL;
    this->ManufacturerStats = NULL;
    this->ManufacturerTextTint = NULL;
    this->ItemCardBottom = NULL;
}

