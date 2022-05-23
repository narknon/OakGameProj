#pragma once
#include "CoreMinimal.h"
#include "EchoDeviceUIController.generated.h"

class UEchoDeviceUIData;
class AOakCharacter_Player;

USTRUCT(BlueprintType)
struct FEchoDeviceUIController {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UEchoDeviceUIData* Config;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEquipEchoDevice;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakCharacter_Player> PrimaryCharacter;
    
    OAKGAME_API FEchoDeviceUIController();
};

