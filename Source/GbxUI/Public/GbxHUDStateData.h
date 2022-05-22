#pragma once
#include "CoreMinimal.h"
#include "EHUDInitializationAnimationSet.h"
#include "GbxDataAsset.h"
#include "EGbxHUDStateListType.h"
#include "GbxHUDStateData.generated.h"

class UGbxGFxHUDWidget;

UCLASS()
class GBXUI_API UGbxHUDStateData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StateName;
    
    UPROPERTY(EditAnywhere)
    EHUDInitializationAnimationSet InitializationAnimSet;
    
    UPROPERTY(EditAnywhere)
    EGbxHUDStateListType ListType;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UGbxGFxHUDWidget>> ValidWidgetTypes;
    
    UPROPERTY(EditAnywhere)
    bool StayOnTopOfStack;
    
    UGbxHUDStateData();
};

