#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_GbxAction.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotify_StretchBonesMarker.generated.h"

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_StretchBonesMarker : public UAnimNotify_GbxAction {
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
    float XScale;
    
    UAnimNotify_StretchBonesMarker();
};

