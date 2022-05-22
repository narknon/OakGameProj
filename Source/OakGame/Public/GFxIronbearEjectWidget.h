#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxIronbearEjectWidget.generated.h"

class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxIronbearEjectWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* ExitButtonText;
    
public:
    UGFxIronbearEjectWidget();
protected:
    UFUNCTION()
    void OnInputTypeChanged() const;
    
};

