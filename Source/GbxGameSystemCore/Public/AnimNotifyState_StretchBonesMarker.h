#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_GbxAction.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_StretchBonesMarker.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAnimNotifyState_StretchBonesMarker : public UAnimNotifyState_GbxAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StartBoneName;
    
    UPROPERTY(EditAnywhere)
    FName EndBoneName;
    
    UPROPERTY()
    float AnimatedTargetDistance;
    
    UPROPERTY()
    FVector LookAtVector;
    
    UPROPERTY()
    float EndAnimatedTargetDistance;
    
    UPROPERTY()
    FVector EndLookAtVector;
    
    UPROPERTY()
    float XScale;
    
    UAnimNotifyState_StretchBonesMarker();
};

