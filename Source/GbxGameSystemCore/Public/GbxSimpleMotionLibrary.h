#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SimpleMotionState.h"
#include "SimpleMotionInstanceState.h"
#include "GbxSimpleMotionLibrary.generated.h"

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxSimpleMotionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxSimpleMotionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateVectorMotion(float DeltaTime, FVector& CurrentValue, float ControlValue, const FSimpleMotionState& Data, float SpeedScale, const FVector& TargetValue, FSimpleMotionInstanceState& State);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateRotatorMotion(float DeltaTime, FRotator& CurrentValue, float ControlValue, const FSimpleMotionState& Data, float SpeedScale, const FRotator& TargetValue, bool bShortestRotation, FSimpleMotionInstanceState& State);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateFloatMotion(float DeltaTime, float& CurrentValue, float ControlValue, const FSimpleMotionState& Data, float SpeedScale, float TargetValue, FSimpleMotionInstanceState& State);
    
    UFUNCTION(BlueprintCallable)
    static void TeleportVectorMotion(FVector& CurrentValue, float ControlValue, const FSimpleMotionState& Data, float SpeedScale, const FVector& TargetValue, FSimpleMotionInstanceState& State);
    
    UFUNCTION(BlueprintCallable)
    static void TeleportRotatorMotion(FRotator& CurrentValue, float ControlValue, const FSimpleMotionState& Data, float SpeedScale, const FRotator& TargetValue, FSimpleMotionInstanceState& State);
    
    UFUNCTION(BlueprintCallable)
    static void TeleportFloatMotion(float& CurrentValue, float ControlValue, const FSimpleMotionState& Data, float SpeedScale, float TargetValue, FSimpleMotionInstanceState& State);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMotionState(FSimpleMotionInstanceState& State);
    
};

