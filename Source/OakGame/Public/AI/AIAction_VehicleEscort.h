#pragma once
#include "CoreMinimal.h"
#include "AIAction_Sequence.h"
#include "UObject/NoExportTypes.h"
#include "AIAspectSettings_VehicleEscortSpeed.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAction_VehicleEscort.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API UAIAction_VehicleEscort : public UAIAction_Sequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_VehicleEscortSpeed EscortSettings;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector EscortFindComponentKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector EscortLocationComponentKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector EscortLocationReferenceKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector EscortLocationOffsetKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector IsEscortingTargetActorInfoKey;
    
    UPROPERTY(EditAnywhere)
    bool bMoveEvenIfUnreachable;
    
    UAIAction_VehicleEscort();
    UFUNCTION(BlueprintCallable)
    static void InitEscortTarget(AActor* Target, const FVector& OffsetVector, AActor* OrientationReference);
    
    UFUNCTION(BlueprintCallable)
    static void InitCustomEscort(AActor* Target, AActor* ActorToEscort, const FVector& OffsetVector, AActor* OrientationReference);
    
};

