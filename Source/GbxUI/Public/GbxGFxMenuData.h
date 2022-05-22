#pragma once
#include "CoreMinimal.h"
#include "GbxMenuData.h"
#include "GbxGFxMenuData.generated.h"

class UGbxGFxMenu;
class UGbxHUDStateData;
class UObject;

UCLASS()
class GBXUI_API UGbxGFxMenuData : public UGbxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxGFxMenu> MovieClass;
    
    UPROPERTY(EditAnywhere)
    FString TransitionMovieClipTarget;
    
    UPROPERTY(EditAnywhere)
    FString TransitionOutAnimation;
    
    UPROPERTY(EditAnywhere)
    float TransitionOutTimeout;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDStateData* OverrideHUDState;
    
    UPROPERTY(EditAnywhere)
    int32 GFxMenuDrawPriorityBoost;
    
    UPROPERTY(Transient)
    TArray<UObject*> CreatedMenus;
    
    UGbxGFxMenuData();
};

