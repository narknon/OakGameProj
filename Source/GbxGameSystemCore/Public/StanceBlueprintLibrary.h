#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StanceBlueprintLibrary.generated.h"

class UAnimInstance;
class UStanceComponent;
class AAIController;
class AActor;
class UStanceDataProvider;
class UStanceType;
class UStanceData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UStanceBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStanceBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static UStanceComponent* TryGetStanceComponent(AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    static void SetStance(AActor* Target, UStanceDataProvider* Stance);
    
    UFUNCTION(BlueprintPure)
    static bool IsStanceComponentInStance(UStanceComponent* StanceComponent, UStanceDataProvider* Stance);
    
    UFUNCTION(BlueprintPure)
    static bool IsInStance(UAnimInstance* AnimInstance, UStanceDataProvider* Stance);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_StanceTypeStanceType(UStanceType* A, UStanceType* B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_StanceDataStanceData(UStanceData* A, UStanceData* B);
    
    UFUNCTION(BlueprintCallable)
    static void ClearStance(AActor* Target);
    
};

