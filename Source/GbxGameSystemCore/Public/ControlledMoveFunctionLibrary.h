#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ControlledMoveFunctionLibrary.generated.h"

class UControlledMove;
class AActor;

UCLASS(BlueprintType)
class UControlledMoveFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UControlledMoveFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void StopControlledMove(AActor* Actor, TSubclassOf<UControlledMove> ControlledMove, bool bZeroVelocity, bool bInterrupted);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool StartControlledMove(AActor* Actor, TSubclassOf<UControlledMove> ControlledMove, AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, AActor* TargetActor, FVector TargetLocation);
    
    UFUNCTION(BlueprintPure)
    static bool IsPerformingSpecificControlledMove(AActor* Actor, TSubclassOf<UControlledMove> ControlledMove);
    
    UFUNCTION(BlueprintPure)
    static bool IsPerformingControlledMove(AActor* Actor);
    
};

