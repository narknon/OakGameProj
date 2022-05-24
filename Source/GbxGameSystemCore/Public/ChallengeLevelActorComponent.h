#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxAreaComponent.h"
#include "UObject/NoExportTypes.h"
#include "ChallengePlayerEventDelegate.h"
#include "ChallengeLevelActorComponent.generated.h"

class UChallenge;
class UChallengeLevelActorComponent;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UChallengeLevelActorComponent : public UGbxAreaComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UChallenge> BaseChallengeReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChallengeReference)
    TSubclassOf<UChallenge> ChallengeReference;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowInZoneMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowInMiniMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowInWorld;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_InWorldIconEnabled)
    bool bInWorldIconEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnfogRadiusWhenChallengeActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnfogHeightWhenChallengeActive;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid IconGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsStationary)
    bool bIsStationary;
    
    UPROPERTY(BlueprintAssignable)
    FChallengePlayerEvent OnPlayerChallengeActivated;
    
    UPROPERTY(BlueprintAssignable)
    FChallengePlayerEvent OnPlayerChallengeCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FChallengePlayerEvent OnPlayerEnteredChallengeArea;
    
    UPROPERTY(BlueprintAssignable)
    FChallengePlayerEvent OnPlayerExitedChallengeArea;
    
private:
    UPROPERTY(Export)
    UChallengeLevelActorComponent* OwningLevelActorComponent;
    
public:
    UChallengeLevelActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsStationary(bool bInIsStationary);
    
    UFUNCTION(BlueprintCallable)
    void SetInWorldIconEnabled(bool bEnable);
    
private:
    UFUNCTION()
    void OnRep_IsStationary(bool bOldIsStationary);
    
    UFUNCTION()
    void OnRep_InWorldIconEnabled(bool bOldEnabled);
    
    UFUNCTION()
    void OnRep_ChallengeReference();
    
    UFUNCTION()
    void HandleAttachmentChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetAssociatedActor();
    
};

