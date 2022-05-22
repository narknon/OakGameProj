#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "CustomizationProviderInterface.h"
#include "CrazyEarlDoor.generated.h"

class UOakCustomizationData;
class UCustomizationList;

UCLASS()
class OAKGAME_API ACrazyEarlDoor : public AAdvancedInteractiveObject, public ICustomizationProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCustomizationList* CustomizationList;
    
public:
    ACrazyEarlDoor();
    UFUNCTION(BlueprintImplementableEvent)
    void OnPurchase(UOakCustomizationData* PurchasedItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitMenu();
    
    
    // Fix for true pure virtual functions not being implemented
};

