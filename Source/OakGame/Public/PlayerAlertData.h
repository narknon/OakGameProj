#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EPlayerAlertType.h"
#include "UObject/NoExportTypes.h"
#include "PlayerAlertData.generated.h"

class UDialogEvent;
class UInWorldIconData;

UCLASS(EditInlineNew)
class UPlayerAlertData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPlayerAlertType PlayerAlertType;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* PlayerAlertEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerAlertLifetime;
    
    UPROPERTY(EditDefaultsOnly)
    bool ApplyOutlineEffect;
    
    UPROPERTY(EditDefaultsOnly)
    bool AttachAlertIcon;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* PlayerAlertIconData;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor OutlineColor;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CustomStencilValue;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPlaySound;
    
    UPlayerAlertData();
};

