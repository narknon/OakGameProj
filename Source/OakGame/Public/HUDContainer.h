#pragma once
#include "CoreMinimal.h"
#include "GbxHUDContainer.h"
#include "HUDContainer.generated.h"

class AOakPlayerController;
class AOakHUD;

UCLASS(EditInlineNew)
class OAKGAME_API UHUDContainer : public UGbxHUDContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakPlayerController* OakPCOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakHUD* OakHUD;
    
    UHUDContainer();
};

