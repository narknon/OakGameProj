#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "Perception/AIPerceptionListenerInterface.h"
#include "RangedDistanceOverrides.h"
#include "UObject/NoExportTypes.h"
#include "EGbxGlyphSetOption.h"
#include "ActiveTrackedFeedback.h"
#include "PlayerDamageDataPresentation.h"
#include "GbxPlayerController.generated.h"

class UAimAssistStrategy;
class UTargetingComponent;
class UWwiseListenerComponent;
class UFirstPersonComponent;
class AGbxCharacter;
class URecentDamageTrackingComponent;
class UPlayerInput;
class UObject;
class UGbxProfile;
class UInputComponent;
class UTeamComponent;
class UGbxFeedbackData;
class UWwiseEvent;
class UTargetableComponent;
class UGbxPerceptionComponent;
class UCinematicModeData;
class UScreenParticleManagerComponent;
class UTeam;
class APawn;
class UFeedbackData;
class UDamageData;

UCLASS()
class GBXGAMESYSTEMCORE_API AGbxPlayerController : public APlayerController, public IGenericTeamAgentInterface, public IAIPerceptionListenerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrimaryCharacterChanged, AGbxCharacter*, NewCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPausedChangedDelegate, bool, bPaused);
    
protected:
    UPROPERTY(Transient)
    AGbxCharacter* GbxCharacter;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PrimaryCharacter)
    AGbxCharacter* PrimaryCharacter;
    
    UPROPERTY(Export)
    URecentDamageTrackingComponent* RecentDamageTrackingComponent;
    
    UPROPERTY(Transient)
    UGbxProfile* CurrentProfile;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UInputComponent> InputComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPlayerInput> PlayerInputClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAimAssistStrategy> AimAssistStrategyClass;
    
    UPROPERTY(EditDefaultsOnly)
    FSoftClassPath CheatClassGbx;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnPrimaryCharacterChanged OnPrimaryCharacterChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPausedChangedDelegate OnPauseChanged;
    
    UPROPERTY(Transient)
    EGbxGlyphSetOption CachedGlyphMode;
    
private:
    UPROPERTY(Export, Transient)
    UTargetingComponent* TargetingComponent;
    
    UPROPERTY(Export, Transient)
    UTargetableComponent* TargetableComponent;
    
    UPROPERTY(Export, Transient)
    UTeamComponent* TeamComponent;
    
    UPROPERTY(Export, Transient)
    UGbxPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(Export, Transient)
    UFirstPersonComponent* FirstPersonComponent;
    
    UPROPERTY(Transient)
    UAimAssistStrategy* AimAssistStrategy;
    
    UPROPERTY(Export, Transient)
    UWwiseListenerComponent* WwiseListener;
    
    UPROPERTY(Transient)
    TArray<FActiveTrackedFeedback> ActiveTrackedFeedbacks;
    
protected:
    UPROPERTY(Transient)
    bool bUsingGamepad;
    
    UPROPERTY(Transient)
    TArray<UCinematicModeData*> CinematicModeStack;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CinematicMode)
    UCinematicModeData* CinematicMode;
    
public:
    UPROPERTY(Export)
    UScreenParticleManagerComponent* ScreenParticleManagerComponent;
    
    AGbxPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTeam(UTeam* Team) const;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestPawnSlotDetach(APawn* Occupant);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCanSplitscreenJoin(int32 ControllerId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushCinematicMode(UCinematicModeData* InCinematicMode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopCinematicMode(UCinematicModeData* InCinematicMode);
    
protected:
    UFUNCTION()
    void OnRep_PrimaryCharacter();
    
    UFUNCTION()
    void OnRep_CinematicMode();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintPure)
    UTeamComponent* GetTeamComponent() const;
    
    UFUNCTION(BlueprintPure)
    UTeam* GetTeam() const;
    
    UFUNCTION(BlueprintPure)
    UTargetingComponent* GetTargetingComponent() const;
    
    UFUNCTION(BlueprintPure)
    UTargetableComponent* GetTargetableComponent() const;
    
    UFUNCTION(BlueprintPure)
    AGbxCharacter* GetPrimaryCharacter() const;
    
    UFUNCTION(BlueprintPure)
    void GetPlayerViewportSize(int32& SizeX, int32& SizeY) const;
    
    UFUNCTION(BlueprintPure)
    void GetPlayerViewportOffset(int32& OffsetX, int32& OffsetY) const;
    
    UFUNCTION(BlueprintPure)
    UGbxProfile* GetPlayerProfile() const;
    
    UFUNCTION(BlueprintPure)
    UGbxPerceptionComponent* GetGbxPerceptionComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool DeprojectViewportPositionToWorld(float ViewportX, float ViewportY, FVector& WorldLocation, FVector& WorldDirection, bool bUseForegroundProjection) const;
    
    UFUNCTION(Exec)
    void DebugCategory(FName CategoryName);
    
    UFUNCTION(Client, Reliable)
    void ClientStopFeedback(UFeedbackData* Data);
    
    UFUNCTION(Client, Unreliable)
    void ClientPlayWwiseEvent(UWwiseEvent* Event);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayFeedback(UFeedbackData* Data, float Scale, bool bLoop, UObject* SourceContext);
    
    UFUNCTION(Client, Unreliable)
    void ClientPerformFeedbackAtLocation(UFeedbackData* FeedbackData, FVector SourceLocation, bool bLoop, UObject* SourceContext, FRangedDistanceOverrides RangedOverrides);
    
    UFUNCTION(Client, Unreliable)
    void ClientPerformFeedback(UFeedbackData* FeedbackData, UObject* SourceContext);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyActivateCheckpoint();
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientCanSplitscreenJoin(int32 ControllerId, bool bCanJoin);
    
    UFUNCTION(Client, Unreliable)
    void ClientApplyDamageDataPresentation(const UDamageData* DamageData, const FPlayerDamageDataPresentation& PlayerPresentation);
    
    UFUNCTION(Client, Reliable)
    void Client_StopGbxFeedback(const UGbxFeedbackData* Data, UObject* SourceContext);
    
    UFUNCTION(Client, Reliable)
    void Client_PlayGbxFeedback(const UGbxFeedbackData* Data, bool bIs3D, bool bLoop, float Scale, UObject* SourceContext, FVector SourceLocation, float EffectFalloffMinDistance, float EffectFalloffMaxDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearCinematicMode();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearAndSetCinematicMode(UCinematicModeData* InCinematicMode);
    
    
    // Fix for true pure virtual functions not being implemented
};

