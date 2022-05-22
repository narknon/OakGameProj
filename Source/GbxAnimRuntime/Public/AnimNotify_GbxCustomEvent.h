#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EGbxCustomEventContext.h"
#include "AnimNotify_GbxCustomEvent.generated.h"

UCLASS(CollapseCategories)
class GBXANIMRUNTIME_API UAnimNotify_GbxCustomEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UPROPERTY(EditAnywhere)
    EGbxCustomEventContext EventContext;
    
    UPROPERTY(EditAnywhere)
    uint8 bRunOnServer: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRunOnClient: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRunIfLocalPlayer: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTriggerOnFirstPersonMesh: 1;
    
    UAnimNotify_GbxCustomEvent();
};

