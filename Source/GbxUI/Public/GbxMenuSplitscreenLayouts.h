#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxMenuSplitscreenLayouts.generated.h"

class UGbxGFxMenu;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxMenuSplitscreenLayouts {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxGFxMenu> VerticalLayout;
    
    UPROPERTY(EditAnywhere, Transient)
    TSoftClassPtr<UGbxGFxMenu> QuarterLayout;
    
    UPROPERTY()
    FSoftObjectPath QuarterLayoutPath;
    
    FGbxMenuSplitscreenLayouts();
};

