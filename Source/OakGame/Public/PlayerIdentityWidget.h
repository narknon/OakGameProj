#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayerIdentityWidget.generated.h"

class UGbxGFxMovie;

UCLASS()
class OAKGAME_API UPlayerIdentityWidget : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxMovie* OwningMovie;
    
public:
    UPlayerIdentityWidget();
};

