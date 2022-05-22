#pragma once
#include "CoreMinimal.h"
#include "EOakInventoryMenuPaperDollSlotAdjacency.h"
#include "OakInventoryMenuPaperDollSlotInfo.generated.h"

class UInventorySlotData;
class UGbxInputKeyRebindData_Button;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakInventoryMenuPaperDollSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString WidgetName;
    
    UPROPERTY(EditAnywhere)
    FString TrinketName;
    
    UPROPERTY(EditAnywhere)
    UInventorySlotData* SlotData;
    
    UPROPERTY(EditAnywhere)
    FName SlotFilterId;
    
    UPROPERTY(EditAnywhere)
    FString SlotIconWidgetName;
    
    UPROPERTY(EditAnywhere)
    FString SlotIconFrame;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGbxInputKeyRebindData_Button> ButtonBinding;
    
    UPROPERTY(EditAnywhere)
    FString NoKeyBoundFrameName;
    
    UPROPERTY(EditAnywhere)
    FName SlotIconInputAction;
    
    UPROPERTY(EditAnywhere)
    EOakInventoryMenuPaperDollSlotAdjacency Adjancency;
    
    UPROPERTY(EditAnywhere)
    bool bUnlockedIsBeastmaster;
    
    UPROPERTY(EditAnywhere)
    bool bUnlockedIsExtraArtifacts;
    
    UPROPERTY(EditAnywhere)
    int32 SplitScreenPage;
    
    FOakInventoryMenuPaperDollSlotInfo();
};

