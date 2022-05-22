#pragma once
#include "CoreMinimal.h"
#include "GbxProbeExtraData.h"
#include "GbxProbeId.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EGbxProbeResult.h"
#include "GbxProbesBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UGbxProbesBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxProbesBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static void ResolveGbxProbeId(const UObject* InObj, FGameplayTag InTag, FGbxProbeId& OutId, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static void MakeProbeId(const FString& Class, const FString& Type, const FString& SubType, FGbxProbeId& OutId);
    
    UFUNCTION(BlueprintPure)
    static void IsValidId(const FGbxProbeId& ProbeId, bool& IsValid);
    
    UFUNCTION(BlueprintPure)
    static void IsTestProbeEnabled(const FGbxProbeId& ProbeId, FName Test, bool& IsEnabled);
    
    UFUNCTION(BlueprintPure)
    static void IsTestEnabled(FName Test, bool& IsEnabled);
    
    UFUNCTION(BlueprintPure)
    static void IsClassEnabled(FName Class, bool& IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void FlushPendingTestProbes();
    
    UFUNCTION(BlueprintCallable)
    static void EmitTestProbeResultWithData(const FGbxProbeId& ProbeId, FName Test, EGbxProbeResult Result, const TArray<FGbxProbeExtraData>& ExtraDataArray);
    
    UFUNCTION(BlueprintCallable)
    static void EmitTestProbeResult(const FGbxProbeId& ProbeId, FName Test, EGbxProbeResult Result, const FString& ExtraData);
    
};

