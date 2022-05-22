#pragma once
#include "CoreMinimal.h"
#include "OakInputAbility.h"
#include "OakCharacterInputAbility.generated.h"

class AOakCharacter;
class UOakProfile;
class AOakPlayerController;

UCLASS()
class UOakCharacterInputAbility : public UOakInputAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter* OakCharacter;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakProfile* OakProfile;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakPlayerController* OakPlayerController;
    
public:
    UOakCharacterInputAbility();
protected:
    UFUNCTION(BlueprintCallable)
    void CancelCrouchToggle();
    
};

