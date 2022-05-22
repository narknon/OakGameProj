#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "CSConsole.generated.h"

class UGbxMenuData;

UCLASS()
class ACSConsole : public AAdvancedInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* CSMenuData;
    
    ACSConsole();
};

