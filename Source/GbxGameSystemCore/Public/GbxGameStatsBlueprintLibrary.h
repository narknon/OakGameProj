#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GbxGameStatsBlueprintLibrary.generated.h"

class UObject;
class UGameStatData;
class AActor;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxGameStatsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxGameStatsBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateStatForParty(UObject* WorldContextObject, UGameStatData* StatData, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateStat(AActor* ContextActor, UGameStatData* StatData, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementStatForParty(UObject* WorldContextObject, UGameStatData* StatData, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    static void IncrementStat(AActor* ContextActor, UGameStatData* StatData, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStatValue(AActor* ContextActor, UGameStatData* StatData);
    
    UFUNCTION(BlueprintCallable)
    static void DecrementStatForParty(UObject* WorldContextObject, UGameStatData* StatData, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    static void DecrementStat(AActor* ContextActor, UGameStatData* StatData, int32 Amount);
    
};

