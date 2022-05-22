#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EffectCollectionData.generated.h"

class UEffectCollectionData;
class UWwiseEvent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable, Const)
class GBXGAMESYSTEMCORE_API UEffectCollectionData : public UObject {
    GENERATED_BODY()
public:
    UEffectCollectionData();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static UWwiseEvent* StaticGetWwiseEvent(TSubclassOf<UEffectCollectionData> Collection, UObject* ContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static void StaticGetParticleEffectAndWwiseEvent(TSubclassOf<UEffectCollectionData> Collection, UObject* ContextObject, UParticleSystem*& ParticleEffect, UWwiseEvent*& WwiseEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static UParticleSystem* StaticGetParticleEffect(TSubclassOf<UEffectCollectionData> Collection, UObject* ContextObject) const;
    
    UFUNCTION(BlueprintNativeEvent)
    UWwiseEvent* GetWwiseEvent(UObject* ContextObject) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void GetParticleEffectAndWwiseEvent(UObject* ContextObject, UParticleSystem*& ParticleEffect, UWwiseEvent*& WwiseEvent) const;
    
    UFUNCTION(BlueprintNativeEvent)
    UParticleSystem* GetParticleEffect(UObject* ContextObject) const;
    
};

