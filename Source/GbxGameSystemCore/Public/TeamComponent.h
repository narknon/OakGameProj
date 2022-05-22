#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GenericTeamAgentInterface.h"
#include "InspectionInfoProvider.h"
#include "ETeamCollisionChannel.h"
#include "TeamComponent.generated.h"

class UTeam;
class AActor;
class UTeamComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UTeamComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_Team)
    UTeam* Team;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    UTeam* TeamDefault;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSetTeamCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_bIgnoreCollisionWithTeam)
    bool bIgnoreCollisionWithTeam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInheritSourceTeamFromInstigator;
    
    UPROPERTY(Export, Transient)
    UTeamComponent* SourceTeamComponent;
    
public:
    UTeamComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTeamToDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetTeamCollision(bool bOn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTeam(UTeam* NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceTeamComponent(UTeamComponent* NewSourceTeamComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCollidesWithTeam(bool bCollidesWithTeam);
    
private:
    UFUNCTION()
    void OnRep_Team(UTeam* OldTeam);
    
    UFUNCTION()
    void OnRep_bIgnoreCollisionWithTeam();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNeutral(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsHostile(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFriendly(const AActor* Actor) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitializeTeam(UTeam* NewTeam);
    
    UFUNCTION(BlueprintPure)
    ETeamCollisionChannel GetTeamCollisionChannel() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetTeamAttitudeTowardsTeam(const UTeam* OtherTeam) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetTeamAttitudeTowardsActor(const AActor* Actor) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

