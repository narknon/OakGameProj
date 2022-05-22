#pragma once
#include "CoreMinimal.h"
#include "GameResourceUserEvent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameResourcePoolReference.h"
#include "EGameResourcePoolState.h"
#include "GameResourcePoolFunctionLibrary.generated.h"

class AActor;
class UGameResourceData;
class UGameResourcePoolData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGameResourcePoolFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameResourcePoolFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetResourcePoolValue(FGameResourcePoolReference InPool, float InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ResetResourcePoolRegenDelayByGameResourceData(AActor* Actor, UGameResourceData* Resource);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ResetResourcePoolRegenDelay(FGameResourcePoolReference InPool);
    
    UFUNCTION(BlueprintCallable)
    static void RefillResourcePoolByPercentage(FGameResourcePoolReference InPool, float Percentage, float MaxPercentage);
    
    UFUNCTION(BlueprintCallable)
    static bool IsResourcePoolInState(FGameResourcePoolReference InPool, EGameResourcePoolState InState);
    
    UFUNCTION()
    static FName GetDelegatePrefixForResourceEvent(FGameResourceUserEvent& InResourceUserEvent);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_ResourcePoolReference(FGameResourcePoolReference A, FGameResourcePoolReference B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_ResourcePoolData(FGameResourcePoolReference ResourcePoolReference, UGameResourcePoolData* ResourcePoolData);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_ResourceData(FGameResourcePoolReference ResourcePoolReference, UGameResourceData* ResourceData);
    
    UFUNCTION(BlueprintCallable)
    static void DrainResourcePoolByPercentage(FGameResourcePoolReference InPool, float Percentage, float MinPercentage);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteResourcePool(UPARAM(Ref) FGameResourcePoolReference& InPool);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ClearResourcePoolRegenDelayByGameResourceData(AActor* Actor, UGameResourceData* Resource);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ClearResourcePoolRegenDelay(FGameResourcePoolReference InPool);
    
    UFUNCTION(BlueprintPure)
    static void BreakResourcePoolReference(FGameResourcePoolReference InPool, bool& bValid, float& CurrentValue, float& MinValue, float& MaxValue);
    
    UFUNCTION(BlueprintCallable)
    static void AdjustResourcePoolValue(FGameResourcePoolReference InPool, float InValue);
    
};

