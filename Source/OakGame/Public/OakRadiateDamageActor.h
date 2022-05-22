#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EnvQueryParams.h"
#include "Engine/EngineTypes.h"
#include "ERadiateMovementType.h"
#include "ERadiateMethod.h"
#include "AttributeInitializationData.h"
#include "UObject/NoExportTypes.h"
#include "OakRadiateDamageActor.generated.h"

class UOakDamageData;
class UElementalPuddleSimpleSpawnData;
class USplatData;
class UObject;
class AOakRadiateDamageActor;

UCLASS(NotPlaceable)
class OAKGAME_API AOakRadiateDamageActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FEnvQueryParams QueryParams;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakDamageData> DamageData;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Duration;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Rate;
    
    UPROPERTY(EditAnywhere)
    ERadiateMethod RadiateMethod;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Velocity;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MinDistance;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxDistance;
    
    UPROPERTY(EditAnywhere)
    ERadiateMovementType RadiateMovementType;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxStepUpHeight;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxStepDownHeight;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData InitialStepDownHeight;
    
    UPROPERTY(EditAnywhere)
    float TraceZOffset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyTraceStaticMobility;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> ExtraIgnoreTraceChannels;
    
    UPROPERTY(EditAnywhere)
    bool bUseContextRotation;
    
    UPROPERTY(EditAnywhere)
    FVector EffectTraceExtent;
    
    UPROPERTY(EditAnywhere)
    float EffectZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UElementalPuddleSimpleSpawnData* ElementalPuddleSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USplatData* SplatData;
    
public:
    AOakRadiateDamageActor();
    UFUNCTION(BlueprintImplementableEvent)
    void OnSnapToGroundFailed(bool bIsInitialStepDown);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPerformRadiateDamageTasks();
    
    UFUNCTION(BlueprintPure)
    static bool InitialSnapToGroundWouldFail(UObject* ContextObj, TSubclassOf<AOakRadiateDamageActor> Template, AActor* TransformActor, TEnumAsByte<ECollisionChannel> NewTraceChannel);
    
};

