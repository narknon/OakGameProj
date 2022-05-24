#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "FloorSectorRing.h"
#include "OnFloorFirstFlameDelegate.h"
#include "FloorSector.h"
#include "AgonizerFloor.generated.h"

class UDamageType;
class UDamageData;
class UStaticMesh;
class UParticleSystem;
class USceneComponent;
class UMaterialInstance;
class UWwiseEvent;
class UCurveFloat;
class AAgonizer9k;

UCLASS()
class OAKGAME_API AAgonizerFloor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* FireHeat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* WarmUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* BurstFlameRing1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* BurstFlameRing2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* BurstFlameRing3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* BurstFlameRing4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* MeshCollisionRing02;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* MeshCollisionRing03;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* MeshCollisionRing04;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* MeshCollisionRing05;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* FakeEmmisiveRing02;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* FakeEmmisiveRing03;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* FakeEmmisiveRing04;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* FakeEmmisiveRing05;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* HeatingElementmeshRing02;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* HeatingElementmeshRing03;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* HeatingElementmeshRing04;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* HeatingElementmeshRing05;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInstance* HeatingElementMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* FakeEmmisiveAllRings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageData> DamageData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> DamageTypeFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* BurstFlameAudio1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* BurstFlameAudio2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* BurstFlameAudio3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* BurstFlameAudio4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* PreheatAudioSmall1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* PreheatAudioSmall2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* PreheatAudioSmall3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* PreheatAudioSmall4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* PreheatAudioBig1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* PreheatAudioBig2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* PreheatAudioBig3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* PreheatAudioBig4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BurstFlameAudioGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BurstFlamesAudioRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BurstFlamesAudioRadiusRingMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USceneComponent* SceneRootComp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WarmupTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WarmUpDelayWhenAllWarmUpDone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationFloorDoneTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FloorRotationTimeBetweenSector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnticipationTimeOneRing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnticipationTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnticipationTimeRotationPattern;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageOverlapTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BurstinitialOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BurstOffsetPerRing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FloorFireDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RingPatternInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeatingPipeEmissiveInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* EmissiveStrengthOverTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* EmissiveStrengthOverTimeFadeOut;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloorFirstFlame OnFloorFirstFlame;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayDebugCollisionZones;
    
    AAgonizerFloor();
private:
    UFUNCTION()
    void StopHeatingPipeEmissive(FFloorSectorRing& SectorRing);
    
    UFUNCTION()
    void StopDamageFeedbackRing(FFloorSector& FloorSector, FFloorSectorRing& SectorRing);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartSafeSpotPattern(float DelayBeforeStart);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationPattern(float DelayBeforeStart);
    
    UFUNCTION(BlueprintCallable)
    void StartRingPattern(float DelayBeforeStart);
    
private:
    UFUNCTION()
    void StartHeatingPipeEmissive(FFloorSectorRing& SectorRing);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void StartAnticipationSafeSpot(int32 SafeSpotSectorId);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void SetFloorRotationParameters(int32 Direction, int32 StartingSectorId);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAgonizerRef(AAgonizer9k* AgonizerRef);
    
private:
    UFUNCTION()
    void PlayBurstFlameAudio();
    
    UFUNCTION()
    void OnWarmUpDone(FFloorSector& FloorSector);
    
    UFUNCTION()
    void OnRotationAnticipationDone(FFloorSector& FloorSector, bool IsLast);
    
    UFUNCTION()
    void OnDamageFeedbackDone();
    
    UFUNCTION()
    void OnAnticipationOneRingDone(FFloorSector& FloorSector, FFloorSectorRing& SectorRing);
    
    UFUNCTION()
    void OnAnticipationDone();
    
};

