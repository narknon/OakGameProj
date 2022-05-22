#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameDialogSystemCustomizationInterface.h"
#include "OakDialogSystemCustomization.generated.h"

UCLASS()
class UOakDialogSystemCustomization : public UObject, public IGameDialogSystemCustomizationInterface {
    GENERATED_BODY()
public:
    UOakDialogSystemCustomization();
    
    // Fix for true pure virtual functions not being implemented
};

