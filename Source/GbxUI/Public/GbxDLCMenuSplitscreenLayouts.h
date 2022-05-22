#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxDLCMenuSplitscreenLayouts.generated.h"

class UGbxGFxMenu;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxDLCMenuSplitscreenLayouts {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TSoftClassPtr<UGbxGFxMenu> VerticalLayout;
    
    UPROPERTY(EditAnywhere, Transient)
    TSoftClassPtr<UGbxGFxMenu> QuarterLayout;
    
    UPROPERTY()
    FSoftObjectPath SoftVerticalLayout;
    
    UPROPERTY()
    FSoftObjectPath SoftQuarterLayout;
    
    FGbxDLCMenuSplitscreenLayouts();
};

