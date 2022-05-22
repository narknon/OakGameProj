#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MotionControlLibrary.generated.h"

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UMotionControlLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMotionControlLibrary();
    UFUNCTION(BlueprintPure)
    static float UpdateSpeed(float CurrentSpeed, float TargetSpeed, float Acceleration, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static FRotator Spin(const FRotator& CurrentRotation, float RotationRate, FVector RotationAxis, float DeltaTime);
    
};

