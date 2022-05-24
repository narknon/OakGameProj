#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UsableAngleRestriction.h"
#include "HoldToUseSettings.h"
#include "UseDefSelection.h"
#include "UsableUsedSignatureDelegate.h"
#include "UsableUsedOnChannelSignatureDelegate.h"
#include "UsableLookedAtSignatureDelegate.h"
#include "UsableLookedAwayFromSignatureDelegate.h"
#include "UsabilityQuery.h"
#include "UsableComponent.generated.h"

class UGbxCondition;
class UUsabilityDataSelection;

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UUsableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHoldToUseSettings HoldToUseSettings;
    
    UPROPERTY(EditAnywhere)
    UUsabilityDataSelection* UsabilityData;
    
    UPROPERTY(EditAnywhere)
    bool bUseEnabledCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGbxCondition* EnabledCondition;
    
    UPROPERTY(EditAnywhere)
    FUseDefSelection PrimaryUseDefSelection;
    
    UPROPERTY(EditAnywhere)
    FUseDefSelection PrimaryHoldUseDefSelection;
    
    UPROPERTY(EditAnywhere)
    FUseDefSelection SecondaryUseDefSelection;
    
    UPROPERTY(EditAnywhere)
    FUseDefSelection SecondaryHoldUseDefSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanBeUsedFromVehicle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanBeUsedFromMech: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanOnlyBeUsedByOwner: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDefaultIsBackupPrimaryData: 1;
    
    UPROPERTY(EditAnywhere)
    int32 UsablePriority;
    
    UPROPERTY(EditAnywhere)
    bool bWantsMaxUseCount;
    
    UPROPERTY(EditAnywhere)
    int32 MaxUseCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 CurrentUseCount;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> RequiredComponentNames;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bUseAngleRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FUsableAngleRestriction AngleRestriction;
    
    UPROPERTY(EditAnywhere)
    bool bRequiresNetAuthority;
    
    UPROPERTY()
    FText HeaderName;
    
    UPROPERTY(BlueprintAssignable)
    FUsableUsedSignature OnUsed;
    
    UPROPERTY(BlueprintAssignable)
    FUsableUsedOnChannelSignature OnUsedPrimary;
    
    UPROPERTY(BlueprintAssignable)
    FUsableUsedOnChannelSignature OnUsedPrimaryHold;
    
    UPROPERTY(BlueprintAssignable)
    FUsableUsedOnChannelSignature OnUsedSecondary;
    
    UPROPERTY(BlueprintAssignable)
    FUsableUsedOnChannelSignature OnUsedSecondaryHold;
    
    UPROPERTY(BlueprintAssignable)
    FUsableLookedAtSignature OnLookedAt;
    
    UPROPERTY(BlueprintAssignable)
    FUsableLookedAwayFromSignature OnLookedAwayFrom;
    
    UUsableComponent();
    UFUNCTION(BlueprintCallable)
    void SetUsableLocked(bool bLocked, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionHeader(const FText& NewHeaderName);
    
    UFUNCTION(BlueprintCallable)
    void ResetUseCount();
    
    UFUNCTION(BlueprintNativeEvent)
    FText K2_GetOptionalErrorText() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2_CanBeUsed(const FUsabilityQuery& Query) const;
    
private:
    UFUNCTION()
    void GetValidPrimitiveComponentNames(TArray<FName>& ComponentNames) const;
    
public:
    UFUNCTION(BlueprintPure)
    FText GetInteractionHeader() const;
    
};

