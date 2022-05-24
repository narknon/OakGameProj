#pragma once
#include "CoreMinimal.h"
#include "EAnimNotifyAlignType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_SoftAlign.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAnimNotifyState_SoftAlign : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EAnimNotifyAlignType Type;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectsLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectsRotation: 1;
    
    UPROPERTY(EditAnywhere)
    FName PartnerName;
    
    UPROPERTY(EditAnywhere)
    FName ActionSlotName;
    
    UPROPERTY(EditAnywhere)
    FName AlignSocketPartner;
    
public:
    UAnimNotifyState_SoftAlign();
};

