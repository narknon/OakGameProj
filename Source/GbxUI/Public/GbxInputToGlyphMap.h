#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxInputToGlyphMapItem.h"
#include "GbxInputToGlyphSpecialActionItem.h"
#include "GbxInputToGlyphMap.generated.h"

UCLASS()
class GBXUI_API UGbxInputToGlyphMap : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGbxInputToGlyphMapItem> InputMap;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGbxInputToGlyphSpecialActionItem> SpecialInputActionMap;
    
public:
    UGbxInputToGlyphMap();
};

