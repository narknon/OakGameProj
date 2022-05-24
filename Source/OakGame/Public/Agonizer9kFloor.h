#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "OnFloorFirstFlame2Delegate.h"
#include "SectorFromBP.h"
#include "Ring.h"
#include "Sector.h"
#include "Agonizer9kFloor.generated.h"

class UWwiseAudioComponent;
class UTeam;
class USceneComponent;
class UMaterialInstance;
class UCurveFloat;
class UDamageData;
class UWwiseEvent;
class AAgonizer9k;

UCLASS()
class OAKGAME_API AAgonizer9kFloor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTeam* PlayersTeam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInstance* HeatingElementMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageData> DamageData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageData> DamageData_SmallDamage;
    
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
    float BurstinitialOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BurstOffsetPerRing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RingPatternInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeatingPipeEmissiveInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* EmissiveStrengthOverTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* EmissiveStrengthOverTimeFadeOut;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloorFirstFlame2 OnFloorFirstFlame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSectorFromBP> SectorsBP;
    
private:
    UPROPERTY()
    AAgonizer9k* AgonizerRef;
    
    UPROPERTY(Export)
    UWwiseAudioComponent* AudioComponent1;
    
    UPROPERTY(Export)
    UWwiseAudioComponent* AudioComponent2;
    
    UPROPERTY(Export)
    UWwiseAudioComponent* AudioComponent3;
    
    UPROPERTY(Export)
    UWwiseAudioComponent* AudioComponent4;
    
public:
    AAgonizer9kFloor();
private:
    UFUNCTION()
    void StopHeatingPipeEmissive(FRing& SectorRing);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartSafeSpotPattern(float DelayBeforeStart);
    
    UFUNCTION(BlueprintCallable)
    void StartRotationPattern(float DelayBeforeStart);
    
    UFUNCTION(BlueprintCallable)
    void StartRingPattern(float DelayBeforeStart);
    
private:
    UFUNCTION()
    void StartHeatingPipeEmissive(FRing& SectorRing);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void StartAnticipationSafeSpot(const TArray<int32>& SafeSpotSectorIds);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void SetFloorRotationParameters(int32 Direction, int32 StartingSectorId);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAgonizerRef(AAgonizer9k* NewAgonizerRef);
    
private:
    UFUNCTION()
    void PlayBurstFlameAudio();
    
    UFUNCTION()
    void OnWarmUpDone(FSector& FloorSector);
    
    UFUNCTION()
    void OnRotationAnticipationDone(FSector& FloorSector, bool IsLast);
    
    UFUNCTION()
    void OnFloorPatternDone();
    
    UFUNCTION()
    void OnAnticipationOneRingDone(FSector& FloorSector, FRing& SectorRing);
    
    UFUNCTION()
    void OnAnticipationDone();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateSectorsDataFromBP();
    
};

