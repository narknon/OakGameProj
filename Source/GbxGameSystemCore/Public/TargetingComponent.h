#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "TargetingComponentTargetListChangedSignatureDelegate.h"
#include "EnvQueryParams.h"
#include "GbxBlackboardKeySelector.h"
#include "TargetActorInfo.h"
#include "TargetingComponent.generated.h"

class UTargetableComponent;
class AActor;
class UAISense;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UTargetingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FTargetingComponentTargetListChangedSignature TargetListChangedBpEvent;
    
    UPROPERTY(EditAnywhere)
    float QueryFrequency;
    
    UPROPERTY(EditAnywhere)
    bool bQueryImmediately;
    
    UPROPERTY(EditAnywhere)
    FEnvQueryParams QueryParams;
    
    UPROPERTY(EditAnywhere)
    TArray<FGbxBlackboardKeySelector> BlackboardKeys;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyTargetThreatsToPlayers;
    
    UPROPERTY(Export, Transient)
    UTargetableComponent* CurrentTargetable;
    
public:
    UTargetingComponent();
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetBestTarget(AActor* NewBestTarget);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBestTargetDirectlySensed(int32 TargetIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool HasTargets() const;
    
    UFUNCTION(BlueprintPure)
    bool HasTarget(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool GetTargetLocationForActor(const AActor* Actor, FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool GetTargetInfoForActor(const AActor* Actor, FTargetActorInfo& TargetInfo) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTargetInfoCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTargetInfoAt(int32 TargetIndex, FTargetActorInfo& TargetInfo) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetTargetActorAt(int32 TargetIndex) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetBestThreatActor(bool bRequireFirsthandKnowledge) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBestTargetLocation(int32 TargetIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBestTargetInfo(FTargetActorInfo& TargetInfo, int32 TargetIndex) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetBestTargetActor(int32 TargetIndex) const;
    
    UFUNCTION(BlueprintPure)
    UTargetableComponent* GetBestTargetableComponent(int32 TargetIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBestAttackTargetLocation(FVector& OutTargetVelocity, int32 TargetIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool DoesBestTargetHaveStimulusForSense(TSubclassOf<UAISense> Sense, float MaxAge, int32 TargetIndex) const;
    
};

