#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GbxGFXConnectionWidget.generated.h"

UCLASS()
class OAKGAME_API UGbxGFXConnectionWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UGbxGFXConnectionWidget();
private:
    UFUNCTION()
    void OnConnectionStatusChanged(bool bIsLagging) const;
    
};

