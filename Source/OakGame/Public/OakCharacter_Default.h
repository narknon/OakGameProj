#pragma once
#include "CoreMinimal.h"
#include "OakCharacter.h"
#include "DialogParameterValue.h"
#include "ReapBehaviorInterface.h"
#include "OakCharacter_Default.generated.h"

class UDialogEvent;
class UStanceComponent;
class UGbxDialogComponent;
class UCharacterSoundTag;
class UDialogParameter;

UCLASS()
class AOakCharacter_Default : public AOakCharacter, public IReapBehaviorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UStanceComponent* Stance;
    
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UGbxDialogComponent* GbxDialog;
    
    UPROPERTY(EditDefaultsOnly)
    UDialogEvent* DeathDialogEvent;
    
    UPROPERTY(EditAnywhere)
    TMap<UDialogParameter*, FDialogParameterValue> DeathDialogEventParameterValues;
    
    UPROPERTY(EditDefaultsOnly)
    UCharacterSoundTag* DeathVocalizationTag;
    
public:
    AOakCharacter_Default();
private:
    UFUNCTION()
    void OnStartInjured_Common();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReaped();
    
    
    // Fix for true pure virtual functions not being implemented
};

