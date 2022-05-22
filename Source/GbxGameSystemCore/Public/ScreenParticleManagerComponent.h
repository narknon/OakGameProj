#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScreenParticleRecord.h"
#include "ParticlePropertyTracker.h"
#include "EScreenParticleScalingMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScreenParticleManagerComponent.generated.h"

class UParticlePropertyTrackingData;
class AActor;
class UParticleSystemComponent;
class UParticleSystem;
class UMaterialInterface;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UScreenParticleManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FScreenParticleRecord> ScreenParticleRecords;
    
    UPROPERTY()
    TArray<FParticlePropertyTracker> TrackedParticleProperties;
    
public:
    UScreenParticleManagerComponent();
    UFUNCTION(BlueprintCallable)
    static void ShowScreenParticleForActor(AActor* Actor, UParticleSystem* Template, bool bHideWhenFinished, FVector2D ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, FName Tag, bool bAllowMultipleInstances, bool bServerAuthority, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu);
    
private:
    UFUNCTION()
    void OnScreenParticleFinished(UParticleSystemComponent* Component);
    
public:
    UFUNCTION(BlueprintCallable)
    static void HideScreenParticleForActor(AActor* Actor, UParticleSystem* Template, FName Tag, bool bAllowParticleToFinish, bool bServerAuthority);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTrackParticleProperty(UParticlePropertyTrackingData* TrackingData, UParticleSystem* Template, FName Tag, FName PropertyName, float PropertyValue, bool bAddToValue, UMaterialInterface* UsedMaterialProperty, FName MaterialPropertyName);
    
    UFUNCTION(Client, Reliable)
    void ClientShowScreenParticleEx(UParticleSystem* Template, uint8 InitFlags, FVector2D ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void ClientShowScreenParticle(UParticleSystem* Template, bool bHideWhenFinished, FVector2D ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, FName Tag, bool bAllowMultipleInstances, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu, bool bDepthPriorityWorld);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetScreenParticleVectorParameter(UParticleSystem* Template, FName Tag, FName ParameterName, FVector Param);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetScreenParticleMaterialParameter(UParticleSystem* Template, FName Tag, FName ParameterName, UMaterialInterface* Param);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetScreenParticleFloatParameter(UParticleSystem* Template, FName Tag, FName ParameterName, float Param);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetScreenParticleColorParameter(UParticleSystem* Template, FName Tag, FName ParameterName, FLinearColor Param);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetScreenParticleActorParameter(UParticleSystem* Template, FName Tag, FName ParameterName, AActor* Param);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHideScreenParticle(UParticleSystem* Template, FName Tag, bool bAllowParticleToFinish);
    
};

