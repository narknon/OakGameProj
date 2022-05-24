#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "UObject/NoExportTypes.h"
#include "GFxPetCommandWidget.generated.h"

class AOakCharacter;
class UGbxGFxObject;
class UBeastmasterCharacterComponent;
class UGbxGFxProgressBar;
class UGbxGFxHintWidget;
class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxPetCommandWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* StateWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* CommandHint;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PetIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CantUseFlourish;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* StatusBar;
    
    UPROPERTY(Transient)
    UGbxTextField* CountdownTimerText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DynamicSkillIcon;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ReadyForActivationColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor RechargingOrCooldownColor;
    
    UPROPERTY(EditAnywhere)
    float MaxPreAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CoundownSecondsMaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CountdownSecondsAudioValue;
    
    UPROPERTY(EditAnywhere)
    FName SkillUsedFailAudioEventName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UBeastmasterCharacterComponent* CachedBeastmasterComponent;
    
public:
    UGFxPetCommandWidget();
protected:
    UFUNCTION()
    void OnPetSpawnStateChanged(AOakCharacter* Pet) const;
    
    UFUNCTION()
    void OnPetAttackCommandFailed() const;
    
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
};

